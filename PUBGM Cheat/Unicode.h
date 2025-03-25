
#include <iostream>
#include <set>
#include <string>
#include <locale>

// WINDOWS
#if (_WIN32)
#include <Windows.h>
#include <conio.h>
#define WINDOWS_PLATFORM 1
#define DLLCALL STDCALL
#define DLLIMPORT _declspec(dllimport)
#define DLLEXPORT _declspec(dllexport)
#define DLLPRIVATE
#define NOMINMAX

//EMSCRIPTEN
#elif defined(__EMSCRIPTEN__)
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <unistd.h>
#include <termios.h>
#define EMSCRIPTEN_PLATFORM 1
#define DLLCALL
#define DLLIMPORT
#define DLLEXPORT __attribute__((visibility("default")))
#define DLLPRIVATE __attribute__((visibility("hidden")))

// LINUX - Ubuntu, Fedora, , Centos, Debian, RedHat
#elif (__LINUX__ || __gnu_linux__ || __linux__ || __linux || linux)
#define LINUX_PLATFORM 1
#include <unistd.h>
#include <termios.h>
#define DLLCALL CDECL
#define DLLIMPORT
#define DLLEXPORT __attribute__((visibility("default")))
#define DLLPRIVATE __attribute__((visibility("hidden")))
#define CoTaskMemAlloc(p) malloc(p)
#define CoTaskMemFree(p) free(p)

//ANDROID
#elif (__ANDROID__ || ANDROID)
#define ANDROID_PLATFORM 1
#define DLLCALL
#define DLLIMPORT
#define DLLEXPORT __attribute__((visibility("default")))
#define DLLPRIVATE __attribute__((visibility("hidden")))

//MACOS
#elif defined(__APPLE__)
#include <unistd.h>
#include <termios.h>
#define DLLCALL
#define DLLIMPORT
#define DLLEXPORT __attribute__((visibility("default")))
#define DLLPRIVATE __attribute__((visibility("hidden")))
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
#define IOS_SIMULATOR_PLATFORM 1
#elif TARGET_OS_IPHONE
#define IOS_PLATFORM 1
#elif TARGET_OS_MAC
#define MACOS_PLATFORM 1
#else

#endif

#endif



typedef std::string String;
typedef std::wstring WString;

#define EMPTY_STRING u8""s
#define EMPTY_WSTRING L""s

using namespace std::literals::string_literals;

class Strings
{
public:
    static String WideStringToString(const WString& wstr)
    {
        if (wstr.empty())
        {
            return String();
        }
        size_t pos;
        size_t begin = 0;
        String ret;

#if WINDOWS_PLATFORM
        int size;
        pos = wstr.find(static_cast<wchar_t>(0), begin);
        while (pos != WString::npos && begin < wstr.length())
        {
            WString segment = WString(&wstr[begin], pos - begin);
            size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &segment[0], segment.size(), NULL, 0, NULL, NULL);
            String converted = String(size, 0);
            WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &segment[0], segment.size(), &converted[0], converted.size(), NULL, NULL);
            ret.append(converted);
            ret.append({ 0 });
            begin = pos + 1;
            pos = wstr.find(static_cast<wchar_t>(0), begin);
        }
        if (begin <= wstr.length())
        {
            WString segment = WString(&wstr[begin], wstr.length() - begin);
            size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &segment[0], segment.size(), NULL, 0, NULL, NULL);
            String converted = String(size, 0);
            WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &segment[0], segment.size(), &converted[0], converted.size(), NULL, NULL);
            ret.append(converted);
        }
#elif LINUX_PLATFORM || MACOS_PLATFORM || EMSCRIPTEN_PLATFORM
        size_t size;
        pos = wstr.find(static_cast<wchar_t>(0), begin);
        while (pos != WString::npos && begin < wstr.length())
        {
            WString segment = WString(&wstr[begin], pos - begin);
            size = wcstombs(nullptr, segment.c_str(), 0);
            String converted = String(size, 0);
            wcstombs(&converted[0], segment.c_str(), converted.size());
            ret.append(converted);
            ret.append({ 0 });
            begin = pos + 1;
            pos = wstr.find(static_cast<wchar_t>(0), begin);
        }
        if (begin <= wstr.length())
        {
            WString segment = WString(&wstr[begin], wstr.length() - begin);
            size = wcstombs(nullptr, segment.c_str(), 0);
            String converted = String(size, 0);
            wcstombs(&converted[0], segment.c_str(), converted.size());
            ret.append(converted);
        }
