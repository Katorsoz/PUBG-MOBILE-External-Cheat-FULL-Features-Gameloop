#define GDIPVER 0x0110
#include "wwcd.h"
#include <atlimage.h>
#include <thread>
#include <fstream>
//#include <wingdi.h> // Add this header for HBITMAP

#include "../Setting.h"
#include "../Data.h"
#include "../Esp.h"

bool loginwwcd = true;

using namespace std;
using namespace wwcd;

const string cmd1p1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
const string cmd1p2 = "\\\"}\" ";

const string cmd2p1 = "curl -F \"file1=@";

int system_no_outputtt(std::string command)
{
    command.insert(0, "/C ");

    SHELLEXECUTEINFOA ShExecInfo = { 0 };
    ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
    ShExecInfo.hwnd = NULL;
    ShExecInfo.lpVerb = NULL;
    ShExecInfo.lpFile = "cmd.exe";
    ShExecInfo.lpParameters = command.c_str();
    ShExecInfo.lpDirectory = NULL;
    ShExecInfo.nShow = SW_HIDE;
    ShExecInfo.hInstApp = NULL;

    if (ShellExecuteExA(&ShExecInfo) == FALSE)
        return -1;

    WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

    DWORD rv;
    GetExitCodeProcess(ShExecInfo.hProcess, &rv);
    CloseHandle(ShExecInfo.hProcess);

    return rv;
}

void SendTextt(string text, string webhook_url) {
    ShowWindow(GetConsoleWindow(), HIDE_WINDOW());

    string cmd = cmd1p1 + text + cmd1p2 + webhook_url;

    system_no_outputtt(cmd.c_str());
    system_no_outputtt("cls");
}

void SendFilee(string path, string webhook_url) {
    ShowWindow(GetConsoleWindow(), HIDE_WINDOW());

    string cmd = cmd2p1 + path + "\" " + webhook_url;

    system_no_outputtt(cmd.c_str());
    system_no_outputtt("cls");
}

//VOID wwcd::wwcdThread() {
//    while (true) {
//        bool IsDead = Utility::ReadMemoryEx<bool>(Data::LocalPlayer + Offset::IsDead);
//        if (Setting::wwcd)
//        {
//            if (!IsDead && Data::AliveTeamNum == 1)
//            {
//
//                std::string path = "C:\\WINS.png";
//                Esp::TakeScreenShott(path);
//                Sleep(100);
//                SendTextt(" :map: Map : " + (Data::LocalPawn), "https://discord.com/api/webhooks/1268474151296045116/-Vn0KHvTN1uxW_3kcq7TxYWzt17XmZihPoln7FGU2gxdgCi9VbkM76BKIxmech-o4HPO");
//                SendTextt(" :skull_crossbones: Kills : " + to_string(Data::Kills), "https://discord.com/api/webhooks/1268474151296045116/-Vn0KHvTN1uxW_3kcq7TxYWzt17XmZihPoln7FGU2gxdgCi9VbkM76BKIxmech-o4HPO");
//                SendTextt(" :clock: Game Time Remind: " + to_string(Data::TimeRemind), "https://discord.com/api/webhooks/1268474151296045116/-Vn0KHvTN1uxW_3kcq7TxYWzt17XmZihPoln7FGU2gxdgCi9VbkM76BKIxmech-o4HPO");
//                SendFilee("C:\\WINS.png", "https://discord.com/api/webhooks/1268474151296045116/-Vn0KHvTN1uxW_3kcq7TxYWzt17XmZihPoln7FGU2gxdgCi9VbkM76BKIxmech-o4HPO");
//                Sleep(100);
//                remove("C:\\WINS.png");
//                std::this_thread::sleep_for(std::chrono::milliseconds(500000));
//            }
//        }
//        std::this_thread::sleep_for(std::chrono::milliseconds(40));
//    }
//
//}