#pragma once

#include "Includes.h"

namespace Driver
{
	BOOL LoadDriver(PCHAR DriverPath, LPCSTR DisplayName);
	VOID UnloadDriver(LPCSTR DisplayName);
}

