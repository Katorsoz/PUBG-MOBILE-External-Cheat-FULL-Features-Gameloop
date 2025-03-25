#pragma once

#include "Includes.h"
#include "Algorithm.h"
#include "Setting.h"
#include "Data.h"
#include "DX11.h"
#include "DX11Window.h"
#include "Memory.h"
#include "Offset.h"
#include "icon.h"
#include "iconcpp.h"
#include "font.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"



namespace Esp
{
	extern D3DMATRIX ViewMatrix;
	void LoadConfig(std::string Path);
	VOID EspThread();
	//VOID InitMenuStrings();
	//void TakeScreenShot(const std::string& path);
	//void TakeScreenShott(const std::string& path);
}

//void WriteConfigurate(std::string Path);
//void LoadConfiggg(std::string Path);

void NationFlag(VECTOR3 Screen, AActor& AActor, int PosX, int PosY, int X, int Y);