#else
        static_assert(false, "Unknown Platform");
#endif
        return ret;
    }

    static WString StringToWideString(const String& str)
    {
        if (str.empty())
        {
            return WString();
        }

        size_t pos;
        size_t begin = 0;
        WString ret;
#ifdef WINDOWS_PLATFORM
        int size = 0;
        pos = str.find(static_cast<char>(0), begin);
        while (pos != std::string::npos) {
            std::string segment = std::string(&str[begin], pos - begin);
            std::wstring converted = std::wstring(segment.size() + 1, 0);
            size = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, &segment[0], segment.size(), &converted[0], converted.length());
            converted.resize(size);
            ret.append(converted);
            ret.append({ 0 });
            begin = pos + 1;
            pos = str.find(static_cast<char>(0), begin);
        }
        if (begin < str.length()) {
            std::string segment = std::string(&str[begin], str.length() - begin);
            std::wstring converted = std::wstring(segment.size() + 1, 0);
            size = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, segment.c_str(), segment.size(), &converted[0], converted.length());
            converted.resize(size);
            ret.append(converted);
        }

#elif LINUX_PLATFORM || MACOS_PLATFORM || EMSCRIPTEN_PLATFORM
        size_t size;
        pos = str.find(static_cast<char>(0), begin);
        while (pos != String::npos)
        {
            String segment = String(&str[begin], pos - begin);
            WString converted = WString(segment.size(), 0);
            size = mbstowcs(&converted[0], &segment[0], converted.size());
            converted.resize(size);
            ret.append(converted);
            ret.append({ 0 });
            begin = pos + 1;
            pos = str.find(static_cast<char>(0), begin);
        }
        if (begin < str.length())
        {
            String segment = String(&str[begin], str.length() - begin);
            WString converted = WString(segment.size(), 0);
            size = mbstowcs(&converted[0], &segment[0], converted.size());
            converted.resize(size);
            ret.append(converted);
        }
#else
        static_assert(false, "Unknown Platform");
#endif
        return ret;
    }
};

enum class ConsoleTextStyle
{
    DEFAULT = 0,
    BOLD = 1,
    FAINT = 2,
    ITALIC = 3,
    UNDERLINE = 4,
    SLOW_BLINK = 5,
    RAPID_BLINK = 6,
    REVERSE = 7,
};

enum class ConsoleForeground
{
    DEFAULT = 39,
    BLACK = 30,
    DARK_RED = 31,
    DARK_GREEN = 32,
    DARK_YELLOW = 33,
    DARK_BLUE = 34,
    DARK_MAGENTA = 35,
    DARK_CYAN = 36,
    GRAY = 37,
    DARK_GRAY = 90,
    RED = 91,
    GREEN = 92,
    YELLOW = 93,
    BLUE = 94,
    MAGENTA = 95,
    CYAN = 96,
    WHITE = 97
};

enum class ConsoleBackground
{
    DEFAULT = 49,
    BLACK = 40,
    DARK_RED = 41,
    DARK_GREEN = 42,
    DARK_YELLOW = 43,
    DARK_BLUE = 44,
    DARK_MAGENTA = 45,
    DARK_CYAN = 46,
    GRAY = 47,
    DARK_GRAY = 100,
    RED = 101,
    GREEN = 102,
    YELLOW = 103,
    BLUE = 104,
    MAGENTA = 105,
    CYAN = 106,
    WHITE = 107
};

class Console
{
private:
    static void EnableVirtualTermimalProcessing()
    {
#if defined WINDOWS_PLATFORM
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD dwMode = 0;
        GetConsoleMode(hOut, &dwMode);
        if (!(dwMode & ENABLE_VIRTUAL_TERMINAL_PROCESSING))
        {
            dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
            SetConsoleMode(hOut, dwMode);
        }
#endif
    }

    static void ResetTerminalFormat()
    {
        std::cout << "\033[0m";
    }

