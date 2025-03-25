#pragma once

#include "Includes.h"
#include "Global.h"

typedef struct _MEMORY_REGION
{
	DWORD_PTR dwBaseAddr;
	DWORD_PTR dwMemorySize;

} MEMORY_REGION, * PMEMORY_REGION;

namespace Utility
{
	DWORD dGet(DWORD addr);
	float fGet(DWORD addr);
	BYTE bGet(DWORD addr);
	void AOBREP(BYTE BypaRep[], BYTE write[], SIZE_T size, SIZE_T sizee, int numbers);
	INT GetTrueProcessId(TCHAR* ProcessName);
	BOOL MemSearch(BYTE* bSearchData, int nSearchSize, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr, BOOL bIsCurrProcess, int iSearchMode, std::vector<DWORD_PTR>& vRet);
	VOID ChangeClickability(BOOL CanClick, HWND hWindow);
	bool FindPattern(BYTE* bSearchData, int nSearchSize, DWORD_PTR dwStartAddr, DWORD_PTR dwEndAddr, BOOL bIsCurrProcess, int iSearchMode, std::vector<DWORD_PTR>& vRet);
	void inject_4bit_array(BYTE arr[], int index, unsigned char value_to_insert);
	template <typename T>
	T ReadMemoryEx(DWORD BaseAddress)
	{
		T Buffer;
		ReadProcessMemory(Game::hProcess, (LPCVOID)BaseAddress, &Buffer, sizeof(Buffer), nullptr);

		return Buffer;
	}

	template <typename T>
	T ReadMemoryExWSize(DWORD_PTR BaseAddress, DWORD bufSize)
	{
		T Buffer;
		ReadProcessMemory(Game::hProcess, (LPCVOID)BaseAddress, &Buffer, sizeof(bufSize), nullptr);
		return Buffer;
	}

	template <typename T>
	void WriteMemoryEx(DWORD BaseAddress, T WriteValue)
	{
		WriteProcessMemory(Game::hProcess, (LPVOID)BaseAddress, &WriteValue, sizeof(WriteValue), nullptr);
	}

	template <typename T>
	void WriteProtectedMemoryEx(DWORD BaseAddress, T WriteValue)
	{
		DWORD OldProtect;

		VirtualProtectEx(Game::hProcess, (LPVOID)BaseAddress, sizeof(WriteValue), PAGE_EXECUTE_READWRITE, &OldProtect);
		WriteProcessMemory(Game::hProcess, (LPVOID)BaseAddress, &WriteValue, sizeof(WriteValue), nullptr);
		VirtualProtectEx(Game::hProcess, (LPVOID)BaseAddress, sizeof(WriteValue), OldProtect, nullptr);
	}
 
 	template <typename... T>
	void writeBytes(DWORD addr, T... towrite)
	{
		//MM->init();
		DWORD old;
		BYTE pBuf[] = { towrite... };
		VirtualProtectEx(Game::hProcess, (LPVOID)addr, sizeof(pBuf), PAGE_READWRITE, &old);
		WriteProcessMemory(Game::hProcess, (LPVOID)addr, pBuf, sizeof(pBuf), 0);
	}

}