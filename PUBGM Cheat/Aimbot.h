#pragma once

#include "Includes.h"
#include "DX11Window.h"
#include "Algorithm.h"
#include "Data.h"
#include "Esp.h"
#include "Setting.h"
#include<thread>
namespace Aimbot
{
	VECTOR3 GetClosestEnemy();
	VOID AimbotThread();
	bool InsideFov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius);
	bool InsideFov1(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR3 PlayerW2SBone, float FovRadius);
}
