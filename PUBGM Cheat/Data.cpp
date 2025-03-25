#include "Data.h"
#include<thread>
#include <unordered_map>
#include <map>
#include "Memory.h"
#include <locale>
#include <codecvt>
#include <array>
#include <algorithm>
#include <thread>
#include "Arabic/FarsiType.h"
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
Espp* g_pEsp = new Espp();
DWORD Data::ViewMatrixBase;
DWORD Data::Ue4base;
AActor Data::TargetActor;
DWORD Data::UWorld = 0;
DWORD Data::MyPlayerWorld = 0;
BYTE ViewMatrixSearch[] =
{
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01
};

DWORD Data::GetViewMatrixBase(DWORD StartAddress, DWORD EndAddress)
{
	DWORD ViewMatrixBase = 0;
	std::vector<DWORD_PTR> FoundedBase;
	Utility::MemSearch(ViewMatrixSearch, sizeof(ViewMatrixSearch), StartAddress, EndAddress, 0, 0, FoundedBase);

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		DWORD Cand = FoundedBase[i] - 0x20;
		DWORD Eng = Utility::ReadMemoryEx<DWORD>(Cand) + 0x20;
		DWORD Tmp = Utility::ReadMemoryEx<DWORD>(Eng) + 0x200;

		float v1, v2, v3, v4;
		v1 = Utility::ReadMemoryEx<float>(Tmp + 0x8);
		v2 = Utility::ReadMemoryEx<float>(Tmp + 0x18);
		v3 = Utility::ReadMemoryEx<float>(Tmp + 0x28);
		v4 = Utility::ReadMemoryEx<float>(Tmp + 0x38);

		if (v1 == 0 && v2 == 0 && v3 == 0 && v4 >= 3)
		{
			ViewMatrixBase = Cand;
			FoundedBase.clear();
			break;
		}
	}

	FoundedBase.clear();
	return ViewMatrixBase;
}

BYTE SearchArrayUE4[] =
{
	0x34, 0x00, 0x00, 0x00,
	'?', '?', '?', '?',
	0x00, 0x02, 0x00, 0x05,
	0x34, 0x00, 0x20, 0x00,
	'?',
	0x00, 0x28, 0x00,
	'?',
	0x00,
	'?',
	0x00, 0x06, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
	0x34, 0x00, 0x00, 0x00,
	'?', '?',
	0x00, 0x00,
	'?', '?'
};

DWORD Data::GetUe4Base(DWORD StartAddress, DWORD EndAddress)
{
	DWORD ViewMatrixBase = 0;
	std::vector<DWORD_PTR> FoundedBase;
	Utility::MemSearch(SearchArrayUE4, sizeof(SearchArrayUE4), StartAddress, EndAddress, 0, 0, FoundedBase);

	for (int i = 0; i < FoundedBase.size(); i++)
	{
		DWORD Cand = FoundedBase[i];

		if (Utility::ReadMemoryEx<uint32_t>(Cand + 0x4) == 147237584)
		{
			ViewMatrixBase = Cand - 0x1C;
			FoundedBase.clear();
			break;
		}
	}

	FoundedBase.clear();
	return ViewMatrixBase;
}


string GetString(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i);
	}

	string Result = String;

	delete[] String;
	return Result;
}

string GetEntityTypeo(LONG GNames, LONG Id)
{
	string Result = "";

	DWORD GName = Utility::ReadMemoryEx<DWORD>(GNames);

	if (Id > 0 && Id < 2000000)
	{
		DWORD Page = Id / 16384;
		DWORD Index = Id % 16384;
		DWORD SecPartAddv = Utility::ReadMemoryEx<DWORD>(GName + Page * 4);

		if (SecPartAddv > 0)
		{
			LONG NameAddv = Utility::ReadMemoryEx<DWORD>(SecPartAddv + Index * 4);

			if (NameAddv > 0)
			{
				Result = GetString(NameAddv + 0x8);
			}
		}
	}

	return Result;
}
std::string GetEntityType(DWORD gNames, int id)
{

	//auto gname = Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(gNames) + 0x80);
//	auto fNamePtr = Utility::ReadMemoryEx<DWORD>(gNames + int(id / 16384) * 0x4);
	auto fName = Utility::ReadMemoryEx<DWORD>(gNames + int(id % 16384) * 0x4);
	auto entryOffset = fName + 0x8;
	auto nameEntry = Utility::ReadMemoryEx<INT16>(entryOffset);

	auto nameLength = nameEntry >> 6;
	char buff[1028]{};

	if ((uint32_t)nameLength && nameLength > 0)
	{
		ReadProcessMemory(Game::hProcess, LPCVOID(entryOffset), buff, nameLength, 0);

		buff[nameLength] = '\0';

		std::string name_str(buff, nameLength);

		return name_str.c_str();
	}
	else
		return "";

	return "";
}
struct ObjectName
{
	char Data[64];
};



string GetEntityType2(LONG GNames, LONG Id)
{
	DWORD GName = Utility::ReadMemoryEx<DWORD>(GNames);
	DWORD NamePtr = Utility::ReadMemoryEx<DWORD>(GName + int(Id / 16384) * 0x4);
	DWORD Name = Utility::ReadMemoryEx<DWORD>(NamePtr + int(Id % 16384) * 0x4);
	ObjectName pBuffer = Utility::ReadMemoryEx<ObjectName>(Name + 0x8);

	return string(pBuffer.Data);
}

#pragma region ReadArabicNames
static std::wstring WideEmptyString = L"";
std::map<std::wstring, std::wstring> CharsMap
{
	{L"Ū", L" "},
	{L"ē", L" "},
	{L"Ē", L" "},
	{L"ō", L" "},
	{L"Ř", L" "},
	{L"ř", L" "},
	{L"ŗ", L" "},
	{L"Ŗ", L" "},
	{L"ŕ", L" "},
	{L"Ŕ", L" "},
	{L"Ů", L" "},
	{L"Ŭ", L" "},
	{L"ŭ", L" "},
	{L"ų", L" "},
	{L"ů", L" "},
	{L"Ű", L" "},
	{L"Ŵ", L" "},
	{L"ŵ", L" "},
	{L"Ŷ", L" "},
	{L"ŷ", L" "},
	{L"ī", L" "},
	{L"ū", L" "},
	{L"į", L" "},
	{L"Ġ", L" "},
	{L"ġ", L" "},
};

std::wstring StringReplaceAll(std::wstring StringToScan, const std::wstring& Start, const std::wstring& End)
{
	size_t start_pos = 0;
	while ((start_pos = StringToScan.find(Start, start_pos)) != std::wstring::npos)
	{
		StringToScan.replace(start_pos, Start.length(), End);
		start_pos += End.length();
	}
	return StringToScan;
}
std::wstring ArrangeThem(std::wstring StringToArrange)
{
	WideEmptyString = StringToArrange;
	for (size_t i = 0; i < StringToArrange.size(); i++)
	{
		for (auto const& FaCharInWord : CharsMap)
		{
			if (FaCharInWord.first == std::wstring(1, StringToArrange[i]))
				WideEmptyString = StringReplaceAll(WideEmptyString, std::wstring(1, StringToArrange[i]), FaCharInWord.second);
		}

	}
	return WideEmptyString;
}
std::wstring read_unicode(const std::uintptr_t address, std::size_t size)
{
	const auto buffer = std::make_unique<wchar_t[]>(size);
	ReadProcessMemory(Game::hProcess, (LPCVOID)address, buffer.get(), size * 2, 0);
	return std::wstring(buffer.get());
}
std::string GetPlayerNameUTF(DWORD BaseAddress)
{
	std::wstring FirstConvert = read_unicode(BaseAddress, 16);
	auto WideString = std::wstring(FirstConvert);
	return Ws_ExType::ConvertToFAGlyphs(WideString);
}
#pragma endregion


string GetPlayerName(DWORD BaseAddress)
{
	char* String = new char[34];
	for (int i = 0; i < 34; i++)
	{
		String[i] = Utility::ReadMemoryEx<char>(BaseAddress + i * 2);
	}

	string Name = String;

	delete[] String;
	return Name;
}
//std::wstring GetPlayerName3(DWORD BaseAddress)
//{
//	wchar_t* temp = new wchar_t[34];
//	for (int i = 0; i < 34; i++)
//	{
//		temp[i] = Utility::ReadMemoryExWSize<wchar_t>(adds + i * 2, sizeof(wchar_t));
//	}
//	std::wstring ret = temp;
//	delete temp;
//	return ret;
//}

BOOL IsPlayer(string str)
{
	if (str.find("BP_PlayerPawn") != std::string::npos ||
		str.find("PlayerCharacter") != std::string::npos ||
		str.find("PlanET_FakePlayer") != std::string::npos ||
		str.find("BP_PlayerPawn_FM_C") != std::string::npos ||
		str.find("BP_PlayerPawn_C") != std::string::npos ||
		str.find("BP_PlayerPawn_Rune_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_InvisibleZombie_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_Human_C") != std::string::npos ||
		str.find("BP_PlayerPawn_ZombieBase_C") != std::string::npos ||
		str.find("BP_PlayerPawn_TDM_TPP_C") != std::string::npos ||
		str.find("BP_PlayerPawn_FM_Bot_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_SlayTheBot_C") != std::string::npos ||
		str.find("PlanET_FakePlayer_AIPawn_C") != std::string::npos ||
		str.find("BP_PlayerPawn_SI_C") != std::string::npos ||
		str.find("BP_PlayerPawn_Heavy_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_Revenger_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_NormalZombie_C") != std::string::npos ||
		str.find("PlayerPawn_Infec_KingZombie_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanA_C") != std::string::npos ||
		str.find("BP_CharacterModelTaget_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanA_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanDB_Livik_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_PlanDB_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_Halloween3_Livik_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_Halloween3_C") != std::string::npos ||
		str.find("Mob_Zombie94_C") != std::string::npos ||
		str.find("Mob_Zombie93_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_IceWorld2_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_IceWorld2_Desert_C") != std::string::npos ||
		str.find("BP_PlayerCharacter_IceWorld2_Livik_C") != std::string::npos)
	{
		return true;
	}

	return FALSE;
}


std::string GetGrenadeType(std::string classname)
{

	if (classname.find("BP_Grenade_Smoke_C") != std::string::npos)
		return "Smoke Grenade";
	if (classname.find("BP_Grenade_Burn_C") != std::string::npos)
		return "Burn Molotov";
	if (classname.find("BP_Grenade_Stun_C") != std::string::npos)
		return "Flash Granade";
	if (classname.find("BP_Grenade_Shoulei") != std::string::npos)
		if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos)
			return "Frag Grenade";
	if (classname.find("AirAttackBomb_Livik_C") != std::string::npos || classname.find("AirAttackBomb_C") != std::string::npos)
		return "Air Bomb !";
	return "noooooooot";



}

