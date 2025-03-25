#pragma once

#include "Includes.h"
#include "Algorithm.h"
#include "Utility.h"
#include "Data.h"
#include "Esp.h"

namespace Memory
{
	extern	bool IsMagicInitialized;// = false;
	extern	bool WasBuggedHook;// = false;


	int carbesttarget();
	int AimFindBestTarget();
	int AimFindBestTargetWeapon();
	VECTOR3 GetMagicCoordinate();
	VOID RestoreHook();
	VOID MemoryThread();
	VOID WeaponMarco();
	VOID WeaponCheats();
	bool moveMouseDown(int x, int y);

}