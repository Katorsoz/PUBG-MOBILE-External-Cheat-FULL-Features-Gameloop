#pragma once

#include "Includes.h"

#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"

namespace Emulator
{
	extern bool IsSmartGaGa;
	extern bool IsSmartGaGa4;
	extern bool IsSmartGaGa7;
	extern bool IsGameLoop;
	extern bool IsGameLoop4;
	extern bool IsGameLoop7;
}

namespace Game
{
	extern INT Id;
	extern HANDLE hProcess;
	extern HWND hWindow;
}

namespace Thread
{
	extern HANDLE hQueryThread;
	extern HANDLE hEspThread;
	extern HANDLE hAimbotThread;
	extern HANDLE hMemoryThread;
	extern HANDLE MagicX;
	extern HANDLE MagicBct;
	extern HANDLE Target ;

	extern HANDLE instanthitThread;
	extern HANDLE fastrunThread;
	extern HANDLE speedcarThread;
	extern HANDLE norecoilThread;
	extern HANDLE CarFlyThread;
	extern HANDLE aimbotwithmagic;

}