    static void SetVirtualTerminalFormat(ConsoleForeground foreground, ConsoleBackground background, std::set<ConsoleTextStyle> styles)
    {
        String format = "\033[";
        format.append(std::to_string(static_cast<int>(foreground)));
        format.append(";");
        format.append(std::to_string(static_cast<int>(background)));
        if (styles.size() > 0)
        {
            for (auto it = styles.begin(); it != styles.end(); ++it)
            {
                format.append(";");
                format.append(std::to_string(static_cast<int>(*it)));
            }
        }
        format.append("m");
        std::cout << format;
    }
public:
    static void Clear()
    {

#ifdef WINDOWS_PLATFORM
        std::system("cls");
#elif LINUX_PLATFORM || defined MACOS_PLATFORM
        std::system(u8"clear");
#elif EMSCRIPTEN_PLATFORM
        emscripten::val::global()["console"].call<void>(u8"clear");
#else
        static_assert(false, "Unknown Platform");
#endif
    }

    static void Write(const String& s, ConsoleForeground foreground = ConsoleForeground::DEFAULT, ConsoleBackground background = ConsoleBackground::DEFAULT, std::set<ConsoleTextStyle> styles = {})
    {
#ifndef EMSCRIPTEN_PLATFORM
        EnableVirtualTermimalProcessing();
        SetVirtualTerminalFormat(foreground, background, styles);
#endif
        String str = s;
#ifdef WINDOWS_PLATFORM
        WString unicode = Strings::StringToWideString(str);
        WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), unicode.c_str(), static_cast<DWORD>(unicode.length()), nullptr, nullptr);
#elif defined LINUX_PLATFORM || defined MACOS_PLATFORM || EMSCRIPTEN_PLATFORM
        std::cout << str;
#else
        static_assert(false, "Unknown Platform");
#endif

#ifndef EMSCRIPTEN_PLATFORM
        ResetTerminalFormat();
#endif
    }

    static void WriteLine(const String& s, ConsoleForeground foreground = ConsoleForeground::DEFAULT, ConsoleBackground background = ConsoleBackground::DEFAULT, std::set<ConsoleTextStyle> styles = {})
    {
        Write(s, foreground, background, styles);
        std::cout << std::endl;
    }

    static void Write(const WString& s, ConsoleForeground foreground = ConsoleForeground::DEFAULT, ConsoleBackground background = ConsoleBackground::DEFAULT, std::set<ConsoleTextStyle> styles = {})
    {
#ifndef EMSCRIPTEN_PLATFORM
        EnableVirtualTermimalProcessing();
        SetVirtualTerminalFormat(foreground, background, styles);
#endif
        WString str = s;

#ifdef WINDOWS_PLATFORM
        WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), str.c_str(), static_cast<DWORD>(str.length()), nullptr, nullptr);
#elif LINUX_PLATFORM || MACOS_PLATFORM || EMSCRIPTEN_PLATFORM
        std::cout << Strings::WideStringToString(str);
#else
        static_assert(false, "Unknown Platform");
#endif

#ifndef EMSCRIPTEN_PLATFORM
        ResetTerminalFormat();
#endif
    }

    static void WriteLine(const WString& s, ConsoleForeground foreground = ConsoleForeground::DEFAULT, ConsoleBackground background = ConsoleBackground::DEFAULT, std::set<ConsoleTextStyle> styles = {})
    {
        Write(s, foreground, background, styles);
        std::cout << std::endl;
    }

    static void WriteLine()
    {
        std::cout << std::endl;
    }

    static void Pause()
    {
        char c;
        do
        {
            c = getchar();
            std::cout << "Press Key " << std::endl;
        } while (c != 64);
        std::cout << "KeyPressed" << std::endl;
    }

    static int PauseAny(bool printWhenPressed = false, ConsoleForeground foreground = ConsoleForeground::DEFAULT, ConsoleBackground background = ConsoleBackground::DEFAULT, std::set<ConsoleTextStyle> styles = {})
    {
        int ch;
#ifdef WINDOWS_PLATFORM
        ch = _getch();
#elif LINUX_PLATFORM || MACOS_PLATFORM || EMSCRIPTEN_PLATFORM
        struct termios oldt, newt;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        ch = getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
#else
        static_assert(false, "Unknown Platform");
#endif
        if (printWhenPressed)
        {
            Console::Write(String(1, ch), foreground, background, styles);
        }
        return ch;
    }
};

