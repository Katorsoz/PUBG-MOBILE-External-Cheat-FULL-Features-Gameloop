#include "Global.h"

bool Emulator::IsSmartGaGa = false;
bool Emulator::IsSmartGaGa4 = false;
bool Emulator::IsSmartGaGa7 = false;
bool Emulator::IsGameLoop = false;
bool Emulator::IsGameLoop4 = false;
bool Emulator::IsGameLoop7 = false;

INT Game::Id = 0;
HANDLE Game::hProcess = 0;
HWND Game::hWindow = 0;

HANDLE Thread::hQueryThread = 0;
HANDLE Thread::hEspThread = 0;
HANDLE Thread::hAimbotThread = 0;
HANDLE Thread::hMemoryThread = 0;
HANDLE Thread::MagicX = 0;
HANDLE Thread::Target = 0;
HANDLE Thread::MagicBct = 0;

HANDLE Thread::instanthitThread = 0;
HANDLE Thread::fastrunThread = 0;
HANDLE Thread::speedcarThread = 0;
HANDLE Thread::norecoilThread = 0;
HANDLE Thread::CarFlyThread = 0;
HANDLE Thread::aimbotwithmagic = 0;