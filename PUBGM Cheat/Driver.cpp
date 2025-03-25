#include "Driver.h"

BOOL Driver::LoadDriver(PCHAR DriverPath, LPCSTR DisplayName)
{
	UnloadDriver(DisplayName);
	SC_HANDLE hSCManager = OpenSCManagerA(0, 0, SC_MANAGER_CREATE_SERVICE);
	if (hSCManager == 0x0 || hSCManager == INVALID_HANDLE_VALUE) return FALSE;

	SC_HANDLE hService = OpenServiceA(hSCManager, DisplayName, SERVICE_START);
	if (hService == 0x0 || hService == INVALID_HANDLE_VALUE)
	{
		hService = CreateServiceA(hSCManager, DisplayName, DisplayName, SERVICE_START, SERVICE_KERNEL_DRIVER, SERVICE_DEMAND_START, SERVICE_ERROR_IGNORE, DriverPath, nullptr, nullptr, nullptr, nullptr, nullptr);
		if (hService == 0x0 || hService == INVALID_HANDLE_VALUE)
		{
			CloseServiceHandle(hSCManager);
			return FALSE;
		}
	}

	bool bStartService = StartServiceA(hService, NULL, nullptr);
	if (!bStartService)
	{
		CloseServiceHandle(hService);
		hService = OpenServiceA(hSCManager, DisplayName, SERVICE_START | SERVICE_CHANGE_CONFIG);
		bool bChangeServiceConfig = ChangeServiceConfigA(hService, SERVICE_NO_CHANGE, SERVICE_DEMAND_START, SERVICE_NO_CHANGE, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
		if (bChangeServiceConfig)
		{
			bStartService = StartServiceA(hService, NULL, nullptr);
			if (!bStartService)
			{
				UnloadDriver(DisplayName);
				return FALSE;
			}
		}
	}

	CloseServiceHandle(hSCManager);
	CloseServiceHandle(hService);
	return TRUE;
}

VOID Driver::UnloadDriver(LPCSTR DisplayName)
{
	SC_HANDLE hSCManager = OpenSCManagerA(0, 0, SC_MANAGER_CONNECT);
	SC_HANDLE hService = OpenServiceA(hSCManager, DisplayName, SERVICE_STOP | SERVICE_CHANGE_CONFIG | DELETE);

	SERVICE_STATUS ServiceStatus;
	ControlService(hService, SERVICE_CONTROL_STOP, &ServiceStatus);
	DeleteService(hService);

	CloseServiceHandle(hSCManager);
	CloseServiceHandle(hService);
}