string GetItemType(string Name)//
{
	if (Setting::Lang == 0 || Setting::Lang == 2)
	{
		if (Setting::Esp_Item_CrossBow) if (Name.find("BP_Other_CrossBow_Wrapper_C") != std::string::npos) return "CrossBow";
		if (Setting::Esp_Item_CrossBow_Quick) if (Name.find("BP_ZDD_Crossbow_Q_Pickup_C") != std::string::npos) return "CrossBow_Quick";
		if (Setting::Esp_Item_Ammo_Bolt) if (Name.find("BP_Ammo_Bolt_Pickup_C") != string::npos) return "CrossBow_Ammo_Bolt";

		if (Setting::Esp_Item_M249) if (Name.find("BP_Other_M249_Wrapper_C") != std::string::npos)return "M249";
		if (Setting::Esp_Item_MG3) if (Name.find("BP_Other_MG3_Wrapper_C") != std::string::npos)return "MG3";
		if (Setting::Esp_Item_DP28) if (Name.find("BP_Other_DP28_Wrapper_C") != string::npos) return "DP28";
		if (Setting::Esp_Item_HuntingBow) if (Name.find("BP_Other_HuntingBowEA_Wrapper_C") != string::npos) return "Hunting Bow";
		if (Setting::Esp_Item_CrossbowBorderland) if (Name.find("BP_Other_CrossbowBorderland_Wrapper_C") != string::npos) return "Crossbow Borderland";

		if (Setting::Esp_Item_AMR) if (Name.find("BP_Sniper_AMR_Wrapper_C") != string::npos) return "AMR";
		if (Setting::Esp_Item_M24) if (Name.find("BP_Sniper_M24_Wrapper_C") != string::npos) return "M24";
		if (Setting::Esp_Item_Kar98k) if (Name.find("BP_Sniper_Kar98k_Wrapper_C") != string::npos) return "Kar98k";
		if (Setting::Esp_Item_Mosin) if (Name.find("BP_Sniper_Mosin_Wrapper_C") != string::npos) return "Mosin";
		if (Setting::Esp_Item_Awm) if (Name.find("BP_Sniper_AWM_Wrapper_C") != string::npos) return "AWM";


		if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return "SCAR-L";
		if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) return "M416";
		if (Setting::Esp_Item_M762) if (Name.find("BP_Rifle_M762_Wrapper_C") != string::npos) return "M762";
		if (Setting::Esp_Item_Mk47Mutant) if (Name.find("BP_Rifle_Mk47_Wrapper_C") != string::npos) return "Mk47 Mutant";
		if (Setting::Esp_Item_M16A4) if (Name.find("BP_Rifle_M16A4_Wrapper_C") != string::npos) return "M16A4";
		if (Setting::Esp_Item_G36C) if (Name.find("BP_Rifle_G36_Wrapper_C") != string::npos) return "G36C";
		if (Setting::Esp_Item_QBZ) if (Name.find("BP_Rifle_QBZ_Wrapper_C") != string::npos) return "QBZ";
		if (Setting::Esp_Item_AUG) if (Name.find("BP_Rifle_AUG_Wrapper_C") != string::npos) return "AUG";
		if (Setting::Esp_Item_Groza) if (Name.find("BP_Rifle_Groza_Wrapper_C") != string::npos) return "Groza";
		if (Setting::Esp_Item_AKM) if (Name.find("BP_Rifle_AKM_Wrapper_C") != string::npos) return "AKM";
		if (Setting::Esp_Item_FAMAS) if (Name.find("BP_Rifle_FAMAS_Wrapper_C") != string::npos) return "FAMAS";
		if (Setting::Esp_Item_AN94) if (Name.find("BP_Rifle_AN94_Wrapper_C") != string::npos) return "AN94";
		if (Setting::Esp_Item_HoneyBadger) if (Name.find("BP_Rifle_HoneyBadger_Wrapper_C") != string::npos) return "Honey Badger";


		if (Setting::Esp_Item_Mk12) if (Name.find("BP_Sniper_MK12_Wrapper_C") != std::string::npos)return "MK12";
		if (Setting::Esp_Item_QBU) if (Name.find("BP_Sniper_QBU_Wrapper_C") != string::npos) return "QBU";
		if (Setting::Esp_Item_SLR) if (Name.find("BP_Sniper_SLR_Wrapper_C") != string::npos) return "SLR";
		if (Setting::Esp_Item_SKS) if (Name.find("BP_Sniper_SKS_Wrapper_C") != string::npos) return "SKS";
		if (Setting::Esp_Item_Mini14) if (Name.find("BP_Sniper_Mini14_Wrapper_C") != string::npos) return "Mini-14";
		if (Setting::Esp_Item_Mk14) if (Name.find("BP_Sniper_Mk14_Wrapper_C") != string::npos) return "Mk14";
		if (Setting::Esp_Item_Win94) if (Name.find("BP_Sniper_Win94_Wrapper_C") != string::npos) return "Win94";
		if (Setting::Esp_Item_VSS) if (Name.find("BP_Sniper_VSS_Wrapper_C") != string::npos) return "VSS";


		if (Setting::Esp_Item_PP19) if (Name.find("BP_MachineGun_PP19_Wrapper_C") != string::npos) return "PP19Bizon";
		if (Setting::Esp_Item_P90) if (Name.find("BP_MachineGun_P90_Wrapper_C") != string::npos) return "P90";
		if (Setting::Esp_Item_TommyGun) if (Name.find("BP_MachineGun_TommyGun_Wrapper_C") != string::npos) return "Tommy Gun";
		if (Setting::Esp_Item_MP5K) if (Name.find("BP_MachineGun_MP5K_Wrapper_C") != string::npos) return "MP5K";
		if (Setting::Esp_Item_UMP9) if (Name.find("BP_MachineGun_UMP9_Wrapper_C") != string::npos) return "UMP9";
		if (Setting::Esp_Item_Vector) if (Name.find("BP_MachineGun_Vector_Wrapper_C") != string::npos) return "Vector";
		if (Setting::Esp_Item_Uzi) if (Name.find("BP_MachineGun_Uzi_Wrapper_C") != string::npos) return "Uzi";


		if (Setting::Esp_Item_SawedOff) if (Name.find("BP_ShotGun_SawedOff_Wrapper_C") != string::npos) return "SawedOff";
		if (Setting::Esp_Item_S12K) if (Name.find("BP_ShotGun_S12K_Wrapper_C") != string::npos) return "S12K";
		if (Setting::Esp_Item_S1897) if (Name.find("BP_ShotGun_S1897_Wrapper_C") != string::npos) return "S1897";
		if (Setting::Esp_Item_S686) if (Name.find("BP_ShotGun_S686_Wrapper_C") != string::npos) return "S686";
		if (Setting::Esp_Item_DBS) if (Name.find("BP_ShotGun_DP12_Wrapper_C") != string::npos) return "DBS";
		if (Setting::Esp_Item_S12K) if (Name.find("BP_ShotGun_S12K_Wrapper_C") != string::npos) return "S12K";
		if (Setting::Esp_Item_M1014) if (Name.find("BP_ShotGun_M1014_Wrapper_C") != string::npos) return "M1014";
		if (Setting::Esp_Item_Neostead) if (Name.find("BP_ShotGun_Neostead2000_Wrapper_C") != string::npos) return "Neostead";


		if (Setting::Esp_Item_Pan) if (Name.find("BP_WEP_Pan_Wrapper_C") != std::string::npos) return "Pan";
		if (Setting::Esp_Item_Cowbar) if (Name.find("BP_WEP_Cowbar_Wrapper_C") != std::string::npos) return "Cowbar";
		if (Setting::Esp_Item_Machete) if (Name.find("BP_WEP_Machete_Wrapper_C") != std::string::npos) return "Machete";
		if (Setting::Esp_Item_Sickle) if (Name.find("BP_WEP_Sickle_Wrapper_C") != std::string::npos) return "Sickle";


		if (Setting::Esp_Item_Awmimo) if (Name.find("BP_Ammo_300Magnum_Wrapper_C") != std::string::npos) return "300Magnum";
		if (Setting::Esp_Item_762mm) if (Name.find("BP_Ammo_762mm_Pickup_C") != string::npos) return "7.62mm";
		if (Setting::Esp_Item_556mm) if (Name.find("BP_Ammo_556mm_Pickup_C") != string::npos) return "5.56mm";
		if (Setting::Esp_Item_9mm) if (Name.find("BP_Ammo_9mm_Pickup_C") != string::npos) return "9mm";
		if (Setting::Esp_Item_45ACP) if (Name.find("BP_Ammo_45ACP_Pickup_C") != string::npos) return "45ACP";
		if (Setting::Esp_Item_12Guage) if (Name.find("BP_Ammo_12Guage_Wrapper_C") != string::npos) return "12Guage";
		if (Setting::Esp_Item_Flare) if (Name.find("BP_Ammo_Flare_Pickup_C") != string::npos) return "Flare Ammo";


		if (Setting::Esp_Item_DesertEagle) if (Name.find("BP_Pistol_DesertEagle_Wrapper_C") != string::npos) return "DesertEagle";
		if (Setting::Esp_Item_P1911) if (Name.find("BP_Pistol_P1911_Wrapper_C") != string::npos) return "P1911";
		if (Setting::Esp_Item_R45) if (Name.find("BP_Pistol_R45_Wrapper_C") != string::npos) return "R45";
		if (Setting::Esp_Item_P18C) if (Name.find("BP_Pistol_P18C_Wrapper_C") != string::npos) return "P18C";
		if (Setting::Esp_Item_P92) if (Name.find("BP_Pistol_P92_Wrapper_C") != string::npos) return "P92";
		if (Setting::Esp_Item_Vz61) if (Name.find("BP_Pistol_Vz61_Wrapper_C") != string::npos) return "Vz61";
		if (Setting::Esp_Item_R1895) if (Name.find("BP_Pistol_R1895_Wrapper_C") != string::npos) return "R1895";
		if (Setting::Esp_Item_FlareGun) if (Name.find("BP_Pistol_Flaregun_Wrapper_C") != string::npos) return "Flare Gun";



		if (Setting::Esp_Item_Vertical) if (Name.find("BP_WB_Vertical_Pickup_C") != string::npos) return "AR_Vertical";
		if (Setting::Esp_Item_HalfGrip) if (Name.find("BP_WB_HalfGrip_Pickup_C") != string::npos) return "AR_HalfGrip";
		if (Setting::Esp_Item_LightGrip) if (Name.find("BP_WB_LightGrip_Pickup_C") != string::npos) return "AR_LightGrip";
		if (Setting::Esp_Item_Angled) if (Name.find("BP_WB_Angled_Pickup_C") != string::npos) return "AR_Angled";
		if (Setting::Esp_Item_Lasersight) if (Name.find("BP_WB_Lasersight_Pickup_C") != string::npos) return "AR_Lasersight";
		if (Setting::Esp_Item_ThumbGrip) if (Name.find("BP_WB_ThumbGrip_Pickup_C") != string::npos) return "AR_ThumbGrip";


		if (Setting::Esp_Item_Mid_FlashHider) if (Name.find("BP_QK_Mid_FlashHider_Pickup_C") != string::npos) return "SMG_FlashHider";
		if (Setting::Esp_Item_Mid_Compensator) if (Name.find("BP_QK_Mid_Compensator_Pickup_C") != string::npos) return "SMG_Compensator";
		if (Setting::Esp_Item_Mid_Suppressor) if (Name.find("BP_QK_Mid_Suppressor_Pickup_C") != string::npos) return "SMG_Suppressor";
		if (Setting::Esp_Item_Micro_UZI) if (Name.find("BP_QT_UZI_Pickup_C") != string::npos) return "(Micro UZI)";

		if (Setting::Esp_Item_Large_FlashHider) if (Name.find("BP_QK_Large_FlashHider_Pickup_C") != string::npos) return "AR_FlashHider";
		if (Setting::Esp_Item_Large_Compensator) if (Name.find("BP_QK_Large_Compensator_Pickup_C") != string::npos) return "AR_Compensator";
		if (Setting::Esp_Item_Large_Suppressor) if (Name.find("BP_QK_Large_Suppressor_Pickup_C") != string::npos) return "AR_Suppressor";
		if (Setting::Esp_Item_Taktik) if (Name.find("BP_QT_A_Pickup_C") != string::npos) return "Chekpad_AR";

		if (Setting::Esp_Item_Sniper_FlashHider) if (Name.find("BP_QK_Sniper_FlashHider_Pickup_C") != string::npos) return "Sniper_FlashHider";
		if (Setting::Esp_Item_Sniper_Compensator) if (Name.find("BP_QK_Sniper_Compensator_Pickup_C") != string::npos) return "Sniper_Compensator";
		if (Setting::Esp_Item_Sniper_Suppressor) if (Name.find("BP_QK_Sniper_Suppressor_Pickup_C") != string::npos) return "Sniper_Suppressor";
		if (Setting::Esp_Item_Chekpad_Sniper) if (Name.find("BP_QT_Sniper_Pickup_C") != string::npos) return "Chekpad_Sniper";

		if (Setting::Esp_Item_Duckbill) if (Name.find("BP_QK_DuckBill_Pickup_C") != string::npos) return "ShotGun_DuckBill";
		if (Setting::Esp_Item_Choke) if (Name.find("BP_QK_Choke_Pickup_C") != string::npos) return "ShotGun_Choke";

		if (Setting::Esp_Item_Sniper_Quick_Extended) if (Name.find("BP_DJ_Sniper_EQ_Pickup_C") != string::npos) return "Sniper_Quick_Extended";
		if (Setting::Esp_Item_Sniper_Extended) if (Name.find("BP_DJ_Sniper_E_Pickup_C") != string::npos) return "Sniper_Extended";
		if (Setting::Esp_Item_Sniper_Quick) if (Name.find("BP_DJ_Sniper_Q_Pickup_C") != string::npos) return "Sniper_Quick";

		if (Setting::Esp_Item_AR_Quick) if (Name.find("BP_DJ_Large_Q_Pickup_C") != string::npos) return "AR_Quick";
		if (Setting::Esp_Item_AR_Quick_Extended) if (Name.find("BP_DJ_Large_EQ_Pickup_C") != string::npos) return "AR_Quick_Extended";
		if (Setting::Esp_Item_AR_Extended) if (Name.find("BP_DJ_Large_E_Pickup_C") != string::npos) return "AR_Extended";

		if (Setting::Esp_Item_SMG_Quick_Extended) if (Name.find("BP_DJ_Mid_EQ_Pickup_C") != string::npos) return "SMG_Quick_Extended";
		if (Setting::Esp_Item_SMG_Extended) if (Name.find("BP_DJ_Mid_E_Pickup_C") != string::npos) return "SMG_Extended";
		if (Setting::Esp_Item_SMG_Quick) if (Name.find("BP_DJ_Mid_Q_Pickup_C") != string::npos) return "SMG_Quick";




		if (Setting::Esp_Item_MedKit) if (Name.find("FirstAidbox_Pickup_C") != string::npos) return "Med Kit";
		if (Setting::Esp_Item_FirstAidKit) if (Name.find("Firstaid_Pickup_C") != string::npos) return "First Aid Kit";
		if (Setting::Esp_Item_Painkiller) if (Name.find("Pills_Pickup_C") != string::npos) return "Painkiller";
		if (Setting::Esp_Item_EnergyDrink) if (Name.find("Drink_Pickup_C") != string::npos) return "Energy Drink";
		if (Setting::Esp_Item_AdrenalineSyringe) if (Name.find("Injection_Pickup_C") != string::npos) return "Adrenaline Syringe";
		if (Setting::Esp_Item_Bandage) if (Name.find("Bandage_Pickup_C") != string::npos) return "Bandage";

		if (Setting::Esp_Item_Frag) if (Name.find("BP_Grenade_Shoulei_Weapon_Wrapper_C") != string::npos) return "Frag Grenade";
		if (Setting::Esp_Item_Frag_Warn) if (Name.find("BP_Grenade_Shoulei") != string::npos) return "Frag Grenade !";
		if (Setting::Esp_Item_Frag_Warn) if (Name.find("BP_Grenade_Stun_Shoulei") != string::npos) return "Flash Grenade !";
		if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Stun_Weapon_Wrapper_C") != string::npos) return "Flash Grenade";

		if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Smoke_Weapon_Wrapper_C") != string::npos) return "Smoke";
		//if (Setting::Esp_Item_Smoke_Warn) if (Name.find("BP_Grenade_Smoke_C") != string::npos) return "Smoke !";

		if (Setting::Esp_Item_Molotof_Warn) if (Name.find("BP_Grenade_Burn_Weapon_Wrapper_C") != std::string::npos)return "Molotof";
		if (Setting::Esp_Item_Molotof) if (Name.find("BP_Grenade_Burn") != string::npos) return "Molotof !";

		if (Setting::Esp_Item_Grenade_Apple) if (Name.find("BP_Grenade_Apple_Shoulei_C") != std::string::npos)return "Apple";


		if (Setting::Esp_Item_Holo) if (Name.find("BP_MZJ_QX_Pickup_C") != string::npos) return "Holo";
		if (Setting::Esp_Item_Lazer) if (Name.find("BP_MZJ_HD_Pickup_C") != string::npos) return "Red Dot";
		if (Setting::Esp_Item_Helmet1) if (Name.find("PickUp_BP_Helmet_Lv1") != string::npos) return "Helmet Lv.1";
		if (Setting::Esp_Item_Helmet2) if (Name.find("PickUp_BP_Helmet_Lv2") != string::npos) return "Helmet Lv.2";
		if (Setting::Esp_Item_Helmet3) if (Name.find("PickUp_BP_Helmet_Lv3") != string::npos) return "Helmet Lv.3";

		if (Setting::Esp_Item_Armor1) if (Name.find("PickUp_BP_Armor_Lv1") != string::npos) return "Armor Lv.1";
		if (Setting::Esp_Item_Armor2) if (Name.find("PickUp_BP_Armor_Lv2") != string::npos) return "Armor Lv.2";
		if (Setting::Esp_Item_Armor3) if (Name.find("PickUp_BP_Armor_Lv3") != string::npos) return "Armor Lv.3";
		if (Setting::Esp_Item_Bag1) if (Name.find("PickUp_BP_Bag_Lv1") != string::npos) return "Bag Lv.1";
		if (Setting::Esp_Item_Bag2) if (Name.find("PickUp_BP_Bag_Lv2") != string::npos) return "Bag Lv.2";
		if (Setting::Esp_Item_Bag3) if (Name.find("PickUp_BP_Bag_Lv3") != string::npos) return "Bag Lv.3";

		if (Setting::Esp_Item_x2) if (Name.find("BP_MZJ_2X_Pickup_C") != string::npos) return "2x";
		if (Setting::Esp_Item_x3) if (Name.find("BP_MZJ_3X_Pickup_C") != string::npos) return "3x";
		if (Setting::Esp_Item_x4) if (Name.find("BP_MZJ_4X_Pickup_C") != string::npos) return "4x";
		if (Setting::Esp_Item_x6) if (Name.find("BP_MZJ_6X_Pickup_C") != string::npos) return "6x";
		if (Setting::Esp_Item_x8) if (Name.find("BP_MZJ_8X_Pickup_C") != string::npos) return "8x";
		if (Setting::Esp_Item_AirDrop) if (Name.find("BP_AirDropBox_New_C") != string::npos) return "Air Drop";
		if (Setting::Esp_Item_WorldCup_Box) if (Name.find("BP_WorldCupTreasureBox_MainPoi_C") != string::npos)return "WorldCup Box";

		if (Setting::Esp_Item_Football_Grenade) if (Name.find("BP_Grenade_Football_Weapon_Pickup_C") != string::npos)return "Football Grenade";
		if (Setting::Esp_Item_Football_Cloth) if (Name.find("FootballCloth_Pickup_C") != string::npos)return "Football Cloth";
		if (Setting::Esp_Item_Golden_Boot) if (Name.find("BP_GoldenBoot_Pickup_C") != string::npos)return "Golden Boot";


		if (Setting::Esp_Item_Suit_Arctic) if (Name.find("PickUp_BP_Ghillie_4_C") != string::npos)return "Suit - Arctic";
		if (Setting::Esp_Item_Suit_Desert) if (Name.find("PickUp_BP_Ghillie_3_C") != string::npos)return "Suit - Desert";
		if (Setting::Esp_Item_Suit_Desert2) if (Name.find("PickUp_BP_Ghillie_2_C") != string::npos)return "Suit - Desert";
		if (Setting::Esp_Item_Suit_Woodland) if (Name.find("PickUp_BP_Ghillie_1_C") != string::npos)return "Suit - Woodland";


		if (Setting::Esp_Item_MiniGameMachine) if (Name.find("BP_MiniGameMachine_C") != string::npos)return "MiniGameMachine";
		if (Setting::Esp_Item_BlindBoxMachine) if (Name.find("BP_BlindBoxMachine_C") != string::npos)return "BlindBoxMachine";
		if (Setting::Esp_Item_GameCoin) if (Name.find("BP_GameCoin_Pickup_C") != string::npos)return "GameCoin";

		if (Setting::Esp_Item_Benzin) if (Name.find("GasCan_Destructible_Pickup_C") != string::npos)return "Benzin";
		if (Setting::Esp_Item_GameCoin) if (Name.find("GoldenTokenWrapper_C") != string::npos)return "Shop Coin";
		if (Setting::Esp_Item_BulletAMR) if (Name.find("BP_Ammo_50BMG_Pickup_C") != string::npos) return "AMR Ammo";

		if (Name.find("BP_MVP_Statue_C") != std::string::npos) return "Win Statue";
		if (Setting::Esp_Item_Dagger) if (Name.find("BP_WEP_Dagger_Pickup_C") != std::string::npos) return "Dagger";
		if (Setting::Esp_Item_ZombieBlade) if (Name.find("BP_Ammo_IceSnowRPG_Pickup_C") != std::string::npos) return "Snow RPG Ammo";
		if (Setting::Esp_Item_ZombieHammer) if (Name.find("BP_IceSnowRPG_Wrapper_C") != std::string::npos) return "Snow RPG";
		if (Name.find("BP_radiation") != std::string::npos) return "!! Safe Zone Location !!";


		if (Setting::redzone) if (Name.find("AirAttackBomb_Livik_C") != std::string::npos || Name.find("AirAttackBomb_C") != std::string::npos) return "REDZONE";
		if (Setting::Esp_Item_DeadBox) if (Name.find("PickUpListWrapperActor") != std::string::npos || Name.find("PlayerDeadBox_C") != std::string::npos) return "Dead Box";
	}
	else if (Setting::Lang == 1)
	{
		if (Setting::Esp_Item_CrossBow) if (Name.find("BP_Other_CrossBow_Wrapper_C") != std::string::npos) return u8"ﻮﺒﺳﻭﺮﻛ";
		if (Setting::Esp_Item_CrossBow_Quick) if (Name.find("BP_ZDD_Crossbow_Q_Pickup_C") != std::string::npos) return u8"CrossBow_Quick";
		if (Setting::Esp_Item_Ammo_Bolt) if (Name.find("BP_Ammo_Bolt_Pickup_C") != string::npos) return u8"CrossBow_Ammo_Bolt";

		if (Setting::Esp_Item_M249) if (Name.find("BP_Other_M249_Wrapper_C") != std::string::npos)return u8"ﻲﺴﻴﻜﻴﺑ";
		if (Setting::Esp_Item_MG3) if (Name.find("BP_Other_MG3_Wrapper_C") != std::string::npos)return u8"3ﻲﺟ ﻡﺍ";
		if (Setting::Esp_Item_DP28) if (Name.find("BP_Other_DP28_Wrapper_C") != string::npos) return u8"ﻲﺑ ﻱﺩ";
		if (Setting::Esp_Item_HuntingBow) if (Name.find("BP_Other_HuntingBowEA_Wrapper_C") != string::npos) return u8"Hunting Bow";
		if (Setting::Esp_Item_CrossbowBorderland) if (Name.find("BP_Other_CrossbowBorderland_Wrapper_C") != string::npos) return u8"Crossbow Borderland";

		if (Setting::Esp_Item_AMR) if (Name.find("BP_Sniper_AMR_Wrapper_C") != string::npos) return u8"ﺭﺍ ﻡﺍ ﻱﺍ";
		if (Setting::Esp_Item_M24) if (Name.find("BP_Sniper_M24_Wrapper_C") != string::npos) return u8"42ﻡﺍ";
		if (Setting::Esp_Item_Kar98k) if (Name.find("BP_Sniper_Kar98k_Wrapper_C") != string::npos) return u8"ﺭﺎﻛ";
		if (Setting::Esp_Item_Mosin) if (Name.find("BP_Sniper_Mosin_Wrapper_C") != string::npos) return u8"ﻦﻴﺳﻮﻣ";
		if (Setting::Esp_Item_Awm) if (Name.find("BP_Sniper_AWM_Wrapper_C") != string::npos) return u8"ﻡﻭﺍ";


		if (Setting::Esp_Item_SCARL) if (Name.find("BP_Rifle_SCAR_Wrapper_C") != string::npos) return u8"ﻝﺍ ﺭﺎﻜﺳ";
		if (Setting::Esp_Item_M416) if (Name.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) return u8"ﺭﻮﻓ ﻡﺍ";
		if (Setting::Esp_Item_M762) if (Name.find("BP_Rifle_M762_Wrapper_C") != string::npos) return u8"ﻦﻔﺳ ﻡﺍ";
		if (Setting::Esp_Item_Mk47Mutant) if (Name.find("BP_Rifle_Mk47_Wrapper_C") != string::npos) return u8"74ﻲﻛ ﻡﺍ";
		if (Setting::Esp_Item_M16A4) if (Name.find("BP_Rifle_M16A4_Wrapper_C") != string::npos) return u8"16 ﻡﺍ";
		if (Setting::Esp_Item_G36C) if (Name.find("BP_Rifle_G36_Wrapper_C") != string::npos) return u8"ﻲﺳ 63 ﻲﺟ";
		if (Setting::Esp_Item_QBZ) if (Name.find("BP_Rifle_QBZ_Wrapper_C") != string::npos) return u8"ﺩﺯ ﻲﺑ ﻮﻴﻛ";
		if (Setting::Esp_Item_AUG) if (Name.find("BP_Rifle_AUG_Wrapper_C") != string::npos) return u8"ﻲﺟ ﻮﻳ ﻱﺍ";
		if (Setting::Esp_Item_Groza) if (Name.find("BP_Rifle_Groza_Wrapper_C") != string::npos) return u8"ﺍﺯﻭﺮﺟ";
		if (Setting::Esp_Item_AKM) if (Name.find("BP_Rifle_AKM_Wrapper_C") != string::npos) return u8"ﻡﺍ ﻲﻛ ﻱﺍ";
		if (Setting::Esp_Item_FAMAS) if (Name.find("BP_Rifle_FAMAS_Wrapper_C") != string::npos) return u8"ﺱﺎﻣﺎﻓ";
		if (Setting::Esp_Item_AN94) if (Name.find("BP_Rifle_AN94_Wrapper_C") != string::npos) return u8"94 ﻥﺍ ﻱﺍ";
		if (Setting::Esp_Item_HoneyBadger) if (Name.find("BP_Rifle_HoneyBadger_Wrapper_C") != string::npos) return u8"ﺮﺟﺪﺑ ﻲﻧﺎﻫ";


		if (Setting::Esp_Item_Mk12) if (Name.find("BP_Sniper_MK12_Wrapper_C") != std::string::npos)return u8"12ﻲﻛ ﻡﺍ";
		if (Setting::Esp_Item_QBU) if (Name.find("BP_Sniper_QBU_Wrapper_C") != string::npos) return u8"ﻮﻳ ﻲﺑ ﻮﻴﻛ";
		if (Setting::Esp_Item_SLR) if (Name.find("BP_Sniper_SLR_Wrapper_C") != string::npos) return u8"ﺭﺍ ﻝﺍ ﺱﺍ";
		if (Setting::Esp_Item_SKS) if (Name.find("BP_Sniper_SKS_Wrapper_C") != string::npos) return u8"ﺱﺍ ﻲﻛ ﺱﺍ";
		if (Setting::Esp_Item_Mini14) if (Name.find("BP_Sniper_Mini14_Wrapper_C") != string::npos) return u8"14 ﻲﻨﻴﻣ";
		if (Setting::Esp_Item_Mk14) if (Name.find("BP_Sniper_Mk14_Wrapper_C") != string::npos) return u8"14 ﻲﻛ ﻡﺍ";
		if (Setting::Esp_Item_Win94) if (Name.find("BP_Sniper_Win94_Wrapper_C") != string::npos) return u8"94 ﻦﻳﻭ";
		if (Setting::Esp_Item_VSS) if (Name.find("BP_Sniper_VSS_Wrapper_C") != string::npos) return u8"ﺱﺍ ﺱﺍ ﻲﻓ";

		if (Setting::Esp_Item_PP19) if (Name.find("BP_MachineGun_PP19_Wrapper_C") != string::npos) return u8"19 ﻲﺑ ﻲﺑ";
		if (Setting::Esp_Item_P90) if (Name.find("BP_MachineGun_P90_Wrapper_C") != string::npos) return u8"90 ﻲﺑ";
		if (Setting::Esp_Item_TommyGun) if (Name.find("BP_MachineGun_TommyGun_Wrapper_C") != string::npos) return u8"ﻦﺟ ﻲﻣﻮﺗ";
		if (Setting::Esp_Item_MP5K) if (Name.find("BP_MachineGun_MP5K_Wrapper_C") != string::npos) return u8"ﻲﻛ 5 ﻲﺑ ﻡﺍ";
		if (Setting::Esp_Item_UMP9) if (Name.find("BP_MachineGun_UMP9_Wrapper_C") != string::npos) return u8"ﻲﺑ ﻡﺍ ﻮﻳ";
		if (Setting::Esp_Item_Vector) if (Name.find("BP_MachineGun_Vector_Wrapper_C") != string::npos) return u8"ﺭﻮﺘﻜﻴﻓ";
		if (Setting::Esp_Item_Uzi) if (Name.find("BP_MachineGun_Uzi_Wrapper_C") != string::npos) return u8"ﻱﺯﻭﺍ";


		if (Setting::Esp_Item_SawedOff) if (Name.find("BP_ShotGun_SawedOff_Wrapper_C") != string::npos) return u8"ﻑﻭﺍ ﺩﺍﻮﺳ";
		if (Setting::Esp_Item_S12K) if (Name.find("BP_ShotGun_S12K_Wrapper_C") != string::npos) return u8"ﻲﻛ 21 ﺱﺍ";
		if (Setting::Esp_Item_S1897) if (Name.find("BP_ShotGun_S1897_Wrapper_C") != string::npos) return u8"1897ﺱﺍ";
		if (Setting::Esp_Item_S686) if (Name.find("BP_ShotGun_S686_Wrapper_C") != string::npos) return u8"686ﺱﺍ";
		if (Setting::Esp_Item_DBS) if (Name.find("BP_ShotGun_DP12_Wrapper_C") != string::npos) return u8"ﺱﺍ ﻲﺑ ﻱﺩ";
		if (Setting::Esp_Item_M1014) if (Name.find("BP_ShotGun_M1014_Wrapper_C") != string::npos) return u8"1014 ﻡﺍ";
		if (Setting::Esp_Item_Neostead) if (Name.find("BP_ShotGun_Neostead2000_Wrapper_C") != string::npos) return u8"ﺪﻴﺘﺳﻮﻧ";


		if (Setting::Esp_Item_Pan) if (Name.find("BP_WEP_Pan_Wrapper_C") != std::string::npos) return u8"ﺔﺳﺎﻃ";
		if (Setting::Esp_Item_Cowbar) if (Name.find("BP_WEP_Cowbar_Wrapper_C") != std::string::npos) return u8"Cowbar";
		if (Setting::Esp_Item_Machete) if (Name.find("BP_WEP_Machete_Wrapper_C") != std::string::npos) return u8"Machete";
		if (Setting::Esp_Item_Sickle) if (Name.find("BP_WEP_Sickle_Wrapper_C") != std::string::npos) return u8"Sickle";


		if (Setting::Esp_Item_Awmimo) if (Name.find("BP_Ammo_300Magnum_Wrapper_C") != std::string::npos) return u8"ﻡﻭﺍ ﻖﻠﻃ";
		if (Setting::Esp_Item_762mm) if (Name.find("BP_Ammo_762mm_Pickup_C") != string::npos) return u8"7.62 ﻖﻠﻃ";
		if (Setting::Esp_Item_556mm) if (Name.find("BP_Ammo_556mm_Pickup_C") != string::npos) return u8"5.56 ﻖﻠﻃ";
		if (Setting::Esp_Item_9mm) if (Name.find("BP_Ammo_9mm_Pickup_C") != string::npos) return u8"9 ﻖﻠﻃ";
		if (Setting::Esp_Item_45ACP) if (Name.find("BP_Ammo_45ACP_Pickup_C") != string::npos) return u8"45 ﻖﻠﻃ";
		if (Setting::Esp_Item_12Guage) if (Name.find("BP_Ammo_12Guage_Wrapper_C") != string::npos) return u8"ﻦﺠﺗﻮﺷ ﻖﻠﻃ";
		if (Setting::Esp_Item_Flare) if (Name.find("BP_Ammo_Flare_Pickup_C") != string::npos) return u8"ﻦﺟ ﺮﻴﻠﻓ ﻖﻠﻃ";


		if (Setting::Esp_Item_DesertEagle) if (Name.find("BP_Pistol_DesertEagle_Wrapper_C") != string::npos) return u8"ﻞﺠﻳﺍ ﺕﺭﺰﻳﺩ";
		if (Setting::Esp_Item_P1911) if (Name.find("BP_Pistol_P1911_Wrapper_C") != string::npos) return u8"1911ﻲﺑ";
		if (Setting::Esp_Item_R45) if (Name.find("BP_Pistol_R45_Wrapper_C") != string::npos) return u8"45ﺭﺍ";
		if (Setting::Esp_Item_P18C) if (Name.find("BP_Pistol_P18C_Wrapper_C") != string::npos) return u8"ﻲﺳ18ﻲﺑ";
		if (Setting::Esp_Item_P92) if (Name.find("BP_Pistol_P92_Wrapper_C") != string::npos) return u8"92 ﻲﺑ";
		if (Setting::Esp_Item_Vz61) if (Name.find("BP_Pistol_Vz61_Wrapper_C") != string::npos) return u8"61ﺩﺯ ﻲﻓ";
		if (Setting::Esp_Item_R1895) if (Name.find("BP_Pistol_R1895_Wrapper_C") != string::npos) return u8"1895ﺭﺍ ﻲﻓ";
		if (Setting::Esp_Item_FlareGun) if (Name.find("BP_Pistol_Flaregun_Wrapper_C") != string::npos) return u8"ﻦﺟ ﺮﻴﻠﻓ";



		if (Setting::Esp_Item_Vertical) if (Name.find("BP_WB_Vertical_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﻞﻜﻴﺗﺮﻴﻓ";
		if (Setting::Esp_Item_HalfGrip) if (Name.find("BP_WB_HalfGrip_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺐﻳﺮﺟ ﻒﻟﺎﻫ";
		if (Setting::Esp_Item_LightGrip) if (Name.find("BP_WB_LightGrip_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺐﻳﺮﺟ ﺖﻳﻻ";
		if (Setting::Esp_Item_Angled) if (Name.find("BP_WB_Angled_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺪﻠﻴﺠﻧﺍ";
		if (Setting::Esp_Item_Lasersight) if (Name.find("BP_WB_Lasersight_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺭﺰﻴﻟ";
		if (Setting::Esp_Item_ThumbGrip) if (Name.find("BP_WB_ThumbGrip_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺐﻳﺮﺟ ﺐﻣﺎﺛ";


		if (Setting::Esp_Item_Mid_FlashHider) if (Name.find("BP_QK_Mid_FlashHider_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﺭﺪﻳﺎﻫ ﺵﻼﻓ";
		if (Setting::Esp_Item_Mid_Compensator) if (Name.find("BP_QK_Mid_Compensator_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﺭﻮﺘﻴﺴﻨﺒﻣﻮﻛ";
		if (Setting::Esp_Item_Mid_Suppressor) if (Name.find("BP_QK_Mid_Suppressor_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﻢﺗﺎﻛ";
		if (Setting::Esp_Item_Micro_UZI) if (Name.find("BP_QT_UZI_Pickup_C") != string::npos) return u8"ﻱﺯﻭﺍ ﺔﻌﻄﻗ";

		if (Setting::Esp_Item_Large_FlashHider) if (Name.find("BP_QK_Large_FlashHider_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺭﺪﻳﺎﻫ ﺵﻼﻓ";
		if (Setting::Esp_Item_Large_Compensator) if (Name.find("BP_QK_Large_Compensator_Pickup_C") != string::npos) return u8"كومبنسيتور اي ار";
		if (Setting::Esp_Item_Large_Suppressor) if (Name.find("BP_QK_Large_Suppressor_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﻢﺗﺎﻛ";
		if (Setting::Esp_Item_Taktik) if (Name.find("BP_QT_A_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﺩﺎﺑ ﻚﻴﺸﺗ";

		if (Setting::Esp_Item_Sniper_FlashHider) if (Name.find("BP_QK_Sniper_FlashHider_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﺭﺪﻳﺎﻫ ﺵﻼﻓ";
		if (Setting::Esp_Item_Sniper_Compensator) if (Name.find("BP_QK_Sniper_Compensator_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﺭﻮﺘﻴﺴﻨﺒﻣﻮﻛ";
		if (Setting::Esp_Item_Sniper_Suppressor) if (Name.find("BP_QK_Sniper_Suppressor_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﻢﺗﺎﻛ";
		if (Setting::Esp_Item_Chekpad_Sniper) if (Name.find("BP_QT_Sniper_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﺩﺎﺑ ﻚﻴﺸﺗ";

		if (Setting::Esp_Item_Duckbill) if (Name.find("BP_QK_DuckBill_Pickup_C") != string::npos) return u8"ﻦﺠﺗﻮﺷ ﻞﻴﺑ ﻙﺍﺩ";
		if (Setting::Esp_Item_Choke) if (Name.find("BP_QK_Choke_Pickup_C") != string::npos) return u8"ﻦﺠﺗﻮﺷ ﻙﻮﺷ";

		if (Setting::Esp_Item_Sniper_Quick_Extended) if (Name.find("BP_DJ_Sniper_EQ_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﻊﻳﺮﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_Sniper_Extended) if (Name.find("BP_DJ_Sniper_E_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_Sniper_Quick) if (Name.find("BP_DJ_Sniper_Q_Pickup_C") != string::npos) return u8"ﺮﺒﻳﺎﻨﺳ ﻊﻳﺮﺳ ﻥﺰﺨﻣ";

		if (Setting::Esp_Item_AR_Quick) if (Name.find("BP_DJ_Large_Q_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﻊﻳﺮﺳ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_AR_Quick_Extended) if (Name.find("BP_DJ_Large_EQ_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﻊﻳﺮﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_AR_Extended) if (Name.find("BP_DJ_Large_E_Pickup_C") != string::npos) return u8"ﺭﺍ ﻱﺍ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";

		if (Setting::Esp_Item_SMG_Quick_Extended) if (Name.find("BP_DJ_Mid_EQ_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﻊﻳﺮﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_SMG_Extended) if (Name.find("BP_DJ_Mid_E_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		if (Setting::Esp_Item_SMG_Quick) if (Name.find("BP_DJ_Mid_Q_Pickup_C") != string::npos) return u8"ﻲﺟ ﻡﺍ ﺱﺍ ﻊﻳﺮﺳ ﻥﺰﺨﻣ";




		if (Setting::Esp_Item_MedKit) if (Name.find("FirstAidbox_Pickup_C") != string::npos) return u8"ﺖﻴﻛ ﺪﻴﻣ";
		if (Setting::Esp_Item_FirstAidKit) if (Name.find("Firstaid_Pickup_C") != string::npos) return u8"ﻲﻟﻭﺃ ﻑﺎﻌﺳﺇ ﺔﺒﻴﻘﺣ";
		if (Setting::Esp_Item_Painkiller) if (Name.find("Pills_Pickup_C") != string::npos) return u8"ﺮﻠﻴﻛ ﻦﻴﺑ";
		if (Setting::Esp_Item_EnergyDrink) if (Name.find("Drink_Pickup_C") != string::npos) return u8"ﺔﻗﺎﻃ ﺏﻭﺮﺸﻣ";
		if (Setting::Esp_Item_AdrenalineSyringe) if (Name.find("Injection_Pickup_C") != string::npos) return u8"ﻦﻴﻟﺎﻨﻳﺭﺩﺍ ﺔﻨﻘﺣ";
		if (Setting::Esp_Item_Bandage) if (Name.find("Bandage_Pickup_C") != string::npos) return u8"ﺝﺪﻧﺎﺑ";

		if (Setting::Esp_Item_Frag) if (Name.find("BP_Grenade_Shoulei_Weapon_Wrapper_C") != string::npos) return u8"ﺔﻠﺒﻨﻗ";
		if (Setting::Esp_Item_Frag_Warn) if (Name.find("BP_Grenade_Shoulei") != string::npos) return u8"ﺔﻠﺒﻨﻗ !";
		if (Setting::Esp_Item_Frag_Warn) if (Name.find("BP_Grenade_Stun_Shoulei") != string::npos) return u8"ﺵﻼﻓ !";
		if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Stun_Weapon_Wrapper_C") != string::npos) return u8"ﺵﻼﻓ";

		if (Setting::Esp_Item_Smoke) if (Name.find("BP_Grenade_Smoke_Weapon_Wrapper_C") != string::npos) return u8"ﻙﻮﻤﺳ";
		//if (Setting::Esp_Item_Smoke_Warn) if (Name.find("BP_Grenade_Smoke_C") != string::npos) return u8"ﻙﻮﻤﺳ !";

		if (Setting::Esp_Item_Molotof_Warn) if (Name.find("BP_Grenade_Burn_Weapon_Wrapper_C") != std::string::npos)return u8"ﻑﻮﺗﻮﻟﻮﻣ";
		if (Setting::Esp_Item_Molotof) if (Name.find("BP_Grenade_Burn") != string::npos) return u8"ﻑﻮﺗﻮﻟﻮﻣ !";

		if (Setting::Esp_Item_Grenade_Apple) if (Name.find("BP_Grenade_Apple_Shoulei_C") != std::string::npos)return u8"Apple";


		if (Setting::Esp_Item_Holo) if (Name.find("BP_MZJ_QX_Pickup_C") != string::npos) return u8"ﻮﻟﻮﻫ";
		if (Setting::Esp_Item_Lazer) if (Name.find("BP_MZJ_HD_Pickup_C") != string::npos) return u8"ﺕﻭﺩ ﺪﻳﺭ";
		if (Setting::Esp_Item_Helmet1) if (Name.find("PickUp_BP_Helmet_Lv1") != string::npos) return u8"1 ﻞﻔﻟ ﺓﺫﻮﺧ";
		if (Setting::Esp_Item_Helmet2) if (Name.find("PickUp_BP_Helmet_Lv2") != string::npos) return u8"2 ﻞﻔﻟ ﺓﺫﻮﺧ";
		if (Setting::Esp_Item_Helmet3) if (Name.find("PickUp_BP_Helmet_Lv3") != string::npos) return u8"3 ﻞﻔﻟ ﺓﺫﻮﺧ";

		if (Setting::Esp_Item_Armor1) if (Name.find("PickUp_BP_Armor_Lv1") != string::npos) return u8"1 ﻞﻔﻟ ﻉﺭﺩ";
		if (Setting::Esp_Item_Armor2) if (Name.find("PickUp_BP_Armor_Lv2") != string::npos) return u8"2 ﻞﻔﻟ ﻉﺭﺩ";
		if (Setting::Esp_Item_Armor3) if (Name.find("PickUp_BP_Armor_Lv3") != string::npos) return u8"3 ﻞﻔﻟ ﻉﺭﺩ";
		if (Setting::Esp_Item_Bag1) if (Name.find("PickUp_BP_Bag_Lv1") != string::npos) return u8"1 ﻞﻔﻟ ﺔﻄﻨﺷ";
		if (Setting::Esp_Item_Bag2) if (Name.find("PickUp_BP_Bag_Lv2") != string::npos) return u8"2 ﻞﻔﻟ ﺔﻄﻨﺷ";
		if (Setting::Esp_Item_Bag3) if (Name.find("PickUp_BP_Bag_Lv3") != string::npos) return u8"3 ﻞﻔﻟ ﺔﻄﻨﺷ";

		if (Setting::Esp_Item_x2) if (Name.find("BP_MZJ_2X_Pickup_C") != string::npos) return u8"ﺏﻮﻜﺳ 2";
		if (Setting::Esp_Item_x3) if (Name.find("BP_MZJ_3X_Pickup_C") != string::npos) return u8"ﺏﻮﻜﺳ 3";
		if (Setting::Esp_Item_x4) if (Name.find("BP_MZJ_4X_Pickup_C") != string::npos) return u8"ﺏﻮﻜﺳ 4";
		if (Setting::Esp_Item_x6) if (Name.find("BP_MZJ_6X_Pickup_C") != string::npos) return u8"ﺏﻮﻜﺳ 6";
		if (Setting::Esp_Item_x8) if (Name.find("BP_MZJ_8X_Pickup_C") != string::npos) return u8"ﺏﻮﻜﺳ 8";
		if (Setting::Esp_Item_AirDrop) if (Name.find("BP_AirDropBox_New_C") != string::npos) return u8"ﺏﻭﺭﺩ";
		if (Setting::Esp_Item_WorldCup_Box) if (Name.find("BP_WorldCupTreasureBox_MainPoi_C") != string::npos)return u8"WorldCup Box";

		if (Setting::Esp_Item_Football_Grenade) if (Name.find("BP_Grenade_Football_Weapon_Pickup_C") != string::npos)return u8"Football Grenade";
		if (Setting::Esp_Item_Football_Cloth) if (Name.find("FootballCloth_Pickup_C") != string::npos)return u8"Football Cloth";
		if (Setting::Esp_Item_Golden_Boot) if (Name.find("BP_GoldenBoot_Pickup_C") != string::npos)return u8"Golden Boot";


		if (Setting::Esp_Item_Suit_Arctic) if (Name.find("PickUp_BP_Ghillie_4_C") != string::npos)return u8"Suit - Arctic";
		if (Setting::Esp_Item_Suit_Desert) if (Name.find("PickUp_BP_Ghillie_3_C") != string::npos)return u8"Suit - Desert";
		if (Setting::Esp_Item_Suit_Desert2) if (Name.find("PickUp_BP_Ghillie_2_C") != string::npos)return u8"Suit - Desert";
		if (Setting::Esp_Item_Suit_Woodland) if (Name.find("PickUp_BP_Ghillie_1_C") != string::npos)return u8"Suit - Woodland";


		if (Setting::Esp_Item_MiniGameMachine) if (Name.find("BP_MiniGameMachine_C") != string::npos)return u8"MiniGameMachine";
		if (Setting::Esp_Item_BlindBoxMachine) if (Name.find("BP_BlindBoxMachine_C") != string::npos)return u8"BlindBoxMachine";
		if (Setting::Esp_Item_GameCoin) if (Name.find("BP_GameCoin_Pickup_C") != string::npos)return u8"ﻕﻮﺴﺗ ﺕﻼﻤﻋ";

		if (Setting::Esp_Item_Benzin) if (Name.find("GasCan_Destructible_Pickup_C") != string::npos)return u8"ﻦﻳﺰﻨﺑ";
		if (Setting::Esp_Item_GameCoin) if (Name.find("GoldenTokenWrapper_C") != string::npos)return u8"ﻕﻮﺴﺗ ﺕﻼﻤﻋ";
		if (Setting::Esp_Item_BulletAMR) if (Name.find("BP_Ammo_50BMG_Pickup_C") != string::npos) return u8"ﺭﺍ ﻡﺍ ﻱﺍ ﻖﻠﻃ";

		if (Name.find("BP_MVP_Statue_C") != std::string::npos) return u8"Win Statue";
		if (Setting::Esp_Item_Dagger) if (Name.find("BP_WEP_Dagger_Pickup_C") != std::string::npos) return u8"ﺔﻨﻴﻜﺳ";
		if (Setting::Esp_Item_ZombieBlade) if (Name.find("BP_ZombieBlade_Pickup_C") != std::string::npos) return u8"Zombie Blade";
		if (Setting::Esp_Item_ZombieHammer) if (Name.find("BP_ZombieHammer_Pickup_C") != std::string::npos) return u8"Zombie Hammer";
		if (Name.find("BP_radiation") != std::string::npos) return u8"ﺔﻨﻣﻻﺍ ﻥﻭﺰﻟﺍ ﺔﻘﻄﻨﻣ";


		if (Setting::redzone) if (Name.find("AirAttackBomb_Livik_C") != std::string::npos || Name.find("AirAttackBomb_C") != std::string::npos) return u8"ﻥﻭﺯ ﺪﻳﺭ";
		if (Setting::Esp_Item_DeadBox) if (Name.find("PickUpListWrapperActor") != std::string::npos || Name.find("PlayerDeadBox_C") != std::string::npos) return u8"ﻡﻮﺣﺮﻤﻟﺍ ﻕﻭﺪﻨﺳ";
	}
	if (Setting::UselessShow) {
		cout << Name << endl;
		return Name;
	}
	else {
		return "Unknown";
	}


}
bool IsBox(std::string classname)
{
	if (classname.find("PickUpListWrapperActor") != std::string::npos)
		return true;
	else if (classname.find("BP_AirDropBox_C") != std::string::npos)
		return true;
	else if (classname.find("Treasure") != std::string::npos)
		return true;
	else if (classname.find("PlayerDeadBox_C") != std::string::npos)
		return true;
	else if (classname.find("AirDropListWrapperActor") != std::string::npos)
		return true;
	else if (classname.find("PlayerDeadInventoryBox_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_EastAsiaLantern_") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_EastAsiaKite_C") != std::string::npos)//--NEW
		return true;

	else if (classname.find("BP_Normal_DragonBallChest_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_Rare_DragonBallChest_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_PlanDBWishItemBox_C") != std::string::npos) return true;

	return false;
}
bool IsAirBox(std::string classname)
{
	if (classname.find("BP_AirDropBox_C") != std::string::npos)
		return true;
	else if (classname.find("BP_AirDropBox_New_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("PlayerDeadInventoryBox_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_FootBallAirDropBox_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("AirDropListWrapperActor") != std::string::npos)
		return true;
	return false;
}
bool IsTreasureBox(std::string classname)
{
	if (classname.find("TreasureBox") != std::string::npos)
		return true;
	else if (classname.find("BP_TreasureChestActor_Medicine_C") != std::string::npos)
		return true;
	else if (classname.find("BP_TreasureChestActor_Gold_C") != std::string::npos)
		return true;
	else if (classname.find("BP_TreasureChestActor_Weapon_C") != std::string::npos)
		return true;
	else if (classname.find("BP_WorldCupTreasureBox_MainPoi_C") != std::string::npos)
		return true;
	else if (classname.find("BP_EastAsiaLantern_") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_EastAsiaKite_C") != std::string::npos)//--NEW
		return true;

	else if (classname.find("BP_Normal_DragonBallChest_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_Rare_DragonBallChest_C") != std::string::npos)//--NEW
		return true;
	else if (classname.find("BP_PlanDBWishItemBox_C") != std::string::npos)//--NEW
		return true;

	else if (classname.find("BP_Atlantis_Chest") != std::string::npos) return true;
	return false;
}
bool Weapon_IsAR(std::string WeaponIndex)
{

	if (WeaponIndex == ("BP_Rifle_AUG_C") || WeaponIndex == ("BP_Rifle_M762_C")
		|| WeaponIndex == ("BP_Rifle_SCAR_C") || WeaponIndex == ("BP_Rifle_M416_C")
		|| WeaponIndex == ("BP_Rifle_M16A4_C") || WeaponIndex == ("BP_Rifle_Mk47_C")
		|| WeaponIndex == ("BP_Rifle_G36_C") || WeaponIndex == ("BP_Rifle_QBZ_C")
		|| WeaponIndex == ("BP_Rifle_AKM_C") || WeaponIndex == ("BP_Rifle_Groza_C")
		|| WeaponIndex == ("BP_Rifle_FAMAS_C") || WeaponIndex == ("BP_Rifle_HoneyBadger_C")
		)
		return true;
	else
		return false;
	return false;
}
bool Weapon_IsSMG(std::string WeaponIndex)
{
	if (WeaponIndex == ("BP_MachineGun_P90_C") || WeaponIndex == ("BP_MachineGun_PP19_C")
		|| WeaponIndex == ("BP_MachineGun_TommyGun_C") || WeaponIndex == ("BP_MachineGun_MP5K_C")
		|| WeaponIndex == ("BP_MachineGun_UMP9_C") || WeaponIndex == ("BP_MachineGun_Vector_C")
		|| WeaponIndex == ("BP_MachineGun_Uzi_C"))
		return true;
	else
		return false;
	return false;
}
bool Weapon_IsOther(std::string WeaponIndex)
{
	if (WeaponIndex == ("BP_Other_DP28_C") || WeaponIndex == ("BP_Other_M249_C")
		|| WeaponIndex == ("BP_Other_CrossBow_C") || WeaponIndex == ("BP_Other_MG3_C")
		|| WeaponIndex == ("BP_Other_HuntingBowEA_C"))
		return true;
	else
		return false;
	return false;
}

string GetVehicleType(string Name)
{
	if (Setting::Lang == 0 || Setting::Lang == 2)
	{
		if (Name.find("BRDM") != std::string::npos) return "BRDM";
		if (Name.find("Scooter") != std::string::npos) return "Scooter";
		if (Name.find("Snowbike") != std::string::npos) return "SnowBike";
		if (Name.find("Motorcycle") != std::string::npos) return "Motorcycle";
		if (Name.find("VH_MotorcycleCart_1_C") != std::string::npos) return "Motorcycle 3";
		if (Name.find("VH_MotorcycleCart_C") != std::string::npos) return "Motorcycle 3";
		if (Name.find("Snowmobile") != std::string::npos) return "Snowmobile";
		if (Name.find("Tuk") != std::string::npos) return "Tuk Tuk";
		if (Name.find("Buggy") != std::string::npos) return "Buggy";
		if (Name.find("open") != std::string::npos) return "Sports";
		if (Name.find("close") != std::string::npos) return "Sportsa";
		if (Name.find("Dacia") != std::string::npos) return "Dacia";
		if (Name.find("Rony") != std::string::npos) return "Rony";
		if (Name.find("UAZ") != std::string::npos) return "UAZ";
		if (Name.find("MiniBus") != std::string::npos) return "Minibus";
		if (Name.find("PG117") != std::string::npos) return "Ship";
		if (Name.find("AquaRail") != std::string::npos) return "Boat";
		if (Name.find("Bigfoot") != std::string::npos) return "Monster Truck";
		if (Name.find("CoupeRB") != std::string::npos) return "Coupe";
		if (Name.find("Mirado_open") != std::string::npos) return "Mirado";
		if (Name.find("PickUp_07_C") != std::string::npos) return "PickUp Truck";
		if (Name.find("Motorglider") != std::string::npos) return "Motorglider";
		if (Name.find("wing_Vehicle") != std::string::npos) return "Helicopter";
		if (Name.find("VH_UTV_C") != std::string::npos) return "UTV";
		if (Name.find("VH_ATV1_C") != std::string::npos) return "ATV";
		if (Name.find("BP_TRexVehicle_C") != std::string::npos) return "TREX";
		if (Name.find("Bike") != std::string::npos) return "Bike";
		if (Name.find("VH_CapsuleVehicleNew_C") != std::string::npos) return "Capsule";
		if (Name.find("BP_AirDropPlane_C") != std::string::npos) return "Air Plane";
		if (Name.find("VH_SnowBoard_Amphibious_C") != std::string::npos) return "SnowBoard";
		return "Unknown";
	}
	else if (Setting::Lang == 1)
	{
		if (Name.find("BRDM") != std::string::npos) return u8"ﻡﺇ ﻱﺩ ﺭﺃ ﻲﺑ";
		if (Name.find("Scooter") != std::string::npos) return u8"ﺮﺗﻮﻜﺳ";
		if (Name.find("Snowbike") != std::string::npos) return u8"ﺔﻴﺠﻠﺛ ﺔﺟﺍﺭﺩ";
		if (Name.find("Motorcycle") != std::string::npos) return u8"ﺔﻳﺭﺎﻧ ﺔﺟﺍﺭﺩ";
		if (Name.find("Snowmobile") != std::string::npos) return u8"ﺪﻴﻠﺟ ﺔﻓﺎﺣﺯ";
		if (Name.find("Tuk") != std::string::npos) return u8"ﻙﻮﺘﻛﻮﺗ";
		if (Name.find("Buggy") != std::string::npos) return u8"ﻲﺟﺎﺑ";
		if (Name.find("open") != std::string::npos) return u8"ﻭﺩﺍﺮﻴﻣ";
		if (Name.find("close") != std::string::npos) return u8"ﻭﺩﺍﺮﻴﻣ";
		if (Name.find("Dacia") != std::string::npos) return u8"ﺎﻴﺳﺍﺩ";
		if (Name.find("Rony") != std::string::npos) return u8"ﻲﻧﻭﺭ";
		if (Name.find("UAZ") != std::string::npos) return u8"ﺐﻴﺟ";
		if (Name.find("MiniBus") != std::string::npos) return u8"ﺓﺮﻴﻐﺻ ﺔﻠﻓﺎﺣ";
		if (Name.find("PG117") != std::string::npos) return u8"ﺔﻨﻴﻔﺳ";
		if (Name.find("AquaRail") != std::string::npos) return u8"ﺏﺭﺎﻗ";
		if (Name.find("Bigfoot") != std::string::npos) return u8"ﺓﺮﻴﺒﻛ ﺔﻨﺣﺎﺷ";
		if (Name.find("CoupeRB") != std::string::npos) return u8"ﻪﻴﺑﻮﻛ";
		if (Name.find("Mirado_open") != std::string::npos) return u8"ﻭﺩﺍﺮﻴﻣ";
		if (Name.find("PickUp_07_C") != std::string::npos) return u8"ﺓﺮﻴﻐﺻ ﺔﻨﺣﺎﺷ";
		if (Name.find("Motorglider") != std::string::npos) return u8"ﺔﻴﻋﺍﺮﺷ ﺓﺮﺋﺎﻃ";
		if (Name.find("wing_Vehicle") != std::string::npos) return u8"ﺮﺘﺑﻮﻜﻴﻠﻫ";
		if (Name.find("VH_UTV_C") != std::string::npos) return u8"ﻲﻓ ﻲﺗ ﻮﻳ";
		if (Name.find("VH_ATV1_C") != std::string::npos) return u8"ﻲﻓ ﻲﺗ ﻱﺃ";
		if (Name.find("BP_TRexVehicle_C") != std::string::npos) return u8"TREX";
		if (Name.find("Bike") != std::string::npos) return u8"ﺔﺟﺍﺭﺩ";
		if (Name.find("VH_CapsuleVehicleNew_C") != std::string::npos) return u8"ﺔﻟﻮﺴﺒﻛ";
		if (Name.find("BP_AirDropPlane_C") != std::string::npos) return u8"ﺓﺮﺋﺎﻃ";
		if (Name.find("VH_SnowBoard_Amphibious_C") != std::string::npos) return u8"ﺞﻟﺰﺘﻟﺍ ﺡﻮﻟ";

		return u8"Unknown";
	}
}
std::string GetBoxItems(int code)
{
	if (Setting::Lang == 0 || Setting::Lang == 2)
	{
		if (code == 101008)
		{
			Setting::colorcode = weapon::m762;
			return "M762";

		}
		else if (code == 306001)
		{
			Setting::colorcode = weapon::AWMimmo;
			return "AWM Ammo";
		}

		else if (code == 101003)
		{
			Setting::colorcode = weapon::scarl;
			return "SCAR-L";
		}
		else if (code == 302001)
		{

			Setting::colorcode = Colors::ammo7;
			return "7.62";
		}
		else if (code == 303001)
		{

			Setting::colorcode = Colors::ammo5;
			return "5.56";
		}
		else if (code == 101101)
		{
			Setting::colorcode = Colors::assm;
			return "ASM"; //time
		}
		else if (code == 602004)
		{
			Setting::colorcode = Colors::Grandes;

			return "Frag Grenade";
		}
		else if (code == 601006)
		{
			Setting::colorcode = Colors::madkit;

			return "Medkit";
		}
		else if (code == 101004)
		{
			Setting::colorcode = weapon::m16;
			return "M416";
		}

		else if (code == 101010)
		{
			Setting::colorcode = Colors::g36;
			return "G36";
		}

		else if (code == 101006)
		{
			Setting::colorcode = Colors::aug;
			return "AUG";
		}

		else if (code == 101101)
		{
			Setting::colorcode = Colors::assm;
			return "ASM"; //time
		}

		else if (code == 101001)
		{
			Setting::colorcode = weapon::AKM;
			return "AKM";
		}

		else if (code == 101005)
		{
			Setting::colorcode = weapon::GROZZA;
			return "Groza";
		}

		else if (code == 103003)
		{
			Setting::colorcode = weapon::AWM;
			return "AWM";
		}

		else if (code == 103002)
		{
			Setting::colorcode = weapon::M24;
			return "M24";
		}

		else if (code == 103001)
		{
			Setting::colorcode = weapon::kar98;
			return "Kar98k";
		}

		else if (code == 103011)
		{
			Setting::colorcode = Colors::mosin;
			return "Mosin";
		}

		else if (code == 502002)
		{
			Setting::colorcode = Colors::helmat;
			return "Helmet Lv.2";
		}
		else if (code == 502001)
		{
			Setting::colorcode = Colors::helmat;
			return "Helmet Lv.1";
		}
		else if (code == 502003)
		{
			Setting::colorcode = Colors::helmat;
			return "Helmet Lv.3";
		}

		else if (code == 503002)
		{
			Setting::colorcode = Colors::armer;
			return "Armour Lv.2";
		}
		else if (code == 503001)
		{
			Setting::colorcode = Colors::armer;
			return "Armor Lv.1";
		}
		else if (code == 503003)
		{
			Setting::colorcode = Colors::armer;
			return "Armour Lv.3";
		}

		else if (code == 501006)
		{
			Setting::colorcode = Colors::bag;
			return "Bag Lv.3";
		}
		else if (code == 501002)
		{
			Setting::colorcode = Colors::bag;
			return "Bag Lv.2";
		}



		else if (code == 501001)
		{
			Setting::colorcode = Colors::bag;
			return "Bag Lv.1";
		}



		else if (code == 501005)
		{
			Setting::colorcode = Colors::bag;
			return "Bag Lv.2";
		}

		else if (code == 203014)
		{
			Setting::colorcode = Colors::scope3x;
			return "3X";

		}

		else if (code == 203004)
		{
			Setting::colorcode = Colors::scope4x;
			return "4x";
		}
		else if (code == 307001)
		{
			Setting::colorcode = Colors::scope4x;
			return "Arrows";
		}
		else if (code == 203015)
		{
			Setting::colorcode = Colors::scope6x;
			return "6x";
		}

		else if (code == 203005)
		{
			Setting::colorcode = weapon::scope8x;
			return "8x";
		}

		else if (code == 106007)
		{
			Setting::colorcode = weapon::Flare;
			return "Flaregun";
		}

		else if (code == 105001)
		{
			Setting::colorcode = Colors::dp;
			return "M249";
		}

		else if (code == 105002)
		{
			Setting::colorcode = Colors::dp;
			return "DP28";
		}

		else if (code == 105010)
		{
			Setting::colorcode = Colors::mg3;
			return "MG3";
		}

		//
		else if (code == 601001)
		{
			Setting::colorcode = Colors::mg3;
			return "EnegyDrink";
		}
		else if (code == 602003)
		{
			Setting::colorcode = Colors::mg3;
			return "Molotof";
		}
		else if (code == 203001)
		{
			Setting::colorcode = Colors::mg3;
			return "Lazer";
		}
		else if (code == 601003)
		{
			Setting::colorcode = Colors::mg3;
			return "PainKiller";
		}

		else if (code == 304001)
		{
			Setting::colorcode = Colors::scope4x;
			return "12Gauge";
		}


		else if (code == 601005)
		{
			Setting::colorcode = Colors::aug;
			return "AidKit";
		}

		else if (code == 102002)
		{
			Setting::colorcode = Colors::aug;
			return "UMP9";
		}
		else if (code == 102004)
		{
			Setting::colorcode = Colors::mg3;
			return "TommyGun";
		}
		else if (code == 102007)
		{
			Setting::colorcode = Colors::mg3;
			return "MP5K";
		}
		else if (code == 102003)
		{
			Setting::colorcode = Colors::mg3;
			return "Vector";
		}
		else if (code == 103005)
		{
			Setting::colorcode = Colors::mg3;
			return "VSS";
		}

		else if (code == 205001)
		{
			Setting::colorcode = Colors::mg3;
			return "Uzi";
		}

		else if (code == 104002)
		{
			Setting::colorcode = Colors::mg3;
			return "S1897";
		}

		else if (code == 104001)
		{
			Setting::colorcode = Colors::mg3;
			return "S686";
		}

		else if (code == 104003)
		{
			Setting::colorcode = Colors::mg3;
			return "S12K";
		}
		else if (code == 104004)
		{
			Setting::colorcode = Colors::mg3;
			return "DBS";
		}

		else if (code == 106006)
		{
			Setting::colorcode = Colors::mg3;
			return "SawedOff";
		}

		else if (code == 102001)
		{
			Setting::colorcode = Colors::mg3;
			return "Uzi";
		}
		else if (code == 106003)
		{
			Setting::colorcode = Colors::armer;
			return "R1895";
		}
		else if (code == 209144)
		{
			Setting::colorcode = Colors::mg3;
			return "Vz61";
		}

		else if (code == 106001)
		{
			Setting::colorcode = Colors::armer;
			return "P92";
		}
		else if (code == 103007)
		{
			Setting::colorcode = Colors::mg3;
			return "Mk14";
		}
		else if (code == 106004)
		{
			Setting::colorcode = Colors::mg3;
			return "P18C";
		}
		else if (code == 101002)
		{
			Setting::colorcode = Colors::mg3;
			return "M16A4";
		}

		else if (code == 103010)
		{
			Setting::colorcode = Colors::mg3;
			return "QBU";
		}

		else if (code == 103006)
		{
			Setting::colorcode = Colors::mg3;
			return "Mini14";
		}
		else if (code == 103009)
		{
			Setting::colorcode = Colors::mg3;
			return "SLR";
		}
		else if (code == 403990 || code == 403187)
		{
			Setting::colorcode = Colors::mg3;
			return "GhillieSuit";
		}

		else if (code == 204013)
		{
			Setting::colorcode = Colors::mg3;
			return "RifleMagazine";
		}
		else if (code == 201011)
		{
			Setting::colorcode = Colors::mg3;
			return "RifleSilenter";
		}




		else if (code == 305001)
		{
			Setting::colorcode = Colors::mg3;
			return "45ACP";
		}

		else if (code == 105001)
		{
			Setting::colorcode = Colors::mosin;
			return "M249";
		}
		else if (code == 101007)
		{
			Setting::colorcode = Colors::mg3;
			return "QBZ";
		}

		else if (code == 301001)
		{
			Setting::colorcode = Colors::mosin;
			return "9mm";
		}
		else if (code == 602002)
		{
			Setting::colorcode = Colors::mg3;
			return "Smoke";
		}
		else if (code == 216035)
		{
			Setting::colorcode = Colors::mg3;
			return "Molotof";
		}

		else if (code == 216761)
		{
			Setting::colorcode = Colors::mg3;
			return "Stun";
		}
		else if (code == 215813)
		{
			Setting::colorcode = Colors::mg3;
			return "Bandage";
		}

		else if (code == 601002)
		{
			Setting::colorcode = Colors::mg3;
			return "Adrenaline Syringe";
		}
		else if (code == 215790)
		{
			Setting::colorcode = Colors::mg3;
			return "First Aid";
		}

		else if (code == 216859)
		{
			Setting::colorcode = Colors::mg3;
			return "Med Kit";
		}

		else if (code == 209357)
		{
			Setting::colorcode = Colors::mg3;
			return "QBU";
		}
		else if (code == 103004)
		{
			Setting::colorcode = Colors::mg3;
			return "SKS";
		}
		else if (code == 103008)
		{
			Setting::colorcode = Colors::mg3;
			return "Win94";
		}

		else if (code == 210185)
		{
			Setting::colorcode = Colors::mg3;
			return "Mk47 Mutant";
		}

		else if (code == 102005)
		{
			Setting::colorcode = Colors::mg3;
			return "PP19 Bizon";
		}

		else if (code == 106005)
		{
			Setting::colorcode = Colors::mg3;
			return "R45";
		}

		else if (code == 106002)
		{
			Setting::colorcode = Colors::mg3;
			return "P1911";
		}

		else if (code == 106010)
		{
			Setting::colorcode = Colors::mg3;
			return "DesertEagle";
		}

		else if (code == 108003)
		{
			Setting::colorcode = Colors::mg3;
			return "Sickle";
		}
		else if (code == 108001)
		{
			Setting::colorcode = Colors::mg3;
			return "Machete";
		}
		else if (code == 107001)
		{
			Setting::colorcode = Colors::mg3;
			return "Cross Bow";
		}

		else if (code == 108004)
		{
			Setting::colorcode = Colors::helmat;
			return "Pan";
		}
		else if (code == 101009)
		{
			Setting::colorcode = Colors::mg3;
			return "Mk14";
		}

		else if (code == 201002 == 201009 == 201005)
		{
			Setting::colorcode = Colors::helmat;
			return "Flash Hider";
		}
		else if (code == 603001)
		{
			Setting::colorcode = Colors::helmat;
			return "GasCan";
		}

		else if (code == 204011)
		{
			Setting::colorcode = Colors::helmat;
			return "Exteded AR";
		}

		else if (code == 204009)
		{
			Setting::colorcode = Colors::helmat;
			return "Sniper Extended";
		}

		else if (code == 204013)
		{
			Setting::colorcode = Colors::helmat;
			return "Quick Draw Exteded AR";
		}
		else if (code == 201011)
		{
			Setting::colorcode = Colors::helmat;
			return "Suppressor AR";
		}
		else if (code == 107009)
		{
			Setting::colorcode = Colors::helmat;
			return "Explosive_Bow";
		}

		else if (code == 101012)
		{
			Setting::colorcode = Colors::helmat;
			return "Honey_Badger";
		}
		else if (code == 108024)
		{
			Setting::colorcode = Colors::helmat;
			return "Grappling_Hook";
		}
		else if (code == 604009)
		{
			Setting::colorcode = Colors::helmat;
			return "Dancing_Lion";
		}
		else if (code == 601076)
		{
			Setting::colorcode = Colors::helmat;
			return "Kung_Fu_Steamed_Bun";
		}
	}
	else if (Setting::Lang == 1)
	{
		if (code == 101008)
		{
			Setting::colorcode = weapon::m762;
			return u8"ﻦﻔﺳ ﻡﺍ";

		}
		else if (code == 306001)
		{
			Setting::colorcode = weapon::AWMimmo;
			return u8"ﻡﻭﺍ ﻖﻠﻃ";
		}

		else if (code == 101003)
		{
			Setting::colorcode = weapon::scarl;
			return u8"ﻝﺍ ﺭﺎﻜﺳ";
		}
		else if (code == 302001)
		{

			Setting::colorcode = Colors::ammo7;
			return u8"7.62 ﻖﻠﻃ";
		}
		else if (code == 303001)
		{

			Setting::colorcode = Colors::ammo5;
			return u8"5.56 ﻖﻠﻃ";
		}
		else if (code == 101101)
		{
			Setting::colorcode = Colors::assm;
			return u8"ﻡﺍ ﺱﺍ ﻱﺍ"; //time
		}
		else if (code == 602004)
		{
			Setting::colorcode = Colors::Grandes;

			return u8"ﺔﻠﺒﻨﻗ";
		}
		else if (code == 601006)
		{
			Setting::colorcode = Colors::madkit;

			return u8"ﺖﻛ ﺪﻴﻣ";
		}
		else if (code == 101004)
		{
			Setting::colorcode = weapon::m16;
			return u8"ﺭﻮﻓ ﻡﺍ";
		}

		else if (code == 101010)
		{
			Setting::colorcode = Colors::g36;
			return u8"36 ﻲﺟ";
		}

		else if (code == 101006)
		{
			Setting::colorcode = Colors::aug;
			return u8"ﻲﺟ ﻮﻳ ﻱﺍ";
		}

		else if (code == 101001)
		{
			Setting::colorcode = weapon::AKM;
			return u8"ﻡﺍ ﻲﻛ ﻱﺍ";
		}

		else if (code == 101005)
		{
			Setting::colorcode = weapon::GROZZA;
			return u8"ﺍﺯﻭﺮﺟ";
		}

		else if (code == 103003)
		{
			Setting::colorcode = weapon::AWM;
			return u8"ﻡﻭﺍ";
		}

		else if (code == 103002)
		{
			Setting::colorcode = weapon::M24;
			return u8"24 ﻡﺍ";
		}

		else if (code == 103001)
		{
			Setting::colorcode = weapon::kar98;
			return u8"ﻲﻛ 98 ﺭﺎﻛ";
		}

		else if (code == 103011)
		{
			Setting::colorcode = Colors::mosin;
			return u8"ﻦﻴﺳﻮﻣ";
		}

		else if (code == 502002)
		{
			Setting::colorcode = Colors::helmat;
			return u8"2 ﻞﻔﻟ ﺓﺫﻮﺧ";
		}
		else if (code == 502001)
		{
			Setting::colorcode = Colors::helmat;
			return u8"1 ﻞﻔﻟ ﺓﺫﻮﺧ";
		}
		else if (code == 502003)
		{
			Setting::colorcode = Colors::helmat;
			return u8"3 ﻞﻔﻟ ﺓﺫﻮﺧ";
		}

		else if (code == 503002)
		{
			Setting::colorcode = Colors::armer;
			return u8"2 ﻞﻔﻟ ﻉﺭﺩ";
		}
		else if (code == 503001)
		{
			Setting::colorcode = Colors::armer;
			return u8"1 ﻞﻔﻟ ﻉﺭﺩ";
		}
		else if (code == 503003)
		{
			Setting::colorcode = Colors::armer;
			return u8"3 ﻞﻔﻟ ﻉﺭﺩ";
		}

		else if (code == 501006)
		{
			Setting::colorcode = Colors::bag;
			return u8"3 ﻞﻔﻟ ﺔﻄﻨﺷ";
		}
		else if (code == 501002)
		{
			Setting::colorcode = Colors::bag;
			return u8"2 ﻞﻔﻟ ﺔﻄﻨﺷ";
		}



		else if (code == 501001)
		{
			Setting::colorcode = Colors::bag;
			return u8"1 ﻞﻔﻟ ﺔﻄﻨﺷ";
		}



		else if (code == 501005)
		{
			Setting::colorcode = Colors::bag;
			return u8"2 ﻞﻔﻟ ﺔﻄﻨﺷ";
		}

		else if (code == 203014)
		{
			Setting::colorcode = Colors::scope3x;
			return u8"3 ﺏﻮﻜﺳ";

		}

		else if (code == 203004)
		{
			Setting::colorcode = Colors::scope4x;
			return u8"4 ﺏﻮﻜﺳ";
		}
		else if (code == 307001)
		{
			Setting::colorcode = Colors::scope4x;
			return u8"ﻢﻬﺳﺍ";
		}
		else if (code == 203015)
		{
			Setting::colorcode = Colors::scope6x;
			return u8"6 ﺏﻮﻜﺳ";
		}

		else if (code == 203005)
		{
			Setting::colorcode = weapon::scope8x;
			return u8"8 ﺏﻮﻜﺳ";
		}

		else if (code == 106007)
		{
			Setting::colorcode = weapon::Flare;
			return u8"ﻦﺟ ﺮﻴﻠﻓ";
		}

		else if (code == 105001)
		{
			Setting::colorcode = Colors::dp;
			return u8"ﻲﺳ ﻲﻛ ﻲﺑ";
		}

		else if (code == 105002)
		{
			Setting::colorcode = Colors::dp;
			return u8"ﻲﺑ ﻱﺩ";
		}

		else if (code == 105010)
		{
			Setting::colorcode = Colors::mg3;
			return u8"3 ﻲﺟ ﻡﺍ";
		}

		//
		else if (code == 601001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺔﻗﺎﻃ ﺏﻭﺮﺸﻣ";
		}
		else if (code == 602003)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻑﻮﺗﻮﻟﻮﻣ";
		}
		else if (code == 203001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺭﺰﻴﻟ";
		}
		else if (code == 601003)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻡﺎﺷﺮﺑ";
		}

		else if (code == 304001)
		{
			Setting::colorcode = Colors::scope4x;
			return u8"ﻦﺠﺗﻮﺷ ﻖﻠﻃ";
		}


		else if (code == 601005)
		{
			Setting::colorcode = Colors::aug;
			return u8"ﺔﻴﻟﻭﺍ ﺕﺎﻓﺎﻌﺳﺍ ﺔﺒﻴﻘﺣ";
		}

		else if (code == 102002)
		{
			Setting::colorcode = Colors::aug;
			return u8"ﻲﺑ ﻡﺍ ﻮﻳ";
		}
		else if (code == 102004)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻦﺟ ﻲﻣﻮﺗ";
		}
		else if (code == 102007)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻲﻛ 5 ﻲﺑ ﻡﺍ";
		}
		else if (code == 102003)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺭﻮﺘﻜﻴﻓ";
		}
		else if (code == 103005)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺱﺍ ﺱﺍ ﻲﻓ";
		}

		else if (code == 205001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻱﺯﻭﺍ";
		}

		else if (code == 104002)
		{
			Setting::colorcode = Colors::mg3;
			return u8"1897 ﺱﺍ";
		}

		else if (code == 104001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"686 ﺱﺍ";
		}

		else if (code == 104003)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻲﻛ 12 ﺱﺍ";
		}
		else if (code == 104004)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺱﺍ ﻲﺑ  ﻱﺩ";
		}

		else if (code == 106006)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻑﻭﺍ ﺩﺍﻮﺳ";
		}

		else if (code == 102001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻱﺯﻭﺍ";
		}
		else if (code == 106003)
		{
			Setting::colorcode = Colors::armer;
			return u8"1895 ﺭﺍ";
		}
		else if (code == 209144)
		{
			Setting::colorcode = Colors::mg3;
			return u8"61 ﺩﺯ ﻲﻓ";
		}

		else if (code == 106001)
		{
			Setting::colorcode = Colors::armer;
			return u8"92 ﻲﺑ";
		}
		else if (code == 103007)
		{
			Setting::colorcode = Colors::mg3;
			return u8"14 ﻲﻛ ﻡﺍ";
		}
		else if (code == 106004)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻲﺳ 18 ﻲﺑ";
		}
		else if (code == 101002)
		{
			Setting::colorcode = Colors::mg3;
			return u8"16 ﻡﺍ";
		}

		else if (code == 103010)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻮﻳ ﻲﺑ ﻮﻴﻛ";
		}

		else if (code == 103006)
		{
			Setting::colorcode = Colors::mg3;
			return u8"14 ﻲﻨﻴﻣ";
		}
		else if (code == 103009)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺭﺍ ﻝﺍ ﺱﺍ";
		}
		else if (code == 403990 || code == 403187)
		{
			Setting::colorcode = Colors::mg3;
			return u8"GhillieSuit";
		}

		else if (code == 204013)
		{
			Setting::colorcode = Colors::mg3;
			return u8"RifleMagazine";
		}
		else if (code == 201011)
		{
			Setting::colorcode = Colors::mg3;
			return u8"RifleSilenter";
		}

		else if (code == 305001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"54 ﻖﻠﻃ";
		}

		else if (code == 105001)
		{
			Setting::colorcode = Colors::mosin;
			return u8"ﻲﺳ ﻲﻛ ﻲﺑ";
		}
		else if (code == 101007)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺩﺯ ﻲﺑ ﻮﻴﻛ";
		}

		else if (code == 301001)
		{
			Setting::colorcode = Colors::mosin;
			return u8"9 ﻖﻠﻃ";
		}
		else if (code == 602002)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻙﻮﻤﺳ";
		}
		else if (code == 216035)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻑﻮﺗﻮﻟﻮﻣ";
		}

		else if (code == 216761)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺵﻼﻓ";
		}
		else if (code == 215813)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺝﺪﻧﺎﺑ";
		}

		else if (code == 601002)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻦﻴﻟﺎﻨﻳﺭﺩﺍ ﺔﻨﻘﺣ";
		}
		else if (code == 215790)
		{
			Setting::colorcode = Colors::mg3;
			return u8"First Aid";
		}

		else if (code == 216859)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺔﻴﻟﻭﺍ ﺕﺎﻓﺎﻌﺳﺍ";
		}

		else if (code == 209357)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻮﻳ ﻲﺑ ﻮﻴﻛ";
		}
		else if (code == 103004)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺱﺍ ﻲﻛ ﺱﺍ";
		}
		else if (code == 103008)
		{
			Setting::colorcode = Colors::mg3;
			return u8"94 ﻦﻳﻭ";
		}

		else if (code == 210185)
		{
			Setting::colorcode = Colors::mg3;
			return u8"47 ﻲﻛ ﻡﺍ";
		}

		else if (code == 102005)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻥﻭﺰﻳﺎﺑ";
		}

		else if (code == 106005)
		{
			Setting::colorcode = Colors::mg3;
			return u8"45 ﺭﺍ";
		}

		else if (code == 106002)
		{
			Setting::colorcode = Colors::mg3;
			return u8"1911 ﻲﺑ ﺭﺍ";
		}

		else if (code == 106010)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻞﺠﻳﺍ ﺕﺮﻳﺰﻳﺩ";
		}

		else if (code == 108003)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻞﻜﻴﺳ";
		}
		else if (code == 108001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﺭﻮﻃﺎﺳ";
		}
		else if (code == 107001)
		{
			Setting::colorcode = Colors::mg3;
			return u8"ﻮﺒﺳﻭﺮﻛ";
		}

		else if (code == 108004)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺔﺳﺎﻃ";
		}
		else if (code == 101009)
		{
			Setting::colorcode = Colors::mg3;
			return u8"14 ﻲﻛ ﻡﺍ";
		}

		else if (code == 201002 == 201009 == 201005)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺭﺪﻳﺎﻫ ﺵﻼﻓ";
		}
		else if (code == 603001)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﻦﻳﺰﻨﺑ";
		}

		else if (code == 204011)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺭﺍ ﻱﺍ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		}

		else if (code == 204009)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺮﺒﻳﺎﻨﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		}

		else if (code == 204013)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺭﺍ ﻱﺍ ﻊﻳﺮﺳ ﻊﺳﻮﻣ ﻥﺰﺨﻣ";
		}
		else if (code == 201011)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺭﺍ ﻱﺍ ﻢﺗﺎﻛ";
		}
		else if (code == 107009)
		{
			Setting::colorcode = Colors::helmat;
			return u8"Explosive_Bow";
		}

		else if (code == 101012)
		{
			Setting::colorcode = Colors::helmat;
			return u8"ﺮﺟﺪﺑ ﻲﻧﺎﻫ";
		}
		else if (code == 108024)
		{
			Setting::colorcode = Colors::helmat;
			return u8"Grappling_Hook";
		}
		else if (code == 604009)
		{
			Setting::colorcode = Colors::helmat;
			return u8"Dancing_Lion";
		}
		else if (code == 601076)
		{
			Setting::colorcode = Colors::helmat;
			return u8"Kung_Fu_Steamed_Bun";
		}
	}

	return "tatti";
}

D3DMATRIX1 ToMatrix(FRotator rot = { 0,0,0 }, FRotator origin = { 0,0,0 })
{
	float radPitch = (rot.Pitch * float(M_PI) / 180.f);
	float radYaw = (rot.Yaw * float(M_PI) / 180.f);
	float radRoll = (rot.Roll * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	D3DMATRIX1 matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;

	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;

	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;

	matrix.m[3][0] = origin.Pitch;
	matrix.m[3][1] = origin.Yaw;
	matrix.m[3][2] = origin.Roll;
	matrix.m[3][3] = 1.f;

	return matrix;
}

bool WorldToScreenWithoutMatrix(VECTOR3 WorldLocation, VECTOR3& Screenlocation)
{
	FRotator Rotation = Data::CameraCache.POV.Rotation;
	D3DMATRIX1 tempMatrix = ToMatrix(Rotation);

	VECTOR3 vAxisX, vAxisY, vAxisZ;

	vAxisX.X = tempMatrix.m[0][0];
	vAxisX.Y = tempMatrix.m[0][1];
	vAxisX.Z = tempMatrix.m[0][2];
	vAxisY.X = tempMatrix.m[1][0];
	vAxisY.Y = tempMatrix.m[1][1];
	vAxisY.Z = tempMatrix.m[1][2];
	vAxisZ.X = tempMatrix.m[2][0];
	vAxisZ.Y = tempMatrix.m[2][1];
	vAxisZ.Z = tempMatrix.m[2][2];
	VECTOR3 vDelta = Subtract(WorldLocation, Data::CameraCache.POV.Location);

	VECTOR3 vTransformed;

	vTransformed.X = (vDelta.X * vAxisY.X) + (vDelta.Y * vAxisY.Y) + (vDelta.Z * vAxisY.Z);
	vTransformed.Y = (vDelta.X * vAxisZ.X) + (vDelta.Y * vAxisZ.Y) + (vDelta.Z * vAxisZ.Z);
	vTransformed.Z = (vDelta.X * vAxisX.X) + (vDelta.Y * vAxisX.Y) + (vDelta.Z * vAxisX.Z);


	if (vTransformed.Z < 0.0001f) return false;


	float FovAngle = Data::CameraCache.POV.FOV;

	float ScreenCenterX = DX11Window::Width / 2;
	float ScreenCenterY = DX11Window::Height / 2;

	Screenlocation.X = ScreenCenterX + vTransformed.X * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.Z;
	Screenlocation.Y = ScreenCenterY - vTransformed.Y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.Z;
	if (Screenlocation.X > DX11Window::Width || Screenlocation.Y > DX11Window::Height || Screenlocation.X < 0 || Screenlocation.Y < 0)
		return false;
	return true;
}
std::string Data::PlayerWeaponFont(std::string str)
{
	if (str == ("BP_Sniper_AWM_C"))
		return "C";
	else if (str == ("BP_Sniper_QBU_C"))
		return "j";
	else if (str == ("BP_Sniper_SLR_C"))
		return "(";
	else if (str == ("BP_Sniper_SKS_C"))
		return "E";
	else if (str == ("BP_Sniper_Mini14_C"))
		return "F";
	else if (str == ("BP_Sniper_M24_C"))
		return "I";
	else if (str == ("BP_Sniper_Kar98k_C"))
		return "r";
	else if (str == ("BP_Sniper_VSS_C"))
		return "N";
	else if (str == ("BP_Sniper_Win94_C"))
		return "l";
	else if (str == ("BP_Sniper_Mosin_C"))
		return "q";
	else if (str == ("BP_Sniper_MK12_C"))
		return "p";
	else if (str == ("BP_Sniper_Mk14_C"))
		return "R";
	else if (str == ("BP_Sniper_AMR_C"))
		return "D";
	else if (str == ("BP_Rifle_FAMAS_C"))
		return "k";
	else if (str == ("BP_Rifle_AUG_C"))
		return "n";
	else if (str == ("BP_Rifle_M762_C"))
		return "H";
	else if (str == ("BP_Rifle_SCAR_C"))
		return "J";
	else if (str == ("BP_Rifle_M416_C"))
		return "A";
	else if (str == ("BP_Rifle_HoneyBadger_C"))
		return "g";
	else if (str == ("BP_Rifle_M16A4_C"))
		return "m";
	else if (str == ("BP_Rifle_Mk47_C"))
		return "i";
	else if (str == ("BP_Rifle_G36_C"))
		return "y";
	else if (str == ("BP_Rifle_QBZ_C"))
		return "o";
	else if (str == ("BP_Rifle_AKM_C"))
		return "B";
	else if (str == ("BP_Rifle_Groza_C"))
		return "K";
	else if (str == ("BP_Other_DP28_C"))
		return "L";
	else if (str == ("BP_Other_M249_C"))
		return "S";
	else if (str == ("BP_Other_MG3_C"))
		return "T";
	else if (str == ("BP_ShotGun_S12K_C"))
		return "U";
	else if (str == ("BP_ShotGun_DP12_C"))
		return "Y";
	else if (str == ("BP_ShotGun_S686_C"))
		return "W";
	else if (str == ("BP_ShotGun_S1897_C"))
		return "V";
	else if (str == ("BP_ShotGun_SawedOff_C"))
		return "X";
	else if (str == ("BP_ShotGun_Neostead2000_C"))
		return "s";
	else if (str == ("BP_ShotGun_M1014_C"))
		return "$";
	else if (str == ("BP_MachineGun_P90_C"))
		return "6";
	else if (str == ("BP_MachineGun_PP19_C"))
		return "7";
	else if (str == ("BP_MachineGun_TommyGun_C"))
		return "8";
	else if (str == ("BP_MachineGun_MP5K_C"))
		return "x";
	else if (str == ("BP_MachineGun_UMP9_C"))
		return "9";
	else if (str == ("BP_MachineGun_Vector_C"))
		return "Q";
	else if (str == ("BP_MachineGun_Uzi_C"))
		return "G";
	else if (str == ("BP_Pistol_Flaregun_C"))
		return "O";
	else if (str == ("BP_Pistol_R1895_C"))
		return ">";
	else if (str == ("BP_Pistol_Vz61_C"))
		return "@";
	else if (str == ("BP_Pistol_P92_C"))
		return "=";
	else if (str == ("BP_Pistol_P18C_C"))
		return "Z";
	else if (str == ("BP_Pistol_R45_C"))
		return ")";
	else if (str == ("BP_Pistol_P1911_C"))
		return "<";
	else if (str == ("BP_Pistol_DesertEagle_C"))
		return "W";
	else if (str == ("BP_WEP_Mk14_C"))
		return "R";
	else if (str == ("BP_Other_CrossBow_C"))
		return "P";
	else if (str == ("BP_Grenade_Shoulei_Weapon_C"))
		return "b";
	else if (str == ("BP_Grenade_Smoke_Weapon_C"))
		return "e";
	else if (str == ("BP_Grenade_Burn_Weapon_C"))
		return "c";
	else if (str == ("BP_Grenade_Stun_Weapon_C"))
		return "d";
	else
		return "";

	return "";
}

std::string PlayerWeapon(std::string str)
{
	if (Setting::Lang == 0 || Setting::Lang == 2)
	{
		if (str == "BP_Sniper_AWM_C")
			return "AWM";
		else if (str == "BP_Sniper_QBU_C")
			return "QBU";
		else if (str == "BP_Sniper_SLR_C")
			return "SLR";
		else if (str == "BP_Sniper_SKS_C")
			return "SKS";
		else if (str == "BP_Sniper_Mini14_C")
			return "Mini14";
		else if (str == "BP_Sniper_M24_C")
			return "M24";
		else if (str == "BP_Sniper_Kar98k_C")
			return "Kar98k";
		else if (str == "BP_Sniper_VSS_C")
			return "VSS";
		else if (str == "BP_Sniper_Win94_C")
			return "Win94";
		else if (str == "BP_Sniper_Mosin_C")
			return "Mosin";
		else if (str == "BP_Sniper_MK12_C")
			return "MK12";
		else if (str == "BP_Sniper_Mk14_C")
			return "Mk14";
		else if (str == "BP_Rifle_FAMAS_C")
			return "FAMAS";
		else if (str == "BP_Rifle_AUG_C")
			return "AUG";
		else if (str == "BP_Rifle_M762_C")
			return "M762";
		else if (str == "BP_Rifle_SCAR_C")
			return "SCAR-L";
		else if (str == "BP_Rifle_M416_C")
			return "M416";
		else if (str == "BP_Rifle_AN94_C")
			return "ASM";
		else if (str == "BP_Rifle_M16A4_C")
			return "M16A4";
		else if (str == "BP_Rifle_Mk47_C")
			return "Mk47";
		else if (str == "BP_Rifle_G36_C")
			return "G36C";
		else if (str == "BP_Rifle_QBZ_C")
			return "QBZ";
		else if (str == "BP_Rifle_AKM_C")
			return "AKM";
		else if (str == "BP_Rifle_Groza_C")
			return "Groza";
		else if (str == "BP_Other_DP28_C")
			return "DP28";
		else if (str == "BP_Other_M249_C")
			return "M249";
		else if (str == "BP_Other_MG3_C")
			return "MG3";
		else if (str == "BP_ShotGun_S12K_C")
			return "S12K";
		else if (str == "BP_ShotGun_DP12_C")
			return "DP12";
		else if (str == "BP_ShotGun_S686_C")
			return "S686";
		else if (str == "BP_ShotGun_S1897_C")
			return "S1897";
		else if (str == "BP_ShotGun_SawedOff_C")
			return "SawedOff";
		else if (str == "BP_ShotGun_M1014_C")
			return "M1014";
		else if (str == "BP_MachineGun_P90_C")
			return "P90";
		else if (str == "BP_MachineGun_PP19_C")
			return "PP19";
		else if (str == "BP_MachineGun_TommyGun_C")
			return "TommyGu";
		else if (str == "BP_MachineGun_MP5K_C")
			return "MP5K";
		else if (str == "BP_MachineGun_UMP9_C")
			return "UMP9";
		else if (str == "BP_MachineGun_Vector_C")
			return "Vector";
		else if (str == "BP_MachineGun_Uzi_C")
			return "Uzi";
		else if (str == "BP_Pistol_Flaregun_C")
			return "Flaregun";
		else if (str == "BP_Pistol_R1895_C")
			return "R1895";
		else if (str == "BP_Pistol_Vz61_C")
			return "Vz61";
		else if (str == "BP_Pistol_P92_C")
			return "P92";
		else if (str == "BP_Pistol_P18C_C")
			return "P18C";
		else if (str == "BP_Pistol_R45_C")
			return "R45";
		else if (str == "BP_Pistol_P1911_C")
			return "P1911";
		else if (str == "BP_Pistol_DesertEagle_C")
			return "DesertEagle";
		else if (str == "BP_WEP_Mk14_C")
			return "Mk14";
		else if (str == "BP_Other_CrossBow_C")
			return "CrossBow";
		else if (str == "BP_Grenade_Shoulei_Weapon_C")
			return "Shoulei Grenade";
		else if (str == "BP_Grenade_Smoke_Weapon_C")
			return "Smoke Grenade";
		else if (str == "BP_Grenade_Burn_Weapon_C")
			return "Burn Grenade";
		else if (str == "BP_Sniper_AMR_Weapon_C")
			return "AMR";
		else if (str == "BP_Other_HuntingBowEA_Weapon_C")
			return "Explosive Bow";
		else if (str == "BP_Rifle_HoneyBadger_Weapon_C")
			return "Honey Badger";
		else if (str == "BP_Rifle_ACE32_C")
			return "ACE32";
		else
			return "Fist";
	}
	else if (Setting::Lang == 1)
	{
		if (str == "BP_Sniper_AWM_C")
			return u8"ﻡﻭﺍ";
		else if (str == "BP_Sniper_QBU_C")
			return u8"ﻮﻳ ﻲﺑ ﻮﻴﻛ";
		else if (str == "BP_Sniper_SLR_C")
			return u8"ﺭﺍ ﻝﺍ ﺱﺍ";
		else if (str == "BP_Sniper_SKS_C")
			return u8"ﺱﺍ ﻲﻛ ﺱﺍ";
		else if (str == "BP_Sniper_Mini14_C")
			return u8"41 ﻲﻨﻴﻣ";
		else if (str == "BP_Sniper_M24_C")
			return u8"42 ﻡﺍ";
		else if (str == "BP_Sniper_Kar98k_C")
			return u8"ﻲﻛ 89 ﺭﺎﻛ";
		else if (str == "BP_Sniper_VSS_C")
			return u8"ﺱﺍ ﺱﺍ ﻲﻓ";
		else if (str == "BP_Sniper_Win94_C")
			return u8"49 ﻦﻳﻭ";
		else if (str == "BP_Sniper_Mosin_C")
			return u8"ﻦﻴﺳﻮﻣ";
		else if (str == "BP_Sniper_MK12_C")
			return u8"21 ﻲﻛ ﻡﺍ";
		else if (str == "BP_Sniper_Mk14_C")
			return u8"41 ﻲﻛ ﻡﺍ";
		else if (str == "BP_Rifle_FAMAS_C")
			return u8"ﺱﺎﻣﺎﻓ";
		else if (str == "BP_Rifle_AUG_C")
			return u8"ﻲﺟ ﻮﻳ ﻱﺍ";
		else if (str == "BP_Rifle_M762_C")
			return u8"ﻦﻔﺳ ﻡﺍ";
		else if (str == "BP_Rifle_SCAR_C")
			return u8"ﻝﺍ ﺭﺎﻜﺳﺍ";
		else if (str == "BP_Rifle_M416_C")
			return u8"ﺭﻮﻓ ﻡﺍ";
		else if (str == "BP_Rifle_AN94_C")
			return u8"ﻡﺍ ﺱﺍ ﻱﺍ";
		else if (str == "BP_Rifle_M16A4_C")
			return u8"61 ﻡﺍ";
		else if (str == "BP_Rifle_Mk47_C")
			return u8"74 ﻲﻛ ﻡﺍ";
		else if (str == "BP_Rifle_G36_C")
			return u8"ﻲﺳ 63 ﻲﺟ";
		else if (str == "BP_Rifle_QBZ_C")
			return u8"ﺩﺯ ﻲﺑ ﻮﻴﻛ";
		else if (str == "BP_Rifle_AKM_C")
			return u8"ﻡﺍ ﻲﻛ ﻱﺍ";
		else if (str == "BP_Rifle_Groza_C")
			return u8"ﺍﺯﻭﺮﺟ";
		else if (str == "BP_Other_DP28_C")
			return u8"82 ﻲﺑ ﻱﺩ";
		else if (str == "BP_Other_M249_C")
			return u8"ﻲﺳ ﻲﻛ ﻲﺑ";
		else if (str == "BP_Other_MG3_C")
			return u8"3 ﻲﺟ ﻡﺍ";
		else if (str == "BP_ShotGun_S12K_C")
			return u8"ﻲﻛ 21 ﺱﺍ";
		else if (str == "BP_ShotGun_DP12_C")
			return u8"21 ﻲﺑ ﻱﺩ";
		else if (str == "BP_ShotGun_S686_C")
			return u8"686 ﺱﺍ";
		else if (str == "BP_ShotGun_S1897_C")
			return u8"7981 ﺱﺍ";
		else if (str == "BP_ShotGun_SawedOff_C")
			return u8"ﻑﻭﺍ ﺩﺍﻮﺳ";
		else if (str == "BP_ShotGun_M1014_C")
			return u8"4101 ﻡﺍ";
		else if (str == "BP_MachineGun_P90_C")
			return u8"09 ﻲﺑ";
		else if (str == "BP_MachineGun_PP19_C")
			return u8"91 ﻲﺑ ﻲﺑ";
		else if (str == "BP_MachineGun_TommyGun_C")
			return u8"ﻦﺟ ﻲﻣﻮﺗ";
		else if (str == "BP_MachineGun_MP5K_C")
			return u8"ﻲﻛ 5 ﻲﺑ ﻡﺍ";
		else if (str == "BP_MachineGun_UMP9_C")
			return u8"ﻲﺑ ﻡﺍ ﻮﻳ";
		else if (str == "BP_MachineGun_Vector_C")
			return u8"ﺭﻮﺘﻜﻴﻓ";
		else if (str == "BP_MachineGun_Uzi_C")
			return u8"ﻱﺯﻭﺍ";
		else if (str == "BP_Pistol_Flaregun_C")
			return u8"ﻦﺟ ﺮﻴﻠﻓ";
		else if (str == "BP_Pistol_R1895_C")
			return u8"5981 ﺭﺍ";
		else if (str == "BP_Pistol_Vz61_C")
			return u8"16 ﺩﺯ ﻲﻓ";
		else if (str == "BP_Pistol_P92_C")
			return u8"29 ﻲﺑ";
		else if (str == "BP_Pistol_P18C_C")
			return u8"ﻲﺳ 81 ﻲﺑ";
		else if (str == "BP_Pistol_R45_C")
			return u8"54 ﺭﺍ";
		else if (str == "BP_Pistol_P1911_C")
			return u8"1191 ﻲﺑ";
		else if (str == "BP_Pistol_DesertEagle_C")
			return u8"ﻞﺠﻳﺍ ﺕﺮﻳﺰﻳﺩ";
		else if (str == "BP_WEP_Mk14_C")
			return u8"41 ﻲﻛ ﻡﺍ";
		else if (str == "BP_Other_CrossBow_C")
			return u8"ﻮﺒﺳﻭﺮﻛ";
		else if (str == "BP_Grenade_Shoulei_Weapon_C")
			return u8"ﺔﻠﺒﻨﻗ";
		else if (str == "BP_Grenade_Smoke_Weapon_C")
			return u8"ﻙﻮﻤﺳ";
		else if (str == "BP_Grenade_Burn_Weapon_C")
			return u8"ﻑﻮﺗﻮﻟﻮﻣ";
		else if (str == "BP_Sniper_AMR_Weapon_C")
			return u8"ﺭﺍ ﻡﺍ ﻱﺍ";
		else if (str == "BP_Other_HuntingBowEA_Weapon_C")
			return u8"Explosive Bow";
		else if (str == "BP_Rifle_HoneyBadger_Weapon_C")
			return u8"ﺮﺟﺪﺑ ﻲﻧﺎﻫ";
		else if (str == "BP_Rifle_ACE32_C")
			return u8"23 ﺲﻳﺍ";
		else
			return u8"ﺪﻴﻟﺍ";
	}

	return "";
}
std::string Data::scopes(int fov)
{
	if (fov == 70)
		return "Iron";
	else if (fov == 55)
		return "RedDot";
	else if (fov == 44)
		return "x2";
	else if (fov == 26)
		return "x3";
	else if (fov == 20)
		return "x4";
	else if (fov == 13)
		return "x6";
	else if (fov == 11)
		return "x8";
	else
		return "";

	return "";
}
bool IsItem(const std::string& actorName)
{
	// Don't sort AirDrop and LootBox actor
	if (actorName == "PickUpListWrapperActor"
		|| actorName == "PickUpListWrapperActor_Recycled"
		|| actorName == "AirDropListWrapperActor"
		|| actorName == "AirDropListWrapperActor_Recycled"
		|| actorName == "BP_AirDropBox_C"
		)
		return false;

	if (actorName.find("Wrapper") == std::string::npos
		|| actorName.find("PickUp") == std::string::npos

		)
		return true;

	return false;
}

bool IsVehicle(const std::string& actorName)
{
	if (actorName.find('/') != std::string::npos
		|| actorName.find("Parachute") != std::string::npos
		)
		return false;

	if (actorName.find("VH_") != std::string::npos
		|| actorName.find("Mirado") != std::string::npos
		|| actorName.find("water_Plane") != std::string::npos
		|| actorName.find("AquaRail") != std::string::npos
		|| actorName.find("Rony") != std::string::npos
		)
		return true;

	return false;
}

bool IsBombe(const std::string& classname)
{
	if (classname.find("BP_Grenade_Smoke_C") != std::string::npos)
		return true;
	if (classname.find("BP_Grenade_Burn_C") != std::string::npos)
		return true;
	if (classname.find("BP_Grenade_Stun_C") != std::string::npos)
		return true;
	if (classname.find("BP_Grenade_Shoulei") != std::string::npos)
		if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos)
			return true;
	if (classname.find("AirAttackBomb") != std::string::npos)
		return true;


	return false;
}
bool ISUseFulVector(VECTOR3 input) {
	if (isnan(input.X) && isnan(input.Y))return false;
	if (input.X == 0 && input.Y == 0)return false;
	return true;
}
bool areEqual(VECTOR3 vs, VECTOR3 vea) {
	if (vs.X == vea.X && vs.Y == vea.Y)return true;
	else return false;
}

VOID Data::KeyHandler()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_INSERT) & 0x1) {

			Setting::ShowMenu = !Setting::ShowMenu;
		}
		if (GetAsyncKeyState(VK_HOME) & 0x1) {

			Setting::ShowSideMenu = !Setting::ShowSideMenu;
		}
		if (GetAsyncKeyState(VK_F9) & 1)
		{
			Setting::UselessShow = !Setting::UselessShow;
		}
		if (GetAsyncKeyState(VK_F2) & 1)
		{
			Setting::MagicBullet = !Setting::MagicBullet;
			Setting::MagicBulletticked = !Setting::MagicBulletticked;

		}
		if (GetAsyncKeyState(VK_F3) & 1)
		{
			Setting::fightmode = !Setting::fightmode;
		}
		//if (GetAsyncKeyState(VK_TAB) & 1)
		//{
		//	Setting::Aimbot = !Setting::Aimbot;
		//}
		if (GetAsyncKeyState(VK_LCONTROL) & 1)
		{
			Setting::CRPTPressed = !Setting::CRPTPressed;
		}
		if (GetAsyncKeyState(VK_MBUTTON) & 1)//T
		{
			if (Setting::curraim == 0)
			{

				Setting::curraim++;
			}
			else
			{
				if (Setting::curraim == 1) {
					Setting::curraim = 3;
				}
				else if (Setting::curraim == 3) {
					Setting::curraim = 0;
				}
			}


		}

		std::this_thread::sleep_for(std::chrono::milliseconds(100));

	}

}


const DWORD WORLD_ROOT = 0x781638C;
const DWORD NAMES_ROOT = 0x7928780;
DWORD GetWorldPtr(DWORD libUE4_base) {
	DWORD worldDec = 0;
	DWORD worldRoot = Utility::ReadMemoryEx<DWORD>(libUE4_base + WORLD_ROOT);

	int i = 0;

	while (i <= 3) {
		uint32_t ptrVal = Utility::ReadMemoryEx<uint32_t>(worldRoot + 4 * i + 0x80);

		uint64_t byteVal = (Utility::ReadMemoryEx<uint8_t>(worldRoot + ptrVal));

		worldDec += (byteVal << (8 * i++));
	}

	return  (worldDec);

}
uint32_t GetFNamesAddr(DWORD UE4)
{
	uint32_t Encryption = (Utility::ReadMemoryEx<uint32_t>(UE4 + 0x7928780) - 0x64) / 3;
	uint32_t Ptr = Utility::ReadMemoryEx<uint32_t>(UE4 + 0x7928780 + 0x8);
	for (uint32_t i = 0; i != Encryption; i++)
		Ptr = Utility::ReadMemoryEx<uint32_t>(Ptr);
	return Ptr;
}
DWORD GetNamesPtr(DWORD libUE4_base) {
	std::array <DWORD, 16> arr;

	arr.fill(0);

	uint32_t a = Utility::ReadMemoryEx<uint32_t>(libUE4_base + NAMES_ROOT) - 100;

	uint32_t b = a / 3;

	arr[b - 1] = Utility::ReadMemoryEx<DWORD>(libUE4_base + NAMES_ROOT + 8);

	if (((b - 2) & 0x80000000) == 0) {
		uint64_t c = (((uint64_t)0xAAAAAAAB * a) >> 33) - 1;

		do {
			DWORD e = Utility::ReadMemoryEx<DWORD>(arr[c]);
			--c;
			arr[c] = e;
		} while (c > 0);
	}

	return (arr[0]);
}

uint32_t DecryptActorsArray(uint32_t uLevel, int Actors_Offset, int EncryptedActors_Offset)
{
	if (uLevel < 0x10000000)
		return 0;

	if (Utility::ReadMemoryEx<uint32_t>(uLevel + Actors_Offset) > 0)
		return uLevel + Actors_Offset;

	if (Utility::ReadMemoryEx<uint32_t>(uLevel + EncryptedActors_Offset) > 0)
		return uLevel + EncryptedActors_Offset;

	auto Encryption = Utility::ReadMemoryEx<ActorsEncryption>(uLevel + EncryptedActors_Offset + 0x0C);

	if (Encryption.Enc_1 > 0)
	{
		uint32_t DecryptedActorsPointer = 0;
		int DecCount = 4;
		int index = 0;
		while (index < DecCount) {
			auto ival = Utility::ReadMemoryEx<uint32_t>(Encryption.Enc_1 + 0x80 + (0x4 * index));
			DecryptedActorsPointer += Utility::ReadMemoryEx<uint8_t>(Encryption.Enc_1 + ival) << (0x8 * index++);
		}
		return DecryptedActorsPointer;
	}
	else if (Encryption.Enc_2 > 0)
	{
		auto Encrypted_Actors = Utility::ReadMemoryEx<uint32_t>(Encryption.Enc_2);
		if (Encrypted_Actors > 0)
		{
			return ((unsigned short)Encrypted_Actors - 0x400) & 0xFF00
				| (unsigned char)(Encrypted_Actors - 0x04)
				| (Encrypted_Actors + 0xFC0000) & 0xFF0000
				| (Encrypted_Actors - 0x4000000) & 0xFF000000;
		}
	}
	else if (Encryption.Enc_3 > 0)
	{
		auto Encrypted_Actors = Utility::ReadMemoryEx<uint32_t>(Encryption.Enc_3);
		if (Encrypted_Actors > 0)
			return _rotr(Encrypted_Actors, 0x18);
	}
	else if (Encryption.Enc_4 > 0)
	{
		auto Encrypted_Actors = Utility::ReadMemoryEx<uint32_t>(Encryption.Enc_4);
		if (Encrypted_Actors > 0)
			return Encrypted_Actors ^ 0xCDCD00;
	}
	return 0;
}


string Data::GetState(int GetEnemyState)
{
	switch (GetEnemyState)
	{
	case 0:
	case 1073872896:
	case 1073741832:
		return "AFK";
		break;
	case 1:
		return "In Water";
		break;
	case 8:
		return "Standing";
		break;
	case 9:
		return "Walking";
		break;
	case 10:
		return "Landing";
		break;
	case 11:
		return "Running";
		break;
	case 16:
		return "Crouching";
		break;
	case 17:
		return "Crouching Walk";
		break;
	case 19:
		return "Crouching Run";
		break;
	case 32:
		return "Snaking";
		break;
	case 33:
		return "Snaking Walk";
		break;
	case 35:
		return "Snaking Run";
		break;
	case 5445:
	case 762:
		return "Snake";
		break;
	case 72:
	case 73:
	case 75:
		return "Jumping";
		break;
	case 264:
	case 272:
	case 273:
	case 288:
	case 265:
	case 329:
	case 3145992:
		return "Relaoding";
		break;
	case 136:
	case 137:
	case 144:
	case 145:
	case 160:
	case 648:
	case 649:
	case 1160:
	case 1161:
	case 1169:
	case 201:
	case 1168:
	case 3145864:
	case 672:
		return "Firing";
		break;
	case 4194304:
	case 4194307:
	case 4109347:
		return "Swimming";
		break;
	case 131070:
	case 131071:
	case 131072:
	case 131073:
	case 131074:
	case 131075:
	case 4325377:
		return "Knocked";
		break;
	case 524296:
		return "Driving Vehicle";
		break;
	case 524288:
		return "Driving Boat";
		break;
	case 1048584:
		return "Set in Vehicle";
		break;
	case 1048576:
		return "Set in Boat";
		break;
	case 33554440:
		return "Set in Plane";
		break;
	case 3146248:
		return "Aim in vehicle";
		break;
	case 3146240:
		return "Aim in boat";
		break;
	case 3145736:
		return "Beek in vehicle";
		break;
	case 3145728:
		return "Beek in boat";
		break;
	case 1050632:
		return "Change vehicle seat";
		break;
	case 1050624:
		return "Change boat seat";
		break;
	case 32784:
		return "Reviving";
		break;
	case 16392:
	case 16393:
	case 16401:
	case 16416:
	case 16417:
	case 16457:
	case 16400:
	case 17401:
	case 17417:
	case 17424:
	case 17425:
	case 17416:
		return "Throwing Boomb";
		break;
	case 16777224:
	case 16777226:
		return "Climping";
		break;
	case 8200:
	case 8208:
	case 8264:
	case 8203:
	case 8267:
	case 8209:
		return "Punish, Stab";
		break;
	case 520:
	case 544:
	case 521:
	case 656:
	case 528:
	case 529:
		return "Aiming";
		break;
	case 1680:
	case 1672:
	case 1673:
	case 1032:
	case 1544:
	case 1545:
	case 1033:
	case 1553:
	case 1552:
	case 1040:
	case 1041:
		return "Peeking";
		break;
	case 2056:
		return "Change Weapon";
		break;
	case 65544:
	case 65552:
	case 65553:
	case 65568:
	case 1114120:
		return "Healing";
		break;
	case 65545:
		return "Healing & Walk";
		break;
	case 268435464:
		return "Playing Emotion";
		break;
	case 4194305:
		return "Diving, Floating";
		break;
	case 8388617:
	case 8388616:
	case 8388609:
		return "Flying";
		break;
	default:
		return "";
		break;
	}

	return std::to_string(GetEnemyState);
}
DWORD Data::NetDriver;
DWORD Data::GName;
DWORD Data::GameState;
//DWORD Data::PlayerStateBASE;
DWORD Data::GameMode;
int Data::NoneAIGameTime;
int Data::PlayerNumPerTeam;
string Data::GameType;
DWORD Data::TimeRemind;
int Data::PlayerAddonCount;
int Data::RealPls;
int Data::ElapsedTime;
int Data::GameModeID;
int Data::CurCircleWave;
int Data::PlayerNumGameState;
int Data::AlivePlayerNum;
int Data::AliveTeamNum;
DWORD Data::LocalPlayer;
DWORD Data::LocalPlayerAddr;
DWORD Data::LocalController;
DWORD Data::CurrentReloadWeapon;
DWORD Data::ShootWeaponEntity;
DWORD Data::PlayerController;
DWORD Data::PlayerCameraManager;
DWORD Data::Mesh;
DWORD Data::AimingEntityAddress;
VECTOR3 Data::MyHeadPos;
CameraCacheEntry Data::CameraCache;;
VECTOR3 Data::lOCALPLAYERHEAD;
VECTOR3 Data::lOCALPLAYERPosotion;
VECTOR3 Data::AimingCoordinates;
VECTOR3 Data::RelativeScale3D;
FRotator Data::lOCALPLAYERRotation;
DWORD Data::EntityAddress = 0;

vector<AActor> Data::AActorList = {};
vector<AActor> Data::AimingAtMePlayersList = {};
vector<AActor> Data::ABotList = {};
vector<BombAlert> Data::BombAlertList = {};
vector<Item> Data::ItemList = {};
vector<impItem> Data::impItemList = {};
vector<Vehicle> Data::VehicleList = {};
vector<Deadbox> Data::BoxesList = {};

std::map<DWORD, int> GrenadesCD;

std::unordered_map<DWORD, DWORD> RepeatedActors = {};
std::unordered_map<DWORD, string> TempAllActorsCache = {};
vector<DWORD>  TempActorAdrress = {};

int Data::Kills;
std::string Data::LocalPawn;
std::string Data::Weapon;

//static bool Data::GetVisible(uintptr_t PlayerBase)
//{
//	return Utility::ReadMemoryEx<bool>(PlayerBase + Offset::bVisible);
//}

std::string getNameFromId(int ID) {
	DWORD64 fNamePtr = Utility::ReadMemoryEx<DWORD64>(0x8D67024 + (ID / 0x4000) * 8);
	DWORD64 fName = Utility::ReadMemoryEx<DWORD64>(fNamePtr + 8 * (ID % 0x4000));
	char name[64];
	ZeroMemory(name, sizeof(name));
	if (ReadProcessMemory(Game::hProcess, (LPVOID)(fName + 16), name, sizeof(name) - 2, NULL) != 0)
	{
		return std::string(name);
	}
	else {
		return std::string("FAIL");
	}
}
std::map<LONG, string> DumpedIds;

VOID Data::ItemPicker()
{

	std::unordered_map<DWORD, string> TempList = {};
	vector<DWORD>  TempCacheActorAdrress = {};
	DWORD Ue4Base = Utility::ReadMemoryEx<int>(Offset::LibUe4);
	DWORD GWorld = Utility::ReadMemoryEx<DWORD>(Ue4Base + Offset::GWorld) + 0x3C;
	Data::ViewMatrixBase = Ue4Base + Offset::ViewMatrixBase;
	DWORD GName = (Utility::ReadMemoryEx<DWORD>(Ue4Base + Offset::Gname) + 0x88);

	std::cout << "Starting ItemPicker loop..." << std::endl;

	while (true)
	{

		std::cout << "Reading UWorld..." << std::endl;
		UWorld = Utility::ReadMemoryEx<DWORD>(GWorld);
		if (UWorld != 0)
		{

			std::cout << "Found UWorld at address: " << std::hex << UWorld << std::dec << std::endl;

			DWORD PersistentLevel = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::PersistentLevel);
			std::cout << "PersistentLevel address: " << std::hex << PersistentLevel << std::dec << std::endl;

			NetDriver = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::NetDriver);

			if (PlayerNumPerTeam == 1)
				GameType = "SOLO";
			else if (PlayerNumPerTeam == 2)
				GameType = "DUO";
			else if (PlayerNumPerTeam == 4)
				GameType = "SQUAD";
			else
				GameType = "Detecting Mode;";

			std::cout << "Game type set to: " << GameType << std::endl;

			TimeRemind = Utility::ReadMemoryEx<int>(GameState + Offset::ElapsedTime);
			INT EntityID = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::ItemDefineID + Offset::TypeSpecificID);

			if (PersistentLevel != 0)
			{
				std::cout << "Decrypting Actors Array..." << std::endl;
				auto ActorsPointerAddress = DecryptActorsArray(PersistentLevel, Offset::EntityList, Offset::EncryptedActors_Offset);
				DWORD EntityList = Utility::ReadMemoryEx<uint32_t>(ActorsPointerAddress);
				DWORD EntityCount = Utility::ReadMemoryEx<int>(ActorsPointerAddress + 0x4);

				std::cout << "Entity List at: " << std::hex << EntityList << std::dec << ", Entity Count: " << EntityCount << std::endl;

				if (EntityList == EntityCount)
					std::cout << "Offsets are out of date please update the offsets...\n Press the Enter Key to Exit" << std::endl;
					std::cin.get(); // temp pause 
					ExitProcess(1);
				if (EntityCount <= 0)
				{

					std::cout << "No entities found, continuing..." << std::endl;
					ExitProcess(1);
					continue;
				}

				for (int i = 0; i < EntityCount; i++)
				{

					DWORD EntityAddress = Utility::ReadMemoryEx<DWORD>(EntityList + i * 4);

					std::cout << "Processing Entity at address: " << std::hex << EntityAddress << std::dec << std::endl;

					if (EntityAddress == (DWORD)nullptr || EntityAddress == -1 || EntityAddress == NULL)
						continue;

					if (RepeatedActors.find(EntityAddress) == RepeatedActors.end())
					{
						std::cout << "New Actor found, adding to RepeatedActors..." << std::endl;
						RepeatedActors.insert(make_pair(EntityAddress, PersistentLevel));
					}
					else
					{
						std::cout << "Actor already in RepeatedActors, skipping..." << std::endl;
						continue;
					}

					DWORD EntityStruct = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x10);
					std::string EntityType = GetEntityType2(GName, EntityStruct);

					std::cout << "Entity Type: " << EntityType << std::endl;

					if (EntityType == "None" || EntityType == " " || EntityType == "") continue;

					// Setting LocalPawn based on EntityType
					if (EntityType == "PUBG_Forest_x7_y7_Collision" || EntityType == "Baltic_Main_C")
					{
						Data::LocalPawn = "Erangel";
					}
					else if (EntityType == "BRPlayerStateTeam_DeathMatch")
					{
						Data::LocalPawn = "TDM";
					}
					else if (EntityType == "SingleTraining_Main_C")
					{
						Data::LocalPawn = "Training";
					}
					else if (EntityType == "PUBG_Borderland_Main_C")
					{
						Data::LocalPawn = "Nusa";
					}
					else if (EntityType == "BuildingKanerjing_Trigger")
					{
						Data::LocalPawn = "Livik";
					}
					else if (EntityType == "BP_PlayerState_SocialIsland_C")
					{
						Data::LocalPawn = "CheerPark";
					}
					else if (EntityType == "PUBG_Desert_C")
					{
						Data::LocalPawn = "Miramar";
					}
					else if (EntityType == "PUBG_Savage_Main_C")
					{
						Data::LocalPawn = "Sanhok";
					}
					else if (EntityType == "SummerLand_ObjectPoolMgr")
					{
						Data::LocalPawn = "Karakin";
					}
					else if (EntityType == "BP_BRGameState_TeamHardPoint_C")
					{
						Data::LocalPawn = "Domination";
					}
					if (EntityType == "BP_PlayerCharacter_PlanDB_C")
					{
						Data::LocalPawn = "Dragon Ball";
					}
					else if (EntityType == "DBZ_Main_huoshan_a_yanjiang")
					{
						Data::LocalPawn = "Dragon Ball Event";
					}

					if (Setting::UselessShow)
					{
						if (DumpedIds.find(EntityID) == DumpedIds.end())
						{
							std::cout << "Dumping Item ID..." << std::endl;
							DumpedIds.insert({ EntityID,  EntityType });
							ofstream cpp;
							cpp.open("C:\\DumpsItemid.txt", ios::app);
							cpp << "if (ID ==  " << EntityID << ")" << endl;
							cpp << "return  \"" << EntityType << "\"" << endl << endl;
						}
					}

					if (Setting::UselessShow) {
						std::cout << "Dumping Entity Type..." << std::endl;
						ofstream cpp;
						cpp.open("C:\\EntityDumps.txt", ios::app);
						cpp << EntityType << endl;
					}

					if (Setting::PlayerESP)
					{
						if (IsPlayer(EntityType))
						{
							std::cout << "Adding Player to TempList..." << std::endl;
							TempList.emplace(make_pair(EntityAddress, EntityType));
							TempCacheActorAdrress.emplace_back(EntityAddress);
							continue;
						}
					}

					if (Setting::Vehicle)
					{
						if (IsVehicle(EntityType)) {
							std::cout << "Adding Vehicle to TempList..." << std::endl;
							TempList.emplace(make_pair(EntityAddress, EntityType));
							TempCacheActorAdrress.emplace_back(EntityAddress);
							continue;
						}
					}

					if (Setting::Esp_Item_DeadBox)
					{
						if (IsBox(EntityType))
						{
							std::cout << "Adding Box to TempList..." << std::endl;
							TempList.emplace(make_pair(EntityAddress, EntityType));
							TempCacheActorAdrress.emplace_back(EntityAddress);
							continue;
						}
					}

					if (Setting::BombAlert)
					{
						if (IsBombe(EntityType))
						{
							std::cout << "Adding Bomb to TempList..." << std::endl;
							TempList.emplace(make_pair(EntityAddress, EntityType));
							TempCacheActorAdrress.emplace_back(EntityAddress);
							continue;
						}
					}

					if (Setting::Item)
					{
						if (IsItem(EntityType))
						{
							std::cout << "Adding Item to TempList..." << std::endl;
							TempList.emplace(make_pair(EntityAddress, EntityType));
							TempCacheActorAdrress.emplace_back(EntityAddress);
							continue;
						}
					}

					if (Setting::UselessShow)
					{
						std::cout << "Adding Useless Show Entity to TempList..." << std::endl;
						TempList.emplace(make_pair(EntityAddress, EntityType));
						TempCacheActorAdrress.emplace_back(EntityAddress);
						continue;
					}
				}
			}
		}

		TempAllActorsCache = TempList;
		TempActorAdrress = TempCacheActorAdrress;
		TempCacheActorAdrress.clear();
		TempList.clear();
		RepeatedActors.clear();

		std::cout << "Sleeping for " << Setting::AdreessGetterDelay << " milliseconds..." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(Setting::AdreessGetterDelay));
	}
}

#define	PTR_SIZE 8 
uintptr_t GetVirtualFunctionAddresss(uintptr_t Class, uint32_t index)
{
	if (!Class)
		return 0;

	return Utility::ReadMemoryEx<uintptr_t>(Utility::ReadMemoryEx<uintptr_t>(Class) + (index * PTR_SIZE));
}
VOID Data::QueryThread()
{
	std::cout << "Sleeping for 1" << std::endl;
	DWORD Ue4Base = Utility::ReadMemoryEx<int>(Offset::LibUe4);
	std::cout << "Ue4Base Address: " << std::hex << Ue4Base << std::endl;

	DWORD GWorld = Utility::ReadMemoryEx<DWORD>(Ue4Base + Offset::GWorld) + 0x3C;
	std::cout << "GWorld Address: " << std::hex << GWorld << std::endl;

	Data::ViewMatrixBase = Ue4Base + Offset::ViewMatrixBase;
	std::cout << "ViewMatrixBase Address: " << std::hex << Data::ViewMatrixBase << std::endl;

	DWORD GName = (Utility::ReadMemoryEx<DWORD>(Ue4Base + Offset::Gname) + 0x88);
	std::cout << "GName Address: " << std::hex << GName << std::endl;

	DWORD PersistentLevel = 0;
	DWORD ServerConnection = 0;
	DWORD EntityList = 0;
	INT EntityCount = 0;
	std::cout << "Initialized Entity Variables" << std::endl;

	DWORD EntityStruct = 0;
	string EntityType = "";

	DWORD RootComponent = 0;
	INT MyTeamId = 9999;
	std::cout << "MyTeamId Initialized: " << MyTeamId << std::endl;

	string GrenadeType = "";
	string ItemType = "";
	string VehicleType = "";
	string airdroptype = "";
	string deadboxtype = "";

	vector<AActor> AActorList = {};
	vector<AActor> AimingAtMePlayersList = {};
	vector<BombAlert> BombAlertList = {};
	vector<Item> ItemList = {};
	vector<impItem> impItemList = {};
	vector<Vehicle> VehicleList = {};
	std::vector<Deadbox> Boxess = {};
	std::vector<VECTOR3> BombLocation = {};

	std::cout << "Initialized Vectors" << std::endl;

	
	for (;;)
	{
		try {
			GameState = Utility::ReadMemoryEx<DWORD>(UWorld + Offset::GameState);
			ElapsedTime = Utility::ReadMemoryEx<int>(GameState + Offset::ElapsedTime);
			NoneAIGameTime = Utility::ReadMemoryEx<int>(GameState + Offset::NoneAIGameTime);
			ServerConnection = Utility::ReadMemoryEx<DWORD>(NetDriver + Offset::ServerConnection);
			PlayerController = Utility::ReadMemoryEx<DWORD>(ServerConnection + Offset::PlayerController);
			LocalPlayer = Utility::ReadMemoryEx<DWORD>(PlayerController + Offset::AcknowledgedPawn);
			LocalPlayerAddr = Utility::ReadMemoryEx<uint32_t>(PlayerController + Offset::STExtraBaseCharacter);
			LocalController = Utility::ReadMemoryEx<DWORD>(Data::LocalPlayerAddr + Offset::STExtraPlayerCharacter::STPlayerController);
			PlayerCameraManager = Utility::ReadMemoryEx<DWORD>(LocalController + Offset::PlayerController1::PlayerCameraManager);
			DWORD PlayerState = Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::Status);
			DWORD PlayerStateBASE = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Status);
			AliveTeamNum = Utility::ReadMemoryEx<int>(GameState + Offset::AliveTeamNum);
			AlivePlayerNum = Utility::ReadMemoryEx<int>(GameState + Offset::AlivePlayerNum);
			PlayerNumGameState = Utility::ReadMemoryEx<int>(GameState + Offset::PlayerNum);
			PlayerNumPerTeam = Utility::ReadMemoryEx<int>(GameState + Offset::PlayerNumPerTeam);
			CurCircleWave = Utility::ReadMemoryEx<int>(GameState + Offset::CurCircleWave);
			GameModeID = Utility::ReadMemoryEx<int>(GameState + Offset::GameModeID);
			Kills = Utility::ReadMemoryEx<INT>(PlayerState + Offset::Kills);
			RealPls = Utility::ReadMemoryEx<INT>(GameState + Offset::PlayerNum);
			MyPlayerWorld = Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::RootComponent);
			Mesh = Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::Mesh);
			if (EntityCount > 512)
			{
				EntityCount = 512;
			}
			for (int i = 0; i < TempActorAdrress.size(); i++)
			{
				if (TempActorAdrress.empty())break;
				EntityAddress = TempActorAdrress[i];
				if (EntityAddress == NULL) { continue; }
				if (TempAllActorsCache.empty())break;
				DWORD EntityStruct = Utility::ReadMemoryEx<DWORD>(EntityAddress + 0x10);
				std::string EntityType = GetEntityType2(GName, EntityStruct);
				RootComponent = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent);
				if (IsPlayer(EntityType) && Setting::PlayerESP)
				{

					AActor AActor;
					AActor.IsDead = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsDead);
					AActor.Status = Utility::ReadMemoryEx<int>(EntityAddress + Offset::CurrentStates);
					if (AActor.Status == 0 || AActor.Status == 262144 || AActor.Status == 262145 || AActor.Status == 262152 || AActor.Status == 301989896 || AActor.Status == 8650752 || AActor.Status == 33554440)continue;
					std::string sta = Data::GetState(Utility::ReadMemoryEx<UINT>(EntityAddress + Offset::CurrentStates));
					if (sta == "")
						sta = "UNKO";
					AActor.StateInt = sta;
					AActor.bIsGunADS = Utility::ReadMemoryEx<bool>(LocalPlayer + Offset::bIsGunADS);
					AActor.bIsWeaponFiring = Utility::ReadMemoryEx<bool>(LocalPlayer + Offset::bIsWeaponFiring);
					AActor.MyScope = Utility::ReadMemoryEx<FLOAT>(LocalPlayer + Offset::ScopeFov);

					int KnockedHealth = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::NearDeathBreath);
					if (KnockedHealth <= 0)
						continue;
					bool IsDead = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsDead);
					if (IsDead == true)
						continue;
					AActor.TeamId = Utility::ReadMemoryEx<INT>(EntityAddress + Offset::TeamId);
					AActor.Address = EntityAddress;
					Data::AimingEntityAddress = EntityAddress;
					AActor.Visible2 = Utility::ReadMemoryEx<bool>(EntityAddress + 0x15BB);
					if (AActor.Visible2 == 1)
					{
						AActor.Visible = 1;
					}
					else
					{
						AActor.Visible = 0;
					}
					if (AActor.Address == LocalPlayerAddr)
					{
						CurrentReloadWeapon = Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::CurrentWeapon);
						ShootWeaponEntity = Utility::ReadMemoryEx<DWORD>(CurrentReloadWeapon + Offset::ShootWeaponEntity);
						MyTeamId = AActor.TeamId;
						if (Setting::MyLineOfSight)
						{
							FRotator RelativeRotation = Utility::ReadMemoryEx<FRotator>(RootComponent + Offset::RelativeRotation);
							lOCALPLAYERRotation = RelativeRotation;

						}
						continue;
					}

					if (AActor.TeamId == MyTeamId) continue;
					FRotator RelativeRotation = Utility::ReadMemoryEx<FRotator>(RootComponent + Offset::RelativeRotation);
					VECTOR3 RelativeLocation = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::RelativeLocation);

					AActor.RelativeLocation = RelativeLocation;
					AActor.RelativeRotation = RelativeRotation;
					AActor.IsBot = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::IsBot);
					AActor.Nation = GetPlayerName(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Nation));
					AActor.Health = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::Health);
					AActor.UID = GetPlayerName(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PlayerUID));
					AActor.KnockedHealth = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::NearDeathBreath);
					AActor.HealthMax = Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::HealthMax);
					DWORD player_name_ptr = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Name);

					if (!AActor.IsBot)
					{
						AActor.Name = GetPlayerNameUTF(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::Name));
						//AActor.Name = read_unicode(player_name_ptr, 64);
					}
					else
					{
						AActor.Name = " Bot ";
					}
					//if (Setting::MagicBulletticked) {
					//	int Point = GetNearestBone(entityAddv, hitboxes);
					//	AActor.NerstBone = GetBoneWorldPosition(entityAddv, Point);
					//}
					if (Setting::playerweapon)
					{
						DWORD wep = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::CurrentWeapon);
						DWORD wep1 = Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::CurrentWeapon);
						Data::Weapon = PlayerWeapon(GetEntityType2(GName, Utility::ReadMemoryEx<DWORD>(Utility::ReadMemoryEx<DWORD>(LocalPlayer + Offset::CurrentWeapon) + 16)));
						AActor.weapon1 = Data::Weapon;
						if (Setting::Lang == 0 || Setting::Lang == 2)
						{

							if (Data::Weapon == "")
								Data::Weapon = "Fist";
						}
						else if (Setting::Lang == 1)
						{
							if (Data::Weapon == "")
								Data::Weapon = u8"ﺪﻴﻟﺍ";
						}
						if (wep) {

							//std::string weapon = Data::PlayerWeaponFont(GetEntityType2(GName, Utility::ReadMemoryEx<DWORD>(wep + 16)));
							std::string weapon = PlayerWeapon(GetEntityType2(GName, Utility::ReadMemoryEx<DWORD>(wep + 16)));
							AActor.Weapon = weapon;
							AActor.weapon1 = GetEntityType(GName, Utility::ReadMemoryEx<DWORD>(wep1 + 16));

							DWORD STExtraShootWeaponComponent = Utility::ReadMemoryEx<DWORD>(wep + Offset::ShootWeaponComponent);
							if (STExtraShootWeaponComponent != 0)
							{
								DWORD STExtraShootWeapon = Utility::ReadMemoryEx<DWORD>(STExtraShootWeaponComponent + Offset::OwnerShootWeapon);
								if (STExtraShootWeapon != 0)
								{
									AActor.Ammo = Utility::ReadMemoryEx<int>(STExtraShootWeapon + Offset::CurBulletNumInClip);
									AActor.AmmoMax = Utility::ReadMemoryEx<int>(STExtraShootWeapon + Offset::CurMaxBulletNumInOneClip);

									AActor.ScopeFov = Data::scopes(Utility::ReadMemoryEx<FLOAT>(EntityAddress + Offset::ScopeFov));
								}
							}
						}

						else
						{
							if (Setting::Lang == 0 || Setting::Lang == 2)
							{

								AActor.Weapon = "Fist";
							}
							else if (Setting::Lang == 1)
							{
								AActor.Weapon = u8"ﺪﻴﻟﺍ";
							}
						}
					}


					AActor.Velocity = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(AActor.Address + Offset::CharacterMovement) + Offset::LastUpdateVelocity);

					if (Setting::IsimingAtYou)
					{
						FRotator RelativeRotation = AActor.RelativeRotation;
						ClampAngles(RelativeRotation);
						VECTOR3 MyHEad = lOCALPLAYERPosotion;
						VECTOR3 EnemyHed = Utility::ReadMemoryEx<VECTOR3>(Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::RootComponent) + Offset::Position);
						auto Angle = ToRotator(EnemyHed, MyHEad);
						ClampAngles(Angle);
						float num = abs(RelativeRotation.Pitch - Angle.Pitch);
						float num2 = abs(RelativeRotation.Yaw - Angle.Yaw);
						bool num3 = (num + num2) <= 6.f;

						if (num3 == true) {
							AActor.isAimingAtMe = true;
							AimingAtMePlayersList.emplace_back(AActor);
						}
					}
					AActorList.emplace_back(AActor);
					continue;
				}

				if (Setting::BombAlert)
				{
					ItemType = GetGrenadeType(EntityType);
					if (ItemType.find(("noooooooot")) == std::string::npos)
					{
						if (GrenadesCD.find(EntityAddress) == GrenadesCD.end())
						{
							GrenadesCD.insert({ EntityAddress,  ElapsedTime + 7 });
						}
						int CurrentTime = GrenadesCD.at(EntityAddress) - ElapsedTime;
						if (CurrentTime > 0) {

							BombAlert Bomb;
							Bomb.Name = ItemType;
							Bomb.timeLeft = CurrentTime;
							Bomb.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
							Bomb.Address = EntityAddress;

							BombLocation.push_back(Bomb.Position);
							BombLocation.erase(unique(BombLocation.begin(), BombLocation.end()), BombLocation.end());
							Bomb.Trajectory = BombLocation;
							BombAlertList.emplace_back(Bomb);
							continue;
						}
					}
				}
				if (IsBox(EntityType))
				{
					Deadbox BOX;
					if (Setting::Lang == 0 || Setting::Lang == 2)
					{
						if (IsAirBox(EntityType)) {
							BOX.Name = "AirDrop Box ";
							BOX.isAirDrop = true;
							BOX.IsTreasureBox = false;
							BOX.IsDeadBox = false;
						}
						else if (IsTreasureBox(EntityType)) {
							BOX.IsTreasureBox = true;
							BOX.IsDeadBox = false;
							BOX.isAirDrop = false;
							BOX.Name = "Treasure Box ";
						}
						else {
							BOX.Name = "Dead Box  ";
							BOX.IsDeadBox = true;
							BOX.isAirDrop = false;
							BOX.IsTreasureBox = false;
						}
					}
					else if (Setting::Lang == 1)
					{
						if (IsAirBox(EntityType)) {
							BOX.Name = u8"ﺏﻭﺭﺩ ﺮﻳﺍ ";
							BOX.isAirDrop = true;
							BOX.IsTreasureBox = false;
							BOX.IsDeadBox = false;
						}
						else if (IsTreasureBox(EntityType)) {
							BOX.IsTreasureBox = true;
							BOX.IsDeadBox = false;
							BOX.isAirDrop = false;
							BOX.Name = u8"ﺰﻨﻜﻟﺍ ﻕﻭﺪﻨﺻ ";
						}
						else {
							BOX.Name = u8"ﻡﻮﺣﺮﻤﻟﺍ ﻕﻭﺪﻨﺻ  ";
							BOX.IsDeadBox = true;
							BOX.isAirDrop = false;
							BOX.IsTreasureBox = false;
						}
					}
					BOX.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
					BOX.bIsAirOpen = Utility::ReadMemoryEx<bool>(EntityAddress + Offset::bIsAirOpen);
					DWORD count = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList + 0x4);
					if (count > 30)
						count = 30;
					if (count > 0)
					{
						long itemBase = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::PickUpDataList);
						long itemAddv;

						for (int t = 0; t < count; t++)
						{
							itemAddv = itemBase + t * 48;
							std::string itemname = GetBoxItems(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x4));
							if (itemname != "tatti")
							{
								Itemb iteminbox;
								itemname.append(" * ").append(std::to_string(Utility::ReadMemoryEx<DWORD>(itemAddv + 0x18)));
								iteminbox.colorcod = Setting::colorcode;
								iteminbox.Displayname = itemname;
								BOX.boxitem.emplace_back(iteminbox);
							}
						}
					}
					Boxess.emplace_back(BOX);
					continue;
				}
				if (Setting::Vehicle)
				{
					VehicleType = GetVehicleType(EntityType);
					if (VehicleType.find(("Unknown")) == std::string::npos)
					{

						Vehicle Vehicle;
						Vehicle.Name = VehicleType;
						Vehicle.Address = EntityAddress;
						DWORD veh = Utility::ReadMemoryEx<DWORD>(EntityAddress + Offset::VehicleCommon);
						float speed = Utility::ReadMemoryEx<float>(EntityAddress + Offset::lastForwardSpeed);
						float HP = Utility::ReadMemoryEx<float>(veh + Offset::HP);
						float HPMax = Utility::ReadMemoryEx<float>(veh + Offset::HPMax);
						float Fuel = Utility::ReadMemoryEx<float>(veh + Offset::Fuel);
						float FuelMax = Utility::ReadMemoryEx<float>(veh + Offset::FuelMax);
						if (HPMax == 0)continue;
						if (FuelMax == 0)continue;
						Vehicle.hp = (int)(HP * 100 / HPMax);
						if (speed > 8 || speed < -8)
						{
							Vehicle.driving = true;
						}
						else
						{
							Vehicle.driving = false;
						}
						Vehicle.oil = (int)(Fuel * 100 / FuelMax);
						if (Vehicle.oil < 0 || Vehicle.oil > 101) {
							continue;
						}
						else {
							VehicleList.emplace_back(Vehicle);
							continue;
						}
					}
				}
				if (Setting::Item)
				{
					ItemType = GetItemType(EntityType);
					if (ItemType.find(("Unknown")) == std::string::npos)
					{
						Item Item;
						Item.Name = ItemType;
						Item.Address = EntityAddress;
						Item.Position = Utility::ReadMemoryEx<VECTOR3>(RootComponent + Offset::Position);
						ItemList.emplace_back(Item);
						continue;
					}
				}
			}
			//std::cout << "Sleeping ... " << std::endl;

			Data::AActorList = AActorList;
			Data::AimingAtMePlayersList = AimingAtMePlayersList;
			Data::BombAlertList = BombAlertList;
			Data::ItemList = ItemList;
			Data::VehicleList = VehicleList;
			Data::BoxesList = Boxess;

			AActorList.clear();
			BombAlertList.clear();
			ItemList.clear();
			VehicleList.clear();
			AimingAtMePlayersList.clear();
			Boxess.clear();
			BombLocation.clear();

			std::this_thread::sleep_for(std::chrono::milliseconds(Setting::AdreessGetterDelay));
		}
		catch (int e) {
			cout << e << endl;
		}
	}
}
float Data::DistanceTravelled = 0;
float Data::GameInfovelocity = 0;
VECTOR3 SubVec(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result;
	Result.X = Src.X - Dst.X;
	Result.Y = Src.Y - Dst.Y;
	Result.Z = Src.Z - Dst.Z;
	return Result;
}
float MagVec(VECTOR3 Vec)
{
	return sqrtf(Vec.X * Vec.X + Vec.Y * Vec.Y + Vec.Z * Vec.Z);
}
float GetDistVec(VECTOR3 Src, VECTOR3 Dst)
{
	VECTOR3 Result = SubVec(Src, Dst);
	return MagVec(Result);
}
void Data::GameInformation()
{
	int time = 100;
	vector<float> avgVelo;
	float v1 = 0;
	float v2 = 0;
	while (true)
	{
		if (Data::NetDriver > 0)
		{
			if (Data::MyPlayerWorld > 0)
			{
				VECTOR3 Pi = Utility::ReadMemoryEx<VECTOR3>(Data::MyPlayerWorld + Offset::RelativeLocation);
				Pi.Z = 0;
				Sleep(time);
				VECTOR3 Pf = Utility::ReadMemoryEx<VECTOR3>(Data::MyPlayerWorld + Offset::RelativeLocation);
				Pf.Z = 0;

				float displacement = ((GetDistVec(Pf, Pi)) / 100);//metre
				float velocity = ((displacement * 1000) / time);//m/s        
				Data::DistanceTravelled += displacement;
				if (avgVelo.size() < 5)
				{
					avgVelo.push_back(velocity);
				}
				else
				{
					double maxii = *max_element(avgVelo.begin(), avgVelo.end());
					Data::GameInfovelocity = maxii;
					avgVelo.clear();
				}
				Data::GameInfovelocity = velocity;
			}
		}
		else
		{
			Sleep(200);
		}
	}
}