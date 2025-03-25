//#include "Main.h"
//#pragma comment(lib, "cryptlib.lib")
#define GDIPVER 0x0110
#include "Includes.h"
#include "Utility.h"
#include "Driver.h"
#include "DX11Window.h"
#include "DX11.h"
#include "Data.h"
#include "LIB.h"
#include "Esp.h"
#include "Memory.h"
#include "Aimbot.h"
#include "loadDrv.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"
#include "ShObjIdl.h"
#include "SimpleIni.h"
#include "logo.h"
#include "heart.h"
#include "tahoma.h"
#include "TotalEnemy.h"
#include "Notification/imgui_notify.h"
#include "tahoma.h"
#include "Arabic/Arabic.h"
#include "Vehicles Icons/Vehicles.h"
#include <atlbase.h>
#include <stdexcept>
#include "ASA.h"
#include "Arrow.h"
#include "PlayersWeapons/Hand1.h"
#include "PlayersWeapons/Hand2.h"
#include "PlayersWeapons/Hand3.h"
#include "PlayersWeapons/Hand4.h"
#include "PlayersWeapons/Hand5.h"
#include "PlayersWeapons/Hand6.h"
#include "PlayersWeapons/Hand7.h"
#include "PlayersWeapons/Hand8.h"
#include "PlayersWeapons/Hand9.h"
#include "PlayersWeapons/Hand10.h"
#include "PlayersWeapons/Hand11.h"
#include "PlayersWeapons/Hand12.h"
#include "PlayersWeapons/Hand13.h"
#include "PlayersWeapons/Hand14.h"
#include "PlayersWeapons/Hand15.h"
#include "PlayersWeapons/Hand16.h"
#include "PlayersWeapons/Hand17.h"
#include "PlayersWeapons/Hand18.h"
#include "PlayersWeapons/Hand19.h"
#include "PlayersWeapons/Hand20.h"
#include "PlayersWeapons/Hand21.h"
#include "PlayersWeapons/Hand22.h"
#include "PlayersWeapons/Hand23.h"
#include "PlayersWeapons/Hand24.h"
#include "PlayersWeapons/Hand25.h"
#include "PlayersWeapons/Hand26.h"
#include "PlayersWeapons/Hand27.h"
#include "PlayersWeapons/Hand28.h"
#include "PlayersWeapons/Hand29.h"
#include "PlayersWeapons/Hand30.h"
#include "PlayersWeapons/Hand31.h"
#include "PlayersWeapons/Hand32.h"
#include "PlayersWeapons/Hand33.h"
#include "PlayersWeapons/Hand34.h"
#include "PlayersWeapons/Hand35.h"
#include "PlayersWeapons/Hand36.h"
#include "PlayersWeapons/Hand37.h"
#include "PlayersWeapons/Hand38.h"
#include "PlayersWeapons/Hand39.h"
#include "PlayersWeapons/Hand40.h"
#include "PlayersWeapons/Hand41.h"
#include "PlayersWeapons/Hand42.h"
#include "PlayersWeapons/Hand43.h"
#include "PlayersWeapons/Hand44.h"
#include "PlayersWeapons/Hand45.h"
#include "PlayersWeapons/Hand46.h"
#include "PlayersWeapons/Hand47.h"
#include "PlayersWeapons/Hand48.h"
#include "PlayersWeapons/Hand49.h"
#include "PlayersWeapons/Hand50.h"
#include "PlayersWeapons/Hand51.h"
#include "PlayersWeapons/Hand52.h"
#include "PlayersWeapons/Hand53.h"
#include "PlayersWeapons/Hand54.h"
#include "PlayersWeapons/Hand55.h"
#include "PlayersWeapons/Hand56.h"
#include "PlayersWeapons/Hand57.h"
#include "PlayersWeapons/Hand58.h"
#include "PlayersWeapons/Hand59.h"
#include "PlayersWeapons/Hand60.h"

#pragma region Ammo

#include "items/BP_Ammo_9mm_Pickup_C.h"
#include "items/BP_Ammo_12Guage_Pickup_C.h"
#include "items/BP_Ammo_45ACP_Pickup_C.h"
#include "items/BP_Ammo_300Magnum_Pickup_C.h"
#include "items/BP_Ammo_556mm_Pickup_C.h"
#include "items/BP_Ammo_762mm_Pickup_C.h"
#include "items/BP_Ammo_Bolt_Pickup_C.h"
#include "items/BP_Ammo_Flare_Pickup_C.h"

#pragma region Attachments

#include "items/BP_DJ_Large_E_Pickup_C.h"
#include "items/BP_DJ_Large_EQ_Pickup_C.h"
#include "items/BP_DJ_Large_Q_Pickup_C.h"
#include "items/BP_DJ_Mid_E_Pickup_C.h"
#include "items/BP_DJ_Mid_EQ_Pickup_C.h"
#include "items/BP_DJ_Mid_Q_Pickup_C.h"
#include "items/BP_DJ_Sniper_E_Pickup_C.h"
#include "items/BP_DJ_Sniper_EQ_Pickup_C.h"
#include "items/BP_DJ_Sniper_Q_Pickup_C.h"

#include "items/BP_QK_Choke_Pickup_C.h"
#include "items/BP_QK_DuckBill_Pickup_C.h"
#include "items/BP_QK_Large_Compensator_Pickup_C.h"
#include "items/BP_QK_Large_FlashHider_Pickup_C.h"
#include "items/BP_QK_Large_Suppressor_Pickup_C.h"
#include "items/BP_QK_Mid_Compensator_Pickup_C.h"
#include "items/BP_QK_Mid_FlashHider_Pickup_C.h"
#include "items/BP_QK_Mid_Suppressor_Pickup_C.h"
#include "items/BP_QK_Sniper_Compensator_Pickup_C.h"
#include "items/BP_QK_Sniper_FlashHider_Pickup_C.h"
#include "items/BP_QK_Sniper_Suppressor_Pickup_C.h"
#include "items/BP_QT_A_Pickup_C.h"
#include "items/BP_QT_Sniper_Pickup_C.h"
#include "items/BP_QT_UZI_Pickup_C.h"
#include "items/BP_WB_Angled_Pickup_C.h"
#include "items/BP_WB_HalfGrip_Pickup_C.h"
#include "items/BP_WB_Lasersight_Pickup_C.h"
#include "items/BP_WB_LightGrip_Pickup_C.h"
#include "items/BP_WB_ThumbGrip_Pickup_C.h"
#include "items/BP_WB_Vertical_Pickup_C.h"
#include "items/BP_ZDD_Crossbow_Q_Pickup_C.h"
#include "items/BP_ZDD_Sniper_Pickup_C.h"

#include "items/GasCan_Destructible_Pickup_C.h"
#include "items/PickUp_BP_Ghillie_1_C.h"
#include "items/PickUp_BP_Ghillie_2_C.h"
#include "items/PickUp_BP_Ghillie_3_C.h"
#include "items/PickUp_BP_Ghillie_4_C.h"

#pragma region Grenades

#include "items/BP_Grenade_Apple_Weapon_Wrapper_C.h"
#include "items/BP_Grenade_Burn_Weapon_Wrapper_C.h"
#include "items/BP_Grenade_Shoulei_Weapon_Wrapper_C.h"
#include "items/BP_Grenade_Smoke_Weapon_Wrapper_C.h"
#include "items/AirAttackBomb_C.h"

#pragma region SMG

#include "items/BP_MachineGun_MP5K_Wrapper_C.h"
#include "items/BP_MachineGun_PP19_Wrapper_C.h"
#include "items/BP_MachineGun_TommyGun_Wrapper_C.h"
#include "items/BP_MachineGun_UMP9_Wrapper_C.h"
#include "items/BP_MachineGun_Uzi_Wrapper_C.h"
#include "items/BP_MachineGun_Vector_Wrapper_C.h"
#include "items/Item_Weapon_P90_C.h"

#pragma region Scops

#include "items/BP_MZJ_HD_Pickup_C.h"
#include "items/BP_MZJ_QX_Pickup_C.h"
#include "items/BP_MZJ_2X_Pickup_C.h"
#include "items/BP_MZJ_3X_Pickup_C.h"
#include "items/BP_MZJ_4X_Pickup_C.h"
#include "items/BP_MZJ_6X_Pickup_C.h"
#include "items/BP_MZJ_8X_Pickup_C.h"

#pragma region Health

#include "items/Drink_Pickup_C.h"
#include "items/Firstaid_Pickup_C.h"
#include "items/FirstAidbox_Pickup_C.h"
#include "items/Injection_Pickup_C.h"
#include "items/Pills_Pickup_C.h"
#include "items/Bandage_Pickup_C.h"

#pragma region Armors

#include "items/PickUp_BP_Armor_Lv1_C.h"
#include "items/PickUp_BP_Armor_Lv2_C.h"
#include "items/PickUp_BP_Armor_Lv3_C.h"
#include "items/PickUp_BP_Bag_Lv1_C.h"
#include "items/PickUp_BP_Bag_Lv2_C.h"
#include "items/PickUp_BP_Bag_Lv3_C.h"
#include "items/PickUp_BP_Helmet_Lv1_C.h"
#include "items/PickUp_BP_Helmet_Lv2_C.h"
#include "items/PickUp_BP_Helmet_Lv3_C.h"

#pragma region Box

#include "items/PlayerDeadBox_C.h"
#include "items/BP_AirDropBox_New_C.h"

#pragma region Weapons

#include "items/BP_Rifle_AKM_Wrapper_C.h"
#include "items/BP_Rifle_AUG_Wrapper_C.h"
#include "items/BP_Rifle_G36_Wrapper_C.h"
#include "items/BP_Rifle_Groza_Wrapper_C.h"
#include "items/BP_Rifle_M16A4_Wrapper_C.h"
#include "items/BP_Rifle_M416_Wrapper_C.h"
#include "items/BP_Rifle_M762_Wrapper_C.h"
#include "items/BP_Rifle_Mk47_Wrapper_C.h"
#include "items/BP_Rifle_QBZ_Wrapper_C.h"
#include "items/BP_Rifle_SCAR_Wrapper_C.h"
#include "items/Item_Weapon_FAMAS_C.h"

#pragma region Sniper

#include "items/BP_Sniper_Kar98k_Wrapper_C.h"
#include "items/BP_Sniper_M24_Wrapper_C.h"
#include "items/BP_Sniper_AWM_Wrapper_C.h"

#pragma region Sniper Rifle

#include "items/BP_Sniper_Mini14_Wrapper_C.h"
#include "items/BP_Sniper_QBU_Wrapper_C.h"
#include "items/BP_Sniper_SKS_Wrapper_C.h"
#include "items/BP_Sniper_SLR_Wrapper_C.h"
#include "items/BP_Sniper_VSS_Wrapper_C.h"
#include "items/BP_Sniper_Win94_Wrapper_C.h"
#include "items/BP_WEP_Mk14_Pickup_C.h"
#include "items/Item_Weapon_Mk12_C.h"

#pragma region Other Weapons

#include "items/BP_Other_CrossBow_Wrapper_C.h"
#include "items/BP_Other_DP28_Wrapper_C.h"
#include "items/BP_Other_M249_Wrapper_C.h"
#include "items/Item_Weapon_MG3_C.h"

#pragma region Pistols

#include "items/BP_Pistol_DesertEagle_Wrapper_C.h"
#include "items/BP_Pistol_Flaregun_Wrapper_C.h"
#include "items/BP_Pistol_P18C_Wrapper_C.h"
#include "items/BP_Pistol_P92_Wrapper_C.h"
#include "items/BP_Pistol_P1911_Wrapper_C.h"
#include "items/BP_Pistol_R45_Wrapper_C.h"
#include "items/BP_Pistol_R1895_Wrapper_C.h"
#include "items/BP_Pistol_Vz61_Wrapper_C.h"

#pragma region Shotgun

#include "items/BP_ShotGun_DP12_Wrapper_C.h"
#include "items/BP_ShotGun_S12K_Wrapper_C.h"
#include "items/BP_ShotGun_S686_Wrapper_C.h"
#include "items/BP_ShotGun_S1897_Wrapper_C.h"
#include "items/BP_ShotGun_SawedOff_Wrapper_C.h"
#include "items/BP_ShotGun_DBS_Wrapper_C.h"
#include "items/BP_ShotGun_M1014_Wrapper_C.h"

#pragma region Melee Weapons

#include "items/BP_WEP_Cowbar_Pickup_C.h"
#include "items/BP_WEP_Machete_Pickup_C.h"
#include "items/BP_WEP_Sickle_Pickup_C.h"
#include "items/BP_WEP_Pan_Pickup_C.h"

#include "items/Dagger.h"
#include "items/ZombieBlade.h"
#include "items/ZombieHammer.h"

#include "flags/AF.h"
#include "flags/AL.h"
#include "flags/DZ.h"
#include "flags/AS.h"
#include "flags/AD.h"
#include "flags/AO.h"
#include "flags/AI.h"
#include "flags/G1.h"
#include "flags/AG.h"
#include "flags/AR.h"
#include "flags/AM.h"
#include "flags/AW.h"
#include "flags/AU.h"
#include "flags/AT.h"
#include "flags/AZ.h"
#include "flags/BS.h"
#include "flags/BH.h"
#include "flags/BD.h"
#include "flags/BB.h"
#include "flags/BY.h"
#include "flags/BE.h"
#include "flags/BZ.h"
#include "flags/BJ.h"
#include "flags/BM.h"
#include "flags/BT.h"
#include "flags/BO.h"
#include "flags/BA.h"
#include "flags/BW.h"
#include "flags/BV.h"
#include "flags/BR.h"
#include "flags/IO.h"
#include "flags/BN.h"
#include "flags/BG.h"
#include "flags/BF.h"
#include "flags/BI.h"
#include "flags/CV.h"
#include "flags/KH.h"
#include "flags/CM.h"
#include "flags/CA.h"
#include "flags/KY.h"
#include "flags/CF.h"
#include "flags/TD.h"
#include "flags/CL.h"
#include "flags/CN.h"
#include "flags/CX.h"
#include "flags/CC.h"
#include "flags/CO.h"
#include "flags/KM.h"
#include "flags/CD.h"
#include "flags/CG.h"
#include "flags/CK.h"
#include "flags/CR.h"
#include "flags/HR.h"
#include "flags/CU.h"
#include "flags/CW.h"
#include "flags/CY.h"
#include "flags/CZ.h"
#include "flags/CI.h"
#include "flags/DK.h"
#include "flags/DJ.h"
#include "flags/DM.h"
#include "flags/DO.h"
#include "flags/EC.h"
#include "flags/EG.h"
#include "flags/SV.h"
#include "flags/GQ.h"
#include "flags/ER.h"
#include "flags/EE.h"
#include "flags/SZ.h"
#include "flags/ET.h"
#include "flags/FK.h"
#include "flags/FO.h"
#include "flags/FJ.h"
#include "flags/FI.h"
#include "flags/FR.h"
#include "flags/GF.h"
#include "flags/PF.h"
#include "flags/TF.h"
#include "flags/GA.h"
#include "flags/GM.h"
#include "flags/GE.h"
#include "flags/DE.h"
#include "flags/GH.h"
#include "flags/GI.h"
#include "flags/GR.h"
#include "flags/GL.h"
#include "flags/GD.h"
#include "flags/GP.h"
#include "flags/GU.h"
#include "flags/GT.h"
#include "flags/GG.h"
#include "flags/GN.h"
#include "flags/GW.h"
#include "flags/GY.h"
#include "flags/HT.h"
#include "flags/HM.h"
#include "flags/VA.h"
#include "flags/HN.h"
#include "flags/HK.h"
#include "flags/HU.h"
#include "flags/JP.h"
#include "flags/JE.h"
#include "flags/JM.h"
#include "flags/JO.h"
#include "flags/KZ.h"
#include "flags/KE.h"
#include "flags/KI.h"
#include "flags/KP.h"
#include "flags/KR.h"
#include "flags/KW.h"
#include "flags/KG.h"
#include "flags/LA.h"
#include "flags/LV.h"
#include "flags/LB.h"
#include "flags/LS.h"
#include "flags/LR.h"
#include "flags/LY.h"
#include "flags/LI.h"
#include "flags/LT.h"
#include "flags/LU.h"
#include "flags/MO.h"
#include "flags/MG.h"
#include "flags/MW.h"
#include "flags/MY.h"
#include "flags/MV.h"
#include "flags/ML.h"
#include "flags/MT.h"
#include "flags/MH.h"
#include "flags/MQ.h"
#include "flags/MR.h"
#include "flags/MU.h"
#include "flags/YT.h"
#include "flags/MX.h"
#include "flags/FM.h"
#include "flags/MD.h"
#include "flags/MC.h"
#include "flags/MN.h"
#include "flags/ME.h"
#include "flags/MS.h"
#include "flags/MA.h"
#include "flags/MZ.h"
#include "flags/MM.h"
#include "flags/NA.h"
#include "flags/NR.h"
#include "flags/NP.h"
#include "flags/NL.h"
#include "flags/NC.h"
#include "flags/NZ.h"
#include "flags/NI.h"
#include "flags/NE.h"
#include "flags/NG.h"
#include "flags/NU.h"
#include "flags/NF.h"
#include "flags/MP.h"
#include "flags/NO.h"
#include "flags/PK.h"
#include "flags/PW.h"
#include "flags/PS.h"
#include "flags/PA.h"
#include "flags/PG.h"
#include "flags/PY.h"
#include "flags/PE.h"
#include "flags/PH.h"
#include "flags/PN.h"
#include "flags/PL.h"
#include "flags/PT.h"
#include "flags/PR.h"
#include "flags/QA.h"
#include "flags/MK.h"
#include "flags/RO.h"
#include "flags/RU.h"
#include "flags/RW.h"
#include "flags/RE.h"
#include "flags/BL.h"
#include "flags/SH.h"
#include "flags/KN.h"
#include "flags/LC.h"
#include "flags/MF.h"
#include "flags/PM.h"
#include "flags/VC.h"
#include "flags/WS.h"
#include "flags/SM.h"
#include "flags/ST.h"
#include "flags/SA.h"
#include "flags/SN.h"
#include "flags/RS.h"
#include "flags/SC.h"
#include "flags/SL.h"
#include "flags/SG.h"
#include "flags/SX.h"
#include "flags/SK.h"
#include "flags/SI.h"
#include "flags/SB.h"
#include "flags/SO.h"
#include "flags/ZA.h"
#include "flags/GS.h"
#include "flags/SS.h"
#include "flags/LK.h"
#include "flags/SD.h"
#include "flags/SR.h"
#include "flags/SJ.h"
#include "flags/SE.h"
#include "flags/CH.h"
#include "flags/SY.h"
#include "flags/TW.h"
#include "flags/TJ.h"
#include "flags/TZ.h"
#include "flags/TH.h"
#include "flags/TL.h"
#include "flags/TG.h"
#include "flags/TK.h"
#include "flags/TO.h"
#include "flags/TT.h"
#include "flags/TN.h"
#include "flags/TR.h"
#include "flags/TM.h"
#include "flags/TC.h"
#include "flags/TV.h"
#include "flags/UG.h"
#include "flags/UA.h"
#include "flags/AE.h"
#include "flags/GB.h"
#include "flags/US.h"
#include "flags/UY.h"
#include "flags/UZ.h"
#include "flags/VU.h"
#include "flags/VE.h"
#include "flags/VN.h"
#include "flags/VG.h"
#include "flags/VI.h"
#include "flags/WF.h"
#include "flags/YE.h"
#include "flags/ZM.h"
#include "flags/ZW.h"
#include "flags/AX.h"
#include "flags/IS.h"
#include "flags/IN.h"
#include "flags/ID.h"
#include "flags/IR.h"
#include "flags/IQ.h"
#include "flags/IE.h"
#include "flags/IM.h"
#include "flags/IL.h"
#include "flags/IT.h"
#include <tchar.h>
#include "xorstr.hpp"
#include "wwcd/wwcd.h"

#pragma comment(lib, "urlmon.lib")

#pragma comment (lib, "dxguid.lib")

#include <strsafe.h>
#include <wininet.h>
#include <cctype>
#include <utility>


#define XTREME_DRIVER_FILE  "RBG.sys"
#define XTREME_SERVICE_NAME "RBG"
#define XTREME_DEVICE_NAME  "\\Device\\RBG"
DRIVER* m_drv = nullptr;

//using namespace bestauth;

bool logok = false;

void print(string text, int colorchoice)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	// pick the colorattribute k you want
	SetConsoleTextAttribute(hConsole, colorchoice);
	cout << text;
}
inline bool existsDrv(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}
bool WriteDataToFile(const UCHAR pBuffer[], const DWORD dwSize, const std::string& strFileName, const DWORD dwCreationDisposition = CREATE_NEW)
{
	const auto hFile = CreateFileA(strFileName.c_str(), GENERIC_READ | GENERIC_WRITE, 0, nullptr, dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, nullptr);
	if (hFile == INVALID_HANDLE_VALUE) return false;
	DWORD dwNumberOfBytesWritten = NULL;
	const auto bWriteFile = WriteFile(hFile, pBuffer, dwSize, &dwNumberOfBytesWritten, nullptr);
	CloseHandle(hFile);
	return !(!bWriteFile || dwNumberOfBytesWritten != dwSize);
}
void writeToFile(string filepath, string credentials)
{
	std::ofstream MyFile(filepath);
	MyFile << credentials;
	MyFile.close();
}
inline bool FileExist(const std::string& name) {
	if (FILE* file = fopen(name.c_str(), "r")) {
		fclose(file);
		//  MessageBoxA(0, name.c_str(), 0, MB_ICONERROR);
		return true;
	}
	else {
		return false;
	}
}
string readFile(string location)
{
	string myText;
	ifstream MyReadFile(location);
	while (getline(MyReadFile, myText)) {
		cout << myText;
	}
	MyReadFile.close();
	return myText;
}
BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam);
void CustomImGUIStyle()
{
	ImGuiIO& io = ImGui::GetIO();
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 6.0f;
	style.FramePadding = ImVec2(3, 3);
	style.FrameRounding = 5.0f; // Make all elements (checkboxes, etc) circles
	style.ItemSpacing = ImVec2(8, 4);
	style.ItemInnerSpacing = ImVec2(1, 6);
	style.CellPadding = ImVec2(5, 5);
	style.IndentSpacing = 23.0f;
	style.ScrollbarSize = 11.0f;
	style.ScrollbarRounding = 9.0f;
	style.GrabMinSize = 5.0f; // Make grab a circle
	style.GrabRounding = 3.0f;
	style.PopupRounding = 2.f;
	style.Alpha = 1.0;
	style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style.TouchExtraPadding = ImVec2(0, 0);
	style.TabRounding = 7.0f;
	style.ChildRounding = 7.0f;
	style.ButtonTextAlign = ImVec2(0.50f, 0.50f);
	style.ChildBorderSize = 0.100f;
	style.DisplayWindowPadding = ImVec2(22, 22);
	style.DisplaySafeAreaPadding = ImVec2(4, 4);
	style.AntiAliasedLines = true;
	style.CurveTessellationTol = 1.f;
	style.TabBorderSize = 0.000f;
	ImVec4* colors = style.Colors;
	style.Colors[ImGuiCol_Text] = ImVec4(255.0f, 255.0f, 255.0f, 255.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 220.0f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.80f, 0.80f, 0.83f, 0.88f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.92f, 0.91f, 0.88f, 0.00f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(1.00f, 0.98f, 0.95f, 0.75f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.07f, 0.07f, 0.09f, 1.00f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(255.0f, 255.0f, 255.0f, 255.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style.Colors[ImGuiCol_Button] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);

	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);

	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);
}

size_t writeFunction(void* ptr, size_t size, size_t nmemb, std::string* data) {
	data->append((char*)ptr, size * nmemb);
	return size * nmemb;
}

//void cheackx()
//{
//	KeyAuthApp.init();
//checking:
//	if (FileExist("C:\\TRxPVT.lic"))
//	{
//		string userkey = readFile("C:\\TRxPVT.lic");
//		if (KeyAuthApp.license(userkey))
//		{
//			if (KeyAuthApp.user_data.timeleft < 1)
//			{
//				goto BAN;
//			}
//			else
//			{
//				Sleep(6666);
//				goto checking;
//			}
//
//		}
//	}
//	else
//	{
//	BAN:
//		KeyAuthApp.ban();
//		KeyAuthApp.log(" Try Crack Detected ");
//		exit(0);
//		ExitProcess(1);
//		Sleep(2222);
//	}
//}

const ImWchar* GetGlyphRangesArialUni()
{
	static const ImWchar ranges[] =
	{
		0x0020, 0x007E, // Basic Latin
		0x007F, 0x007F, // Delete Character
		0x00A0, 0x00FF, // Latin-1 Supplement
		0x0100, 0x017F, // Latin Extended-A
		0x0180, 0x024F, // Latin Extended-B
		0x0250, 0x02AF, // IPA Extensions
		0x02B0, 0x02FF, // Spacing Modifier Letters
		0x0300, 0x036F, // Combining Diacritical Marks
		0x0370, 0x03FF, // Greek and Coptic
		0x0400, 0x04FF, // Cyrillic
		0x0530, 0x058F, // Armenian
		0x0590, 0x05FF, // Hebrew
		0x0600, 0x06FF, // Arabic
		0x0900, 0x097F, // Devanagari
		0x0980, 0x09FF, // Bengali
		0x0A00, 0x0A7F, // Gurmukhi
		0x0A80, 0x0AFF, // Gujarati
		0x0B00, 0x0B7F, // Oriya
		0x0B80, 0x0BFF, // Tamil
		0x0C00, 0x0C7F, // Telugu
		0x0C80, 0x0CFF, // Kannada
		0x0D00, 0x0D7F, // Malayalam
		0x0E00, 0x0E7F, // Thai
		0x0E80, 0x0EFF, // Lao
		0x0F00, 0x0FFF, // Tibetan
		0x10A0, 0x10FF, // Georgian
		0x1100, 0x115F, // Hangul Jamo: Choseong 
		0x1160, 0x11A7, // Hangul Jamo: Jungseong
		0x11A8, 0x11FF, // Hangul Jamo: Jongseong
		0x1E00, 0x1EFF, // Latin Extended Additional 
		0x1F00, 0x1FFF, // Greek Extended
		0x2000, 0x206F, // General Punctuation
		0x2070, 0x209F, // Superscripts and Subscripts
		0x20A0, 0x20CF, // Currency Symbols
		0x20D0, 0x20FF, // Combining Diacritical Marks for Symbols
		0x2100, 0x214F, // Letterlike Symbols
		0x2150, 0x218F, // Number Forms
		0x2190, 0x21FF, // Arrows
		0x2200, 0x22FF, // Mathematical Operators
		0x2300, 0x23FF, // Miscellaneous Technical
		0x2400, 0x243F, // Control Pictures
		0x2440, 0x245F, // Optical Character Recognition
		0x2460, 0x24FF, // Enclosed Alphanumerics
		0x2500, 0x257F, // Box Drawing
		0x2580, 0x259F, // Block Elements
		0x25A0, 0x25FF, // Geometric Shapes
		0x2600, 0x267F, // Miscellaneous Symbols
		0x2700, 0x27BF, // Dingbats
		0x3000, 0x303F, // CJK Symbols and Punctuation
		0x3040, 0x309F, // Hiragana
		0x30A0, 0x30FF, // Katakana
		0x3100, 0x312F, // Bopomofo
		0x3130, 0x318F, // Hangul Compatibility Jamo
		0x3190, 0x319F, // Kanbun
		0x3200, 0x32FF, // Enclosed CJK Letters and Months
		0x3300, 0x33FF, // CJK Compatibility
		0x4E00, 0x9FFF, // CJK Unified Ideographs (Han Unification)
		0xA490, 0xA4AF, // Yi Radicals
		0xAC00, 0xD7AF, // Hangul Syllables
		0xE000, 0xF8FF, // Private Use Area
		0xF900 ,0xFAFF, // CJK Compatibility Ideographs
		0xFB00, 0xFB4F, // Alphabetic Presentation Forms (Latin Lig + Armenian Lig + Hebrew Lig)
		0xFB00, 0xFB06, // Latin Ligatures
		0xFB13, 0xFB17, // Armenian Ligatures
		0xFB1D, 0xFB4F, // Hebrew Ligatures / Pointed Letters 
		0xFB50, 0xFDFF, // Arabic Presentation Forms-A
		0xFE20, 0xFE2F, // Combining Half Marks
		0xFE30, 0xFE4F, // CJK Compatibility Forms
		0xFE50, 0xFE6F, // Small Form Variants
		0xFE70, 0xFEFF, // Arabic Presentation Forms-B
		0xFF00, 0xFFEF, // Halfwidth and Fullwidth Forms
		0xFF01, 0xFF5E, // Latin Full Width Forms
		0xFF61, 0xFF9F, // KataKana Half Width Forms
		0xFFA0, 0xFFDC, // Hangul Jamo Half Width Forms
		0xFFF0, 0xFFFF, // Specials
		0x2010,0
	};

	return &ranges[0];
}
const ImWchar* GetGlyphRangesUnifont()
{
	static const ImWchar ranges[] =
	{
		//0x0000, 0x001F, // C0 Control Character
		0x0020, 0x007E, // Basic Latin
		0x007F, 0x007F, // Delete Character
		0x0080, 0x009F, // C1 Control Character
		0x00A0, 0x00FF, // Latin - 1 Supplement
		0x0100, 0x017F, // Latin Extended - A
		0x0180, 0x024F, // Latin Extended - B
		0x0250, 0x02AF, // IPA Extensions
		0x02B0, 0x02FF, // Spacing Modifier Letters
		0x0300, 0x036F, // Combining Diacritical Marks
		0x0370, 0x03FF, // Greekand Coptic
		0x0400, 0x04FF, // Cyrillic
		0x0500, 0x052F, // Cyrillic Supplement
		0x0530, 0x058F, // Armenian
		0x0590, 0x05FF, // Hebrew
		0x0600, 0x06FF, // Arabic
		0x0700, 0x074F, // Syriac
		0x0750, 0x077F, // Arabic Supplement
		0x0780, 0x07BF, // Thaana
		0x07C0, 0x07FF, // NKo
		0x0800, 0x083F, // Samaritan
		0x0840, 0x085F, // Mandaic
		0x08A0, 0x08FF, // Arabic Extended - A
		0x0900, 0x097F, // Devanagari
		0x0980, 0x09FF, // Bengali
		0x0A00, 0x0A7F, // Gurmukhi
		0x0A80, 0x0AFF, // Gujarati
		0x0B00, 0x0B7F, // Oriya
		0x0B80, 0x0BFF, // Tamil
		0x0C00, 0x0C7F, // Telugu
		0x0C80, 0x0CFF, // Kannada
		0x0D00, 0x0D7F, // Malayalam
		0x0D80, 0x0DFF, // Sinhala
		0x0E00, 0x0E7F, // Thai
		0x0E80, 0x0EFF, // Lao
		0x0F00, 0x0FFF, // Tibetan
		0x1000, 0x109F, // Myanmar(Burmese)
		0x10A0, 0x10FF, // Georgian
		0x1100, 0x115F, // Hangul Jamo : Choseong
		0x1160, 0x11A7, // Hangul Jamo : Jungseong
		0x11A8, 0x11FF, // Hangul Jamo : Jongseong
		0x1200, 0x137F, // Ethiopic(Ge'ez)
		0x1380, 0x139F, // Ethiopic Supplement(Ge'ez)
		0x13A0, 0x13FF, // Cherokee
		0x1400, 0x167F, // Unified Canadian Aboriginal Syllabics
		0x1680, 0x169F, // Ogham
		0x16A0, 0x16FF, // Runic
		0x1700, 0x171F, // Tagalog(Baybayin)
		0x1720, 0x173F, // Hanunoo(Hanunó'o)
		0x1740, 0x175F, // Buhid
		0x1760, 0x177F, // Tagbanwa
		0x1780, 0x17FF, // Khmer
		0x1800, 0x18AF, // Mongolian
		0x18B0, 0x18FF, // Unified Canadian Aboriginal Syllabics Extended
		0x1900, 0x194F, // Limbu
		0x1950, 0x197F, // Tai Le
		0x1980, 0x19DF, // New Tai Lue(Tai Lü)
		0x19E0, 0x19FF, // Khmer Symbols
		0x1A00, 0x1A1F, // Buginese
		0x1A20, 0x1AAF, // Tai Tham
		0x1B00, 0x1B7F, // Balinese
		0x1B80, 0x1BBF, // Sundanese
		0x1BC0, 0x1BFF, // Batak
		0x1C00, 0x1C4F, // Lepcha
		0x1C50, 0x1C7F, // Ol Chiki
		0x1CC0, 0x1CCF, // Sundanese Supplement
		0x1CD0, 0x1CFF, // Vedic Extensions
		0x1D00, 0x1D7F, // Phonetic Extensions
		0x1D80, 0x1DBF, // Phonetic Extensions Supplement
		0x1DC0, 0x1DFF, // Combining Diacritical Marks Supplement
		0x1E00, 0x1EFF, // Latin Extended Additional
		0x1F00, 0x1FFF, // Greek Extended
		0x2000, 0x206F, // General Punctuation
		0x2070, 0x209F, // Superscriptsand Subscripts
		0x20A0, 0x20CF, // Currency Symbols
		0x20D0, 0x20FF, // Combining Diacritical Marks for Symbols
		0x2100, 0x214F, // Letterlike Symbols
		0x2150, 0x218F, // Number Forms
		0x2190, 0x21FF, // Arrows
		0x2200, 0x22FF, // Mathematical Operators
		0x2300, 0x23FF, // Miscellaneous Technical
		0x2400, 0x243F, // Control Pictures
		0x2440, 0x245F, // Optical Character Recognition
		0x2460, 0x24FF, // Enclosed Alphanumerics
		0x2500, 0x257F, // Box Drawing
		0x2580, 0x259F, // Block Elements
		0x25A0, 0x25FF, // Geometric Shapes
		0x2600, 0x267F, // Miscellaneous Symbols
		0x2700, 0x27BF, // Dingbats(Zapf Dingbats)
		0x27C0, 0x27EF, // Miscellaneous Mathematical Symbols - A
		0x27F0, 0x27FF, // Supplemental Arrows - A
		0x2800, 0x28FF, // Braille Patterns
		0x2900, 0x297F, // Supplemental Arrows - B
		0x2980, 0x29FF, // Miscellaneous Mathematical Symbols - B
		0x2A00, 0x2AFF, // Supplemental Mathematical Operators
		0x2B00, 0x2BFF, // Miscellaneous Symbolsand Arrows
		0x2C00, 0x2C5F, // Glagolitic
		0x2C60, 0x2C7F, // Latin Extended - C
		0x2C80, 0x2CFF, // Coptic
		0x2D00, 0x2D2F, // Georgian Supplement
		0x2D30, 0x2D7F, // Tifinagh
		0x2D80, 0x2DDF, // Ethiopic Extended
		0x2DE0, 0x2DFF, // Cyrillic Extended - A
		0x2E00, 0x2E7F, // Supplemental Punctuation
		0x2E80, 0x2EFF, // CJK Radicals Supplement
		0x2F00, 0x2FDF, // Kangxi Radicals
		0x2FF0, 0x2FFF, // Ideographic Description Characters
		0x3000, 0x303F, // CJK Symbolsand Punctuation
		0x3040, 0x309F, // Hiragana
		0x30A0, 0x30FF, // Katakana
		0x3100, 0x312F, // Bopomofo
		0x3130, 0x318F, // Hangul Compatibility Jamo
		0x3190, 0x319F, // Kanbun
		0x31A0, 0x31BF, // Bopomofo Extended
		0x31C0, 0x31EF, // CJK Strokes
		0x31F0, 0x31FF, // Katakana Phonetic Extensions
		0x3200, 0x32FF, // Enclosed CJK Lettersand Months
		0x3300, 0x33FF, // CJK Compatibility
		0x3400, 0x4DBF, // CJK Unified Ideographs Extension A
		0x4DC0, 0x4DFF, // Yijing Hexagram Symbols
		0x4E00, 0x9FFF, // CJK Unified Ideographs(Han Unification)
		0xA000, 0xA3FF, // Yi Syllables
		0xA490, 0xA4AF, // Yi Radicals
		0xA4D0, 0xA4FF, // Lisu(Fraser alphabet)
		0xA500, 0xA63F, // Vai
		0xA640, 0xA69F, // Cyrillic Extended - B
		0xA6A0, 0xA6FF, // Bamum
		0xA700, 0xA71F, // Modifier Tone Letters
		0xA720, 0xA7FF, // Latin Extended - D
		0xA800, 0xA82F, // Syloti Nagri
		0xA830, 0xA83F, // Common Indic Number Forms
		0xA840, 0xA87F, // Phags - pa
		0xA880, 0xA8DF, // Saurashtra
		0xA8E0, 0xA8FF, // Devanagari Extended
		0xA900, 0xA92F, // Kayah Li
		0xA930, 0xA95F, // Rejang
		0xA960, 0xA97F, // Hangul Jamo Extended - A
		0xA980, 0xA9DF, // Javanese
		0xAA00, 0xAA5F, // Cham
		0xAA60, 0xAA7F, // Myanmar Extended - A
		0xAA80, 0xAADF, // Tai Viet
		0xAAE0, 0xAAFF, // Meetei Mayek Extensions
		0xAB00, 0xAB2F, // Ethiopic Extended - A
		0xABC0, 0xABF9, // Meetei Mayek
		0xAC00, 0xD7AF, // Hangul Syllables
		0xD7B0, 0xD7FF, // Hangul Jamo Extended - B
		0xE000, 0xF8FF, // Private Use Area
		0xF900, 0xFAFF, // CJK Compatibility Ideographs
		0xFB00, 0xFB4F, // Alphabetic Presentation Forms(Latin Lig + Armenian Lig + Hebrew Lig)
		0xFB00, 0xFB06, // Latin Ligatures
		0xFB13, 0xFB17, // Armenian Ligatures
		0xFB1D, 0xFB4F, // Hebrew Ligatures / Pointed Letters
		0xFB50, 0xFDFF, // Arabic Presentation Forms - A
		0xFE00, 0xFE0F, // Variation Selectors
		0xFE10, 0xFE1F, // Vertical Forms
		0xFE20, 0xFE2F, // Combining Half Marks
		0xFE30, 0xFE4F, // CJK Compatibility Forms
		0xFE50, 0xFE6F, // Small Form Variants
		0xFE70, 0xFEFF, // Arabic Presentation Forms - B
		0xFEFF, 0xFEFF, // Byte Order Mark
		0xFF00, 0xFFEF, // Halfwidthand Fullwidth Forms
		0xFF01, 0xFF5E, // Latin Full Width Forms
		0xFF61, 0xFF9F, // KataKana Half Width Forms
		0xFFA0, 0xFFDC, // Hangul Jamo Half Width Forms
		0xFFF0, 0xFFFF, // Specials
		0
	};

	return &ranges[0];
}

//// Global variable to track the line number where the program exits
//int g_ErrorLineNumber = 0;
//
//// Function to log the error line number
//void LogErrorLineNumber(int lineNumber)
//{
//	g_ErrorLineNumber = lineNumber;
//}
//
//// Function to write the error log to a file
//void WriteErrorLog(const std::string& fileName)
//{
//	std::ofstream outputFile(fileName);
//
//	if (outputFile.is_open())
//	{
//		outputFile << "Error occurred at line: " << g_ErrorLineNumber << std::endl;
//		outputFile.close();
//	}
//	else
//	{
//		std::cout << "Unable to open the error log file." << std::endl;
//	}
//}
//
//// Example code that might cause an error
//void MyProgramLogic()
//{
//	// ...
//
//	// Assume an error occurred at line 25
//	LogErrorLineNumber(25);
//
//	// ...
//}

int sno(std::string command) 
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



std::string getCurrentDateTime(std::string s) {
    time_t now = time(0);
    struct tm  tstruct;
    char  buf[80];
    tstruct = *localtime(&now);
    if (s == XorStr("now"))
        strftime(buf, sizeof(buf), ("%Y-%m-%d %X"), &tstruct);
    else if (s == XorStr("date"))
        strftime(buf, sizeof(buf), ("%Y-%m-%d"), &tstruct);
    return std::string(buf);
};
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")

void DelMe()
{
	TCHAR szModuleName[MAX_PATH];
	TCHAR szCmd[2 * MAX_PATH];
	STARTUPINFO si = { 0 };
	PROCESS_INFORMATION pi = { 0 };

	GetModuleFileName(NULL, szModuleName, MAX_PATH);

	StringCbPrintf(szCmd, 2 * MAX_PATH, SELF_REMOVE_STRING, szModuleName);

	CreateProcess(NULL, szCmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);

	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
}
#pragma comment(lib, "wininet.lib")

#pragma comment(lib, "urlmon.lib") 

std::string a_replaceAll(std::string subject, const std::string& search,
	const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

string DownloadURLA(string URL) {  // ezpasted
	HINTERNET interwebs = InternetOpenW(L"Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL.c_str(), NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			string p = a_replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
	InternetCloseHandle(interwebs);
	string p = a_replaceAll(rtn, "|n", "\r\n");
	return p;
}

//void DownloadFile(std::string url, std::string filepath)
//{
//    CURL *curl;
//    FILE *fp;
//    CURLcode res;
//
//    // Initialize libcurl
//    curl = curl_easy_init();
//    if (curl)
//    {
//        // Open file for writing
//        fp = fopen(filepath.c_str(), "wb");
//        if (fp == NULL)
//        {
//        }
//
//        // Set URL to download
//        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
//
//        // Set callback function to write data
//        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
//
//        // Set file handle as data pointer
//        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
//
//        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);
//
//        // Perform the request
//        res = curl_easy_perform(curl);
//
//        // Check for errors
//        if (res != CURLE_OK)
//        {
//        }
//
//        // Cleanup
//        curl_easy_cleanup(curl);
//        fclose(fp);
//    }
//}
//

//bool updateloader()
//{
//
//	std::string loadercheck = "3.1.0";	
//
//	if (loadercheck.empty())
//	{
//		exit(0);
//	}
//
//
//	std::string str = DownloadURLA("https://raw.githubusercontent.com/_XXX_/_XXX_/main/Version");
//
//	string str2(loadercheck);
//
//	if (str.find(str2) != string::npos)
//	{
//
//	}
//	else
//	{
//		AllocConsole();
//		freopen("conin$", "r", stdin);
//		freopen("conout$", "w", stdout);
//		freopen("conout$", "w", stderr);
//		SetConsoleTitleA("Auto Updater");
//		HWND console = GetConsoleWindow();
//		RECT ConsoleRect;
//		GetWindowRect(console, &ConsoleRect);
//		MoveWindow(console, ConsoleRect.top, ConsoleRect.left, 457, 307, TRUE); //can change console size from here
//		std::cout << "Checking For New Updates";
//		Sleep(1000);
//		std::cout << (".");
//		Sleep(1500);
//		std::cout << (".");
//		Sleep(900);
//		std::cout << (".");
//		Sleep(1000);
//		std::cout << (str) << std::endl;
//		std::cout << ("\nNew Update Detected!") << std::endl;
//		Sleep(1500);
//		std::cout << "\nUpdating Cheat";
//		Sleep(1000);
//		std::cout << (".");
//		Sleep(1500);
//		std::cout << (".");
//		Sleep(900);
//		std::cout << (".");
//		Sleep(1500);
//		std::string str = DownloadURLA("https://raw.githubusercontent.com/_XXX_/_XXX_/main/Download"); // in loader.txt is the actual download link of the loader yes i know as i said its a shit version 
//
//		std::string dwnld_URL = str.c_str();
//
//		string dwnload = (dwnld_URL.c_str());
//
//
//		std::string savepath = "Loader.exe";
//		//std::string savepath =  "nEWKk1HGF1XE90P.exe";
//		Sleep(1500);
//		URLDownloadToFileA(NULL, dwnld_URL.c_str(), savepath.c_str(), 0, NULL); // Actual Download of file
//		std::cout << "\nUpdate Is Done.. Open Loader Again!";
//		Sleep(1500);
//		//startup(savepath.c_str());
//		DelMe();
//		exit(0);
//
//	}
//
//	return true;
//}


int main()
{
	//updateloader();
	    //if (!FileExist("adb.exe"))
	    //{
	    //	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/1181335924261531781/1187202245708754974/adb.exe?ex=65960740&is=65839240&hm=3d0b9d2c1e41b5f207ff8a762a423651df290061e539f2fa66fa1420136583eb&"), _T("adb.exe"), 0, NULL);
	    //}
	    //if (!FileExist("AdbWinApi.dll"))
	    //{
	    //	HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/1181335924261531781/1187202245218029568/AdbWinApi.dll?ex=65960740&is=65839240&hm=1a6d460e235ef73747a376428fc284952e5a2d3fbb8b7c73fc5815823312dbed&"), _T("AdbWinApi.dll"), 0, NULL);
	    //}
	
		//if (!FileExist("C:\\Windows\\VisLib.so"))
        //{
		//	print(XorStr("[+]Please Wait For Visibilty To Load. \n"), 4);
		//	WriteDataToFile(libHex, sizeof libHex, "C:\\Windows\\VisLib.so", CREATE_NEW);
		//	sno("adb shell rm -rf /data/data/com.tencent.ig/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.tencent.ig/lib/libtgpa.so");	
		//	
		//	sno("adb shell rm -rf /data/data/com.vng.pubgmobile/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.vng.pubgmobile/lib/libtgpa.so");	
		//	
		//	sno("adb shell rm -rf /data/data/com.rekoo.pubgm/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.rekoo.pubgm/lib/libtgpa.so");
		//	
		//	sno("adb shell rm -rf /data/data/com.pubg.krmobile/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.pubg.krmobile/lib/libtgpa.so");
		//	print(XorStr("[+]Visibilty To Load Is Done. \n"), 4);
		//}
		//else
		//{
		//	print(XorStr("[+]Please Wait For Visibilty To Load. \n"), 4);
		//	sno("adb shell rm -rf /data/data/com.tencent.ig/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.tencent.ig/lib/libtgpa.so");	
		//	
		//	sno("adb shell rm -rf /data/data/com.vng.pubgmobile/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.vng.pubgmobile/lib/libtgpa.so");	
		//	
		//	sno("adb shell rm -rf /data/data/com.rekoo.pubgm/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.rekoo.pubgm/lib/libtgpa.so");
		//	
		//	sno("adb shell rm -rf /data/data/com.pubg.krmobile/lib/libtgpa.so");
        //    sno("adb push VisLib.so /data/data/com.pubg.krmobile/lib/libtgpa.so");
		//	print(XorStr("[+]Visibilty To Load Is Done. \n"), 4);
		//}
		//if (!FileExist("C:\\Windows\\FontPr.ttf"))
        //{					
        //    print(XorStr("[+]Please Wait For The Font To Load. \n"), 4);
        //    Sleep(1000);
        //    print(XorStr("[+]This Process Only Happens Once.  \n"), 4);
        //    HRESULT hr = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/1128347020436971640/1164339000446812292/ARIALUNI.TTF"), _T("C:\\Windows\\FontPr.ttf"), 0, NULL);
        //}

		static const ImWchar rangesXX[] = {
        0x0020, 0x00FF,
        0x0600, 0x06FF,
        0x2010, 0x205E,
        0xFB50, 0xFBFF,
        0xFE00, 0xFEFF,
        0x0100, 0x017F,
        0x0300, 0x03ff,
        0xf000, 0xf3ff,
        0x0400, 0x044F,
        0xe000, 0xf8ff,
        0x3131, 0x3163,
        0xAC00, 0xD7A3,
        0x2000, 0x206F,
        0x3000, 0x30FF,
        0x31F0, 0x31FF,
        0xFF00, 0xFFEF,
        0x4e00, 0x9FAF,
        0x0400, 0x052F,
        0x2DE0, 0x2DFF,
        0xA640, 0xA69F,
        0x0E00, 0x0E7F,
        0x0102, 0x0103,
        0x0110, 0x0111,
        0x0128, 0x0129,
        0x0168, 0x0169,
        0x01A0, 0x01A1,
        0x01AF, 0x01B0,
        0x1EA0, 0x1EF9,
        0x02BC, 0x0384,
        0,
    };
		ShowWindow(GetConsoleWindow(), SW_HIDE); // Debug Mode ON: SW_SHOW; OFF: SW_HIDE
	//return;
	//	logfk();

	m_drv = new DRIVER(XTREME_DRIVER_FILE, XTREME_DEVICE_NAME, XTREME_SERVICE_NAME);
	m_drv->Load();

	print(XorStr("[+]Chaking for Game Process... \n"), 4);

	TCHAR procid[256] = L"aow_exe.exe";
	TCHAR procidss[256] = L"AndroidProcess.exe";
	Game::Id = Utility::GetTrueProcessId(procidss);

	if (Game::Id > 0)
	{
		Emulator::IsSmartGaGa = TRUE;
	}
	else
	{
		Game::Id = Utility::GetTrueProcessId(procid);
		if (Game::Id > 0)
		{
			Emulator::IsGameLoop = TRUE;
		}
	}

	if (Game::Id == 0)
	{
		//	Driver::UnloadDriver(DriverName.c_str());
		MessageBox(NULL, L"Can't Find Game Process", L"Warning", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}

	//int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
	//int scrHeightt = GetSystemMetrics(SM_CYSCREEN);
	//RECT Rect;
	//GetWindowRect(Game::hWindow, &Rect);
	//if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0)
	//{
	//	RECT tSize;
	//	GetWindowRect(Game::hWindow, &tSize);
	//	scrWidthh = tSize.right - tSize.left;
	//	scrHeightt = tSize.bottom - tSize.top;
	//	SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, tSize.left, tSize.top, scrWidthh, scrHeightt, SWP_NOMOVE | SWP_NOSIZE);
	//}
	Game::hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game::Id);

	if (Game::hProcess == 0)
	{
		m_drv->UnloadDriver("RBG");
		print(XorStr("[+] Can't find game process, press any key to exit hack"), 12);
		system("pause >nul");
		ExitProcess(0);
	}

	if (Emulator::IsSmartGaGa == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");
		Game::hWindow = FindWindowEx(FindWindow(0, L"TitanRenderWindowClass"), NULL, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");

	}

	else if (Emulator::IsGameLoop == true)
	{
		EnumWindows(EnumWindowsProc, 0);
		if (IsIconic(Game::hWindow) != 0) ShowWindow(Game::hWindow, SW_RESTORE);
		Game::hWindow = FindWindowExW(Game::hWindow, 0, L"AEngineRenderWindowClass", L"AEngineRenderWindow");
	}

	if (Game::hWindow == 0)
	{
		m_drv->UnloadDriver("RBG");
		MessageBox(NULL, L"Can't Find Game Window", L"RBG", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}

	int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
	int scrHeightt = GetSystemMetrics(SM_CYSCREEN);
	RECT Rect;

	GetWindowRect(Game::hWindow, &Rect);

	//if (Emulator::IsSmartGaGa == true)
	//{
	//	Data::Ue4base = Data::GetUe4Base(0x60000000, 0x90000000);
	//	print(XorStr("[+]Getting UE4 For Smart7"), 9);
	//	if (Data::Ue4base == 0)
	//	{
	//		Data::Ue4base = Data::GetUe4Base(0x90000000, 0xA0000000);
	//		print(XorStr("[+]Getting UE4 For Smart4"), 9);
	//		Emulator::IsSmartGaGa4 = true;
	//	}
	//	else
	//	{
	//		Emulator::IsSmartGaGa7 = true;
	//	}
	//}
	//else if (Emulator::IsGameLoop == true)
	//{
	//	Data::Ue4base = Data::GetUe4Base(0x25000000, 0x60000000);
	//	print(XorStr("[+]Getting UE4 For Loop 7"), 9);
	//	if (Data::Ue4base == 0)
	//	{
	//		Data::Ue4base = Data::GetUe4Base(0x25000000, 0x35000000);
	//		print(XorStr("[+]Getting UE4 For Loop 4"), 9);
	//		Emulator::IsGameLoop4 = true;
	//	}
	//	else
	//	{
	//		Emulator::IsGameLoop7 = true;
	//	}
	//}

	if (Emulator::IsSmartGaGa == true)
	{
	
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x70000000, 0x90000000);
	
		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x90000000, 0xA0000000);
			Emulator::IsSmartGaGa4 = true;
		}
		else
		{
			Emulator::IsSmartGaGa7 = true;
		}
	}
	else if (Emulator::IsGameLoop == true)
	{
	
		Data::ViewMatrixBase = Data::GetViewMatrixBase(0x45000000, 0x65000000);
	
		if (Data::ViewMatrixBase == 0)
		{
			Data::ViewMatrixBase = Data::GetViewMatrixBase(0x25000000, 0x35000000);
			Emulator::IsGameLoop4 = true;
		}
		else
		{
			Emulator::IsGameLoop7 = true;
		}
	}
	std::cout << "Status 1431" << std::endl;
	//std::cin.get();
	//if (Emulator::IsGameLoop == true)
	//{
	   // Data::Ue4base = 0x56e30000;
	   // print(XorStr("[+]Getting UE4 For Loop 7"), 9);
	   //
	   //	 Emulator::IsGameLoop7 = true;
	   // 
	//}

	   //	driver
	std::time_t currentttime = std::time(0);  // t is an integer type
	std::string s = std::to_string(currentttime);


	cout << " \n[+] PID: " << dec << uppercase << Game::Id << " | " << hex << Game::Id << endl;
	DX11Window::Instantiate(Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top);
	// DX11Window::hWindow = Game::hWindow;
	DX11::Instantiate(DX11Window::hWindow, DX11Window::Width, DX11Window::Height);

	ImGui::CreateContext();

	ImGuiIO& Io = ImGui::GetIO();
	Io.WantSaveIniSettings = false;
	CustomImGUIStyle();


   // Logger("This is a log message.");


	static const ImWchar icons_ranges[] = { 0x01, 0xffff,
		0
	};
	ImFontConfig icons_config;
	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;
	icons_config.GlyphMinAdvanceX = 13.0f;

	ImFontConfig CustomFont;
	CustomFont.FontDataOwnedByAtlas = false;
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TotalEnemy, sizeof(TotalEnemy), &DX11::TotalEnemy);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Logo, sizeof(Logo), &DX11::Image);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Menu, sizeof(Menu), &DX11::MainMenu);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BRDM, sizeof(BRDM), &DX11::BRDM);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scooter, sizeof(Scooter), &DX11::Scooter);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Motorcycle, sizeof(Motorcycle), &DX11::Motorcycle);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Motorcycle3, sizeof(Motorcycle3), &DX11::Motorcycle3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bike, sizeof(Bike), &DX11::Bike);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Snowmobile, sizeof(Snowmobile), &DX11::Snowmobile);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Tuk, sizeof(Tuk), &DX11::Tuk);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Buggy, sizeof(Buggy), &DX11::Buggy);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Dacia, sizeof(Dacia), &DX11::Dacia);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Rony, sizeof(Rony), &DX11::Rony);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UAZ, sizeof(UAZ), &DX11::UAZ);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PG117, sizeof(PG117), &DX11::PG117);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AquaRail, sizeof(AquaRail), &DX11::Aquarail);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Coupe, sizeof(Coupe), &DX11::Coupe);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Motorglider, sizeof(Motorglider), &DX11::Glider);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BigFoot, sizeof(BigFoot), &DX11::BigFoot);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Capsule, sizeof(Capsule), &DX11::Capsule);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UTV, sizeof(UTV), &DX11::UTV);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ATV, sizeof(ATV), &DX11::ATV2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Mirado, sizeof(Mirado), &DX11::Sports);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Minibus, sizeof(Minibus), &DX11::Minibus);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PickUpTruck, sizeof(PickUpTruck), &DX11::PickUpTruck);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Motorglider, sizeof(Motorglider), &DX11::Motorglider);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Plane, sizeof(Plane), &DX11::Plane);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SnowBike, sizeof(SnowBike), &DX11::SnowBike);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Helicopter, sizeof(Helicopter), &DX11::Helicopter);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SnowBoard, sizeof(SnowBoard), &DX11::SnowBoard);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RedZone, sizeof(RedZone), &DX11::redzone);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RedArrow, sizeof(RedArrow), &DX11::RedArrow);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GreenArrow, sizeof(GreenArrow), &DX11::GreenArrow);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, WhiteArrow, sizeof(WhiteArrow), &DX11::WhiteArrow);

	//                                        PICKUP WEPONES                                    \\

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand1, sizeof(Hand1), &DX11::Hand1);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand2, sizeof(Hand2), &DX11::Hand2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand3, sizeof(Hand3), &DX11::Hand3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand4, sizeof(Hand4), &DX11::Hand4);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand5, sizeof(Hand5), &DX11::Hand5);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand6, sizeof(Hand6), &DX11::Hand6);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand7, sizeof(Hand7), &DX11::Hand7);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand8, sizeof(Hand8), &DX11::Hand8);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand9, sizeof(Hand9), &DX11::Hand9);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand10, sizeof(Hand10), &DX11::Hand10);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand11, sizeof(Hand11), &DX11::Hand11);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand12, sizeof(Hand12), &DX11::Hand12);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand13, sizeof(Hand13), &DX11::Hand13);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand14, sizeof(Hand14), &DX11::Hand14);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand15, sizeof(Hand15), &DX11::Hand15);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand16, sizeof(Hand16), &DX11::Hand16);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand17, sizeof(Hand17), &DX11::Hand17);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand18, sizeof(Hand18), &DX11::Hand18);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand19, sizeof(Hand19), &DX11::Hand19);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand20, sizeof(Hand20), &DX11::Hand20);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand21, sizeof(Hand21), &DX11::Hand21);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand22, sizeof(Hand22), &DX11::Hand22);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand23, sizeof(Hand23), &DX11::Hand23);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand24, sizeof(Hand24), &DX11::Hand24);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand25, sizeof(Hand25), &DX11::Hand25);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand26, sizeof(Hand26), &DX11::Hand26);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand27, sizeof(Hand27), &DX11::Hand27);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand28, sizeof(Hand28), &DX11::Hand28);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand29, sizeof(Hand29), &DX11::Hand29);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand30, sizeof(Hand30), &DX11::Hand30);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand31, sizeof(Hand31), &DX11::Hand31);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand32, sizeof(Hand32), &DX11::Hand32);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand33, sizeof(Hand33), &DX11::Hand33);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand34, sizeof(Hand34), &DX11::Hand34);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand35, sizeof(Hand35), &DX11::Hand35);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand36, sizeof(Hand36), &DX11::Hand36);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand37, sizeof(Hand37), &DX11::Hand37);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand38, sizeof(Hand38), &DX11::Hand38);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand39, sizeof(Hand39), &DX11::Hand39);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand40, sizeof(Hand40), &DX11::Hand40);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand41, sizeof(Hand41), &DX11::Hand41);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand42, sizeof(Hand42), &DX11::Hand42);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand43, sizeof(Hand43), &DX11::Hand43);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand44, sizeof(Hand44), &DX11::Hand44);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand45, sizeof(Hand45), &DX11::Hand45);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand46, sizeof(Hand46), &DX11::Hand46);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand47, sizeof(Hand47), &DX11::Hand47);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand48, sizeof(Hand48), &DX11::Hand48);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand49, sizeof(Hand49), &DX11::Hand49);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand50, sizeof(Hand50), &DX11::Hand50);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand51, sizeof(Hand51), &DX11::Hand51);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand52, sizeof(Hand52), &DX11::Hand52);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand53, sizeof(Hand53), &DX11::Hand53);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand54, sizeof(Hand54), &DX11::Hand54);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand55, sizeof(Hand55), &DX11::Hand55);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand56, sizeof(Hand56), &DX11::Hand56);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand57, sizeof(Hand57), &DX11::Hand57);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand58, sizeof(Hand58), &DX11::Hand58);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand59, sizeof(Hand59), &DX11::Hand59);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Hand60, sizeof(Hand60), &DX11::Hand60);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GameCoin, sizeof(GameCoin), &DX11::GameCoin);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SCARL, sizeof(SCARL), &DX11::SCARL);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M762a, sizeof(M762a), &DX11::M762);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M416a, sizeof(M416a), &DX11::M416);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AKM, sizeof(AKM), &DX11::AK);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AUGa, sizeof(AUGa), &DX11::AUG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, G36c, sizeof(G36c), &DX11::G36);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Grozaa, sizeof(Grozaa), &DX11::Groza);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M16A4a, sizeof(M16A4a), &DX11::M16A4);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Mk47a, sizeof(Mk47a), &DX11::Mk47);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, QBZa, sizeof(QBZa), &DX11::QBZ);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FAMAS, sizeof(FAMAS), &DX11::FAMAS);

	////////////////////////////////////////////////////////////////////// Sniper ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M24a, sizeof(M24a), &DX11::M24);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Kar98k, sizeof(Kar98k), &DX11::Kar98);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AWMa, sizeof(AWMa), &DX11::AWM);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AMR, sizeof(AMR), &DX11::AMR);

	////////////////////////////////////////////////////////////////////// Sniper Rifle ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Mini14a, sizeof(Mini14a), &DX11::Mini14);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, QBUa, sizeof(QBUa), &DX11::QBU);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SKSa, sizeof(SKSa), &DX11::SKS);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SLRa, sizeof(SLRa), &DX11::SLR);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VSSa, sizeof(VSSa), &DX11::VSS);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Win94a, sizeof(Win94a), &DX11::Win94);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Mk14a, sizeof(Mk14a), &DX11::Mk14);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Mk12, sizeof(Mk12), &DX11::Mk12);

	////////////////////////////////////////////////////////////////////// SMG ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MP5Ka, sizeof(MP5Ka), &DX11::MP5K);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PP19a, sizeof(PP19a), &DX11::PP19);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, P90, sizeof(P90), &DX11::P90);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TommyGuna, sizeof(TommyGuna), &DX11::TommyGun);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UMP9a, sizeof(UMP9a), &DX11::UMP9);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Uzia, sizeof(Uzia), &DX11::Uzi);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Vectora, sizeof(Vectora), &DX11::Vector);

	////////////////////////////////////////////////////////////////////// Other Weapon ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M249a, sizeof(M249a), &DX11::M249);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MG3, sizeof(MG3), &DX11::MG3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DP28a, sizeof(DP28a), &DX11::DP28);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CrossBowa, sizeof(CrossBowa), &DX11::CrossBow);

	////////////////////////////////////////////////////////////////////// Pistols ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DesertEaglea, sizeof(DesertEaglea), &DX11::DesertEagle);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Flareguna, sizeof(Flareguna), &DX11::Flaregun);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, P18Ca, sizeof(P18Ca), &DX11::P18C);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, P92a, sizeof(P92a), &DX11::P92);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, P1911a, sizeof(P1911a), &DX11::P1911);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, R45a, sizeof(R45a), &DX11::R45);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, R1895a, sizeof(R1895a), &DX11::R1895);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Vz61a, sizeof(Vz61a), &DX11::Vz61);

	////////////////////////////////////////////////////////////////////// ARMORS ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Vest1, sizeof(Vest1), &DX11::VestV1);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Vest2, sizeof(Vest2), &DX11::VestV2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Vest3, sizeof(Vest3), &DX11::VestV3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Helmet1, sizeof(Helmet1), &DX11::HelmetV1);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Helmet2, sizeof(Helmet2), &DX11::HelmetV2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Helmet3, sizeof(Helmet3), &DX11::HelmetV3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bag1, sizeof(Bag1), &DX11::BagV1);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bag2, sizeof(Bag2), &DX11::BagV2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bag3, sizeof(Bag3), &DX11::BagV3);

	////////////////////////////////////////////////////////////////////// Health ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bandagea, sizeof(Bandagea), &DX11::Bandage);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DrinkEnergya, sizeof(DrinkEnergya), &DX11::DrinkEnergy);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FirstAidKit, sizeof(FirstAidKit), &DX11::FirstAid);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MedKita, sizeof(MedKita), &DX11::MedKit);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Injectiona, sizeof(Injectiona), &DX11::Injection);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Pinkillera, sizeof(Pinkillera), &DX11::Pinkiller);

	////////////////////////////////////////////////////////////////////// Melee Weapon ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Cowbara, sizeof(Cowbara), &DX11::Cowbar);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Machetea, sizeof(Machetea), &DX11::Machete);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Pana, sizeof(Pana), &DX11::Pan);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Sicklea, sizeof(Sicklea), &DX11::Sickle);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Dagger, sizeof(Dagger), &DX11::Dagger);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ZombieBlade, sizeof(ZombieBlade), &DX11::ZombieBlade);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ZombieHammer, sizeof(ZombieHammer), &DX11::ZombieHammer);

	////////////////////////////////////////////////////////////////////// Scops ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scop2X, sizeof(Scop2X), &DX11::S2X);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scop3X, sizeof(Scop3X), &DX11::S3X);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scop4X, sizeof(Scop4X), &DX11::S4X);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scop6X, sizeof(Scop6X), &DX11::S6X);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Scop8X, sizeof(Scop8X), &DX11::S8X);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RedDota, sizeof(RedDota), &DX11::RedDot);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Holoa, sizeof(Holoa), &DX11::Holo);

	////////////////////////////////////////////////////////////////////// Grenade ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FragGrenadea, sizeof(FragGrenadea), &DX11::FragGrenade);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BurGrenadea, sizeof(BurGrenadea), &DX11::BurnGrenade);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SmokeGrenadea, sizeof(SmokeGrenadea), &DX11::SmokeGrenade);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Applea, sizeof(Applea), &DX11::Apple);

	////////////////////////////////////////////////////////////////////// BOX ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AirDropa, sizeof(AirDropa), &DX11::AirDrop);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DeadBoxr, sizeof(DeadBoxr), &DX11::DeadBox);

	////////////////////////////////////////////////////////////////////// Shotgun ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DP12a, sizeof(DP12a), &DX11::DP12);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, S12Ka, sizeof(S12Ka), &DX11::S12K);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, S686a, sizeof(S686a), &DX11::S686);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, S1897a, sizeof(S1897a), &DX11::S1897);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SawedOffa, sizeof(SawedOffa), &DX11::SawedOff);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DBSa, sizeof(DBSa), &DX11::DBS);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M1014a, sizeof(M1014a), &DX11::M1014);

	////////////////////////////////////////////////////////////////////// AMMOS ////////////////////////////////////////////////////////////////////////

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo5, sizeof(Ammo5), &DX11::Amm5);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo7, sizeof(Ammo7), &DX11::Amm7);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo9, sizeof(Ammo9), &DX11::Amm9);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo12, sizeof(Ammo12), &DX11::Amm12);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo45, sizeof(Ammo45), &DX11::Amm45);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Ammo300, sizeof(Ammo300), &DX11::Amm300);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AmmoBolt, sizeof(AmmoBolt), &DX11::AmmoBow);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AmmoFlarea, sizeof(AmmoFlarea), &DX11::AmmoFlare);


	////////////////////////////////////////////////////////////////////// Attachments ////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////AR
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARQExtendeda, sizeof(ARQExtendeda), &DX11::ARQExtended);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARQuicka, sizeof(ARQuicka), &DX11::ARQuick);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARExtendeda, sizeof(ARExtendeda), &DX11::ARExtended);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARCompensatora, sizeof(ARCompensatora), &DX11::ARCompensator);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARFlashHidera, sizeof(ARFlashHidera), &DX11::ARFlashHider);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARSuppressora, sizeof(ARSuppressora), &DX11::ARSuppressor);

	//////////////////////////////////////////////////////SMG
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGExtendeda, sizeof(SMGExtendeda), &DX11::SMGExtended);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGQExtendeda, sizeof(SMGQExtendeda), &DX11::SMGQExtended);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGQuicka, sizeof(SMGQuicka), &DX11::SMGQuick);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGCompensatora, sizeof(SMGCompensatora), &DX11::SMGCompensator);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGFlashHidera, sizeof(SMGFlashHidera), &DX11::SMGFlashHider);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGSuppressora, sizeof(SMGSuppressora), &DX11::SMGSuppressor);

	//////////////////////////////////////////////////////Sniper
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperExtendeda, sizeof(SniperExtendeda), &DX11::SniperExtended);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperQExtendeda, sizeof(SniperQExtendeda), &DX11::SniperQExtended);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperQuicka, sizeof(SniperQuicka), &DX11::SniperQuick);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperCompensatora, sizeof(SniperCompensatora), &DX11::SniperCompensator);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperFlashHidera, sizeof(SniperFlashHidera), &DX11::SniperFlashHider);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperSuppressora, sizeof(SniperSuppressora), &DX11::SniperSuppressor);

	//////////////////////////////////////////////////////Suits
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SuitArctica, sizeof(SuitArctica), &DX11::SuitArctic);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SuitDeserta, sizeof(SuitDeserta), &DX11::SuitDesert);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SuitDeserta2, sizeof(SuitDeserta2), &DX11::SuitDesert2);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SuitWoodlanda, sizeof(SuitWoodlanda), &DX11::SuitWoodland);

	//////////////////////////////////////////////////////	//////////////////////////////////////////////////////
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Chokea, sizeof(Chokea), &DX11::Choke);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DuckBilla, sizeof(DuckBilla), &DX11::DuckBill);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Angleda, sizeof(Angleda), &DX11::Angled);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HalfGripa, sizeof(HalfGripa), &DX11::HalfGrip);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Lasersighta, sizeof(Lasersighta), &DX11::Lasersight);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LightGripa, sizeof(LightGripa), &DX11::LightGrip);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ThumbGripa, sizeof(ThumbGripa), &DX11::ThumbGrip);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Verticala, sizeof(Verticala), &DX11::Vertical);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CrossbowQuicka, sizeof(CrossbowQuicka), &DX11::CrossbowQuick);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SniperCheckPada, sizeof(SniperCheckPada), &DX11::SniperCheckPad);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ARCheckPada, sizeof(ARCheckPada), &DX11::ARCheckPad);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SMGCheckPada, sizeof(SMGCheckPada), &DX11::SMGCheckPad);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Benzina, sizeof(Benzina), &DX11::Benzin);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AF, sizeof(AF), &DX11::AFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AL, sizeof(AL), &DX11::ALFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DZ, sizeof(DZ), &DX11::DZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AS, sizeof(AS), &DX11::ASFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AD, sizeof(AD), &DX11::ADFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AO, sizeof(AO), &DX11::AOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AI, sizeof(AI), &DX11::AIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AG, sizeof(AG), &DX11::AGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AR, sizeof(AR), &DX11::ARFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AM, sizeof(AM), &DX11::AMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AW, sizeof(AW), &DX11::AWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AU, sizeof(AU), &DX11::AUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AT, sizeof(AT), &DX11::ATFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AZ, sizeof(AZ), &DX11::AZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BS, sizeof(BS), &DX11::BSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BH, sizeof(BH), &DX11::BHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BD, sizeof(BD), &DX11::BDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BB, sizeof(BB), &DX11::BBFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BY, sizeof(BY), &DX11::BYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BE, sizeof(BE), &DX11::BEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BZ, sizeof(BZ), &DX11::BZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BJ, sizeof(BJ), &DX11::BJFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BM, sizeof(BM), &DX11::BMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BT, sizeof(BT), &DX11::BTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BO, sizeof(BO), &DX11::BOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BA, sizeof(BA), &DX11::BAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BW, sizeof(BW), &DX11::BWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BV, sizeof(BV), &DX11::BVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IO, sizeof(IO), &DX11::BRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IO, sizeof(IO), &DX11::IOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BN, sizeof(BN), &DX11::BNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BG, sizeof(BG), &DX11::BGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BF, sizeof(BF), &DX11::BFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BI, sizeof(BI), &DX11::BIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CV, sizeof(CV), &DX11::CVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KH, sizeof(KH), &DX11::KHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CM, sizeof(CM), &DX11::CMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CA, sizeof(CA), &DX11::CAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KY, sizeof(KY), &DX11::KYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CF, sizeof(CF), &DX11::CFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TD, sizeof(TD), &DX11::TDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CL, sizeof(CL), &DX11::CLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CN, sizeof(CN), &DX11::CNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CX, sizeof(CX), &DX11::CXFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CC, sizeof(CC), &DX11::CCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CO, sizeof(CO), &DX11::COFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KM, sizeof(KM), &DX11::KMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CD, sizeof(CD), &DX11::CDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CG, sizeof(CG), &DX11::CGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CK, sizeof(CK), &DX11::CKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CR, sizeof(CR), &DX11::CRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HR, sizeof(HR), &DX11::HRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CU, sizeof(CU), &DX11::CUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CW, sizeof(CW), &DX11::CWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CY1, sizeof(CY1), &DX11::CYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CZ, sizeof(CZ), &DX11::CZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CI, sizeof(CI), &DX11::CIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DK, sizeof(DK), &DX11::DKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DJ, sizeof(DJ), &DX11::DJFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DM, sizeof(DM), &DX11::DMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DO, sizeof(DO), &DX11::DOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, EC, sizeof(EC), &DX11::ECFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, EG, sizeof(EG), &DX11::EGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SV, sizeof(SV), &DX11::SVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GQ, sizeof(GQ), &DX11::GQFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ER, sizeof(ER), &DX11::ERFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, EE, sizeof(EE), &DX11::EEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SZ, sizeof(SZ), &DX11::SZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ET, sizeof(ET), &DX11::ETFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FK, sizeof(FK), &DX11::FKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FO, sizeof(FO), &DX11::FOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FJ, sizeof(FJ), &DX11::FJFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FI, sizeof(FI), &DX11::FIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FR, sizeof(FR), &DX11::FRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GF, sizeof(GF), &DX11::GFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PF, sizeof(PF), &DX11::PFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TF, sizeof(TF), &DX11::TFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GA, sizeof(GA), &DX11::GAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GM, sizeof(GM), &DX11::GMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GE, sizeof(GE), &DX11::GEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, DE, sizeof(DE), &DX11::DEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GH, sizeof(GH), &DX11::GHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LY, sizeof(LY), &DX11::LYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LI, sizeof(LI), &DX11::LIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LT, sizeof(LT), &DX11::LTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LU, sizeof(LU), &DX11::LUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MO, sizeof(MO), &DX11::MOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MG, sizeof(MG), &DX11::MGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MW, sizeof(MW), &DX11::MWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MY, sizeof(MY), &DX11::MYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MV, sizeof(MV), &DX11::MVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ML, sizeof(ML), &DX11::MLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MT, sizeof(MT), &DX11::MTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MH, sizeof(MH), &DX11::MHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MQ, sizeof(MQ), &DX11::MQFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MR, sizeof(MR), &DX11::MRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MU, sizeof(MU), &DX11::MUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, YT, sizeof(YT), &DX11::YTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MX, sizeof(MX), &DX11::MXFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, FM, sizeof(FM), &DX11::FMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MD, sizeof(MD), &DX11::MDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MC, sizeof(MC), &DX11::MCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MN, sizeof(MN), &DX11::MNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ME, sizeof(ME), &DX11::MEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MS, sizeof(MS), &DX11::MSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MA, sizeof(MA), &DX11::MAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MZ, sizeof(MZ), &DX11::MZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MM, sizeof(MM), &DX11::MMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NA, sizeof(NA), &DX11::NAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NR, sizeof(NR), &DX11::NRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GI, sizeof(GI), &DX11::GIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GR, sizeof(GR), &DX11::GRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GL, sizeof(GL), &DX11::GLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GD, sizeof(GD), &DX11::GDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GP, sizeof(GP), &DX11::GPFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GU, sizeof(GU), &DX11::GUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GT, sizeof(GT), &DX11::GTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GG, sizeof(GG), &DX11::GGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GN, sizeof(GN), &DX11::GNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GW, sizeof(GW), &DX11::GWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GY, sizeof(GY), &DX11::GYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HT, sizeof(HT), &DX11::HTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HM, sizeof(HM), &DX11::HMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VA, sizeof(VA), &DX11::VAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HN, sizeof(HN), &DX11::HNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HK, sizeof(HK), &DX11::HKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, HU, sizeof(HU), &DX11::HUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, JM, sizeof(JM), &DX11::JMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, G1, sizeof(G1), &DX11::G1FLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, JP, sizeof(JP), &DX11::JPFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, JE, sizeof(JE), &DX11::JEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, JO, sizeof(JO), &DX11::JOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KZ, sizeof(KZ), &DX11::KZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KE, sizeof(KE), &DX11::KEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KI, sizeof(KI), &DX11::KIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KP, sizeof(KP), &DX11::KPFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KR, sizeof(KR), &DX11::KRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KW, sizeof(KW), &DX11::KWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KG, sizeof(KG), &DX11::KGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LA, sizeof(LA), &DX11::LAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LV, sizeof(LV), &DX11::LVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LB, sizeof(LB), &DX11::LBFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LS, sizeof(LS), &DX11::LSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LR, sizeof(LR), &DX11::LRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TR, sizeof(TR), &DX11::TRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TM, sizeof(TM), &DX11::TMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TC, sizeof(TC), &DX11::TCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TV, sizeof(TV), &DX11::TVFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UG, sizeof(UG), &DX11::UGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UA, sizeof(UA), &DX11::UAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AE, sizeof(AE), &DX11::AEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, US, sizeof(US), &DX11::GBFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, US, sizeof(US), &DX11::USFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UY, sizeof(UY), &DX11::UYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, UZ, sizeof(UZ), &DX11::UZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VU, sizeof(VU), &DX11::VUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VE, sizeof(VE), &DX11::VEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VN, sizeof(VN), &DX11::VNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VG, sizeof(VG), &DX11::VGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VI, sizeof(VI), &DX11::VIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, WF, sizeof(WF), &DX11::WFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, YE, sizeof(YE), &DX11::YEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ZM, sizeof(ZM), &DX11::ZMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ZW, sizeof(ZW), &DX11::ZWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AX, sizeof(AX), &DX11::AXFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IS, sizeof(IS), &DX11::ISFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IN1, sizeof(IN1), &DX11::INFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ID, sizeof(ID), &DX11::IDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IR, sizeof(IR), &DX11::IRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IQ, sizeof(IQ), &DX11::IQFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IE, sizeof(IE), &DX11::IEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IM, sizeof(IM), &DX11::IMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IL, sizeof(IL), &DX11::ILFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, IT, sizeof(IT), &DX11::ITFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NP, sizeof(NP), &DX11::NPFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NL, sizeof(NL), &DX11::NLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NC, sizeof(NC), &DX11::NCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NZ, sizeof(NZ), &DX11::NZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NI, sizeof(NI), &DX11::NIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NE, sizeof(NE), &DX11::NEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NG, sizeof(NG), &DX11::NGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NU, sizeof(NU), &DX11::NUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NF, sizeof(NF), &DX11::NFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MP, sizeof(MP), &DX11::MPFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, NO, sizeof(NO), &DX11::NOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PK, sizeof(PK), &DX11::PKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PW, sizeof(PW), &DX11::PWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PS, sizeof(PS), &DX11::PSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PA, sizeof(PA), &DX11::PAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PG, sizeof(PG), &DX11::PGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PY, sizeof(PY), &DX11::PYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PE, sizeof(PE), &DX11::PEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PH, sizeof(PH), &DX11::PHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PN, sizeof(PN), &DX11::PNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PL, sizeof(PL), &DX11::PLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PT, sizeof(PT), &DX11::PTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PR, sizeof(PR), &DX11::PRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, QA, sizeof(QA), &DX11::QAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MK, sizeof(MK), &DX11::MKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RO, sizeof(RO), &DX11::ROFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RU, sizeof(RU), &DX11::RUFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RW, sizeof(RW), &DX11::RWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RE, sizeof(RE), &DX11::REFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, BL, sizeof(BL), &DX11::BLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SH, sizeof(SH), &DX11::SHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, KN, sizeof(KN), &DX11::KNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LC, sizeof(LC), &DX11::LCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, MF, sizeof(MF), &DX11::MFFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, PM, sizeof(PM), &DX11::PMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, VC, sizeof(VC), &DX11::VCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, WS, sizeof(WS), &DX11::WSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SM, sizeof(SM), &DX11::SMFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ST, sizeof(ST), &DX11::STFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SA, sizeof(SA), &DX11::SAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SN, sizeof(SN), &DX11::SNFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, RS, sizeof(RS), &DX11::RSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SC, sizeof(SC), &DX11::SCFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SL, sizeof(SL), &DX11::SLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SG, sizeof(SG), &DX11::SGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SX, sizeof(SX), &DX11::SXFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SK, sizeof(SK), &DX11::SKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SI, sizeof(SI), &DX11::SIFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SB, sizeof(SB), &DX11::SBFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SO, sizeof(SO), &DX11::SOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, ZA, sizeof(ZA), &DX11::ZAFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, GS, sizeof(GS), &DX11::GSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SS, sizeof(SS), &DX11::SSFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LK, sizeof(LK), &DX11::LKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SD, sizeof(SD), &DX11::SDFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SR, sizeof(SR), &DX11::SRFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SJ, sizeof(SJ), &DX11::SJFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SE, sizeof(SE), &DX11::SEFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, CH, sizeof(CH), &DX11::CHFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, SY, sizeof(SY), &DX11::SYFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TW, sizeof(TW), &DX11::TWFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TJ, sizeof(TJ), &DX11::TJFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TZ, sizeof(TZ), &DX11::TZFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TH, sizeof(TH), &DX11::THFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TL, sizeof(TL), &DX11::TLFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TG, sizeof(TG), &DX11::TGFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TK, sizeof(TK), &DX11::TKFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TO, sizeof(TO), &DX11::TOFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TT, sizeof(TT), &DX11::TTFLAG);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, TN, sizeof(TN), &DX11::TNFLAG);

	ImGui_ImplWin32_Init(DX11Window::hWindow);
	ImGui_ImplDX9_Init(DX11::pDevice);

	std::cout << "Texture Done!" << std::endl;
	//std::cin.get();

	static const ImWchar ranges[] = {
		0x0020, 0x00FF,
		0x2010, 0x205E,
		0x0600, 0x06FF,
		0xFE00, 0xFEFF,
		0,
	};

	std::cout << "Setting::Font value: " << Setting::Font << std::endl;

	if (Setting::Font == 0) {
		std::cout << "Loading Arial Bold fonts..." << std::endl;
		Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arialbd.ttf", 17.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Arial Bold (17px)" << std::endl;

		Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 17.0f, &icons_config, icons_ranges);
		std::cout << "Loaded FontAwesome (17px)" << std::endl;

		ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(Tahomabd_data, Tahomabd_size, 31.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Tahoma Bold (31px) from memory" << std::endl;

		DX11::ImGui_DX11::pic = Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arialbd.ttf", 24.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Arial Bold (24px) for DX11::ImGui_DX11::pic" << std::endl;

		DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arialbd.ttf", 14.0f, &icons_config, icons_ranges);
		std::cout << "Loaded Arial Bold (14px) for regular font" << std::endl;

		DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 15.0f, &icons_config, icons_ranges);
		std::cout << "Loaded FontAwesome (15px)" << std::endl;

		DX11::ImGui_DX11::Font1 = Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arialbd.ttf", 17.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Arial Bold (17px) as Font1" << std::endl;
	}
	else if (Setting::Font == 1) {
		std::cout << "Loading Arial fonts..." << std::endl;
		Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arial.ttf", 17.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Arial (17px)" << std::endl;
	}
	else if (Setting::Font == 2) {
		std::cout << "Loading Tahoma Bold fonts..." << std::endl;
		Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\tahomabd.ttf", 17.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Tahoma Bold (17px)" << std::endl;
	}
	else if (Setting::Font == 3) {
		std::cout << "Loading Tahoma fonts..." << std::endl;
		Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\tahoma.ttf", 17.0f, 0, GetGlyphRangesArialUni());
		std::cout << "Loaded Tahoma (17px)" << std::endl;
	}

	std::cout << "Loading custom Tahoma font from memory..." << std::endl;
	ImFontConfig font_cfgnotify;
	font_cfgnotify.FontDataOwnedByAtlas = false;
	Io.Fonts->AddFontFromMemoryTTF((void*)tahoma, sizeof(tahoma), 17.f, &font_cfgnotify);
	std::cout << "Loaded custom Tahoma (17px) from memory" << std::endl;

	ImGui::MergeIconsWithLatestFont(16.f, false);
	std::cout << "Merged icons with latest font" << std::endl;


	if (logok == false)
	{
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Data::QueryThread, nullptr, NULL, nullptr);
		//std::cout << "Status 22" << std::endl;
		//std::cin.get();
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Data::ItemPicker, nullptr, NULL, nullptr);
		//std::cout << "Status 23" << std::endl;
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Esp::EspThread, nullptr, NULL, nullptr);
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Memory::MemoryThread, nullptr, NULL, nullptr);
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Aimbot::AimbotThread, nullptr, NULL, nullptr);
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Memory::WeaponCheats, nullptr, NULL, nullptr);
		CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Memory::WeaponMarco, nullptr, NULL, nullptr);
		//CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)wwcd::wwcdThread, nullptr, NULL, nullptr);
		//CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Data::GameInformation, nullptr, NULL, nullptr);

	}


	MSG Message;
	while (true)
	{

		Sleep(10);

		if (PeekMessage(&Message, DX11Window::hWindow, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		if (Setting::ShowMenu)
		{
			SetForegroundWindow(DX11Window::hWindow);
		}
		if (GetAsyncKeyState(VK_F9) & 1)
		{
			Setting::UselessShow = !Setting::UselessShow;
		}
		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			if (DX11Window::IsClickable == true)
			{
				Utility::ChangeClickability(FALSE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
			else
			{
				Utility::ChangeClickability(TRUE, DX11Window::hWindow);
				DX11Window::IsClickable = !DX11Window::IsClickable;
				Setting::ShowMenu = !Setting::ShowMenu;
			}
		}
		if (GetAsyncKeyState(VK_LCONTROL) & 1)
		{
			Setting::CRPTPressed = !Setting::CRPTPressed;
		}
		if (GetAsyncKeyState(VK_F2) & 1)
		{
			Setting::allitemss = !Setting::allitemss;

		}
		if (GetAsyncKeyState(VK_HOME) & 0x1) {

			Setting::ShowSideMenu = !Setting::ShowSideMenu;
		}
		if (GetAsyncKeyState(VK_F3) & 1)
		{
			Setting::Vehicle = !Setting::Vehicle;
		}
		if (GetAsyncKeyState(VK_F4) & 1)
		{
			Setting::fightmode = !Setting::fightmode;

		}
		if (GetAsyncKeyState(VK_F5) & 1)
		{
			Setting::MagicBullet = !Setting::MagicBullet;
			Setting::MagicBulletticked = !Setting::MagicBulletticked;
		}

		if (Setting::Legitrack)
		{
			int randomNum = (rand() % 6) + 1;
			if (randomNum == 1)
			{
				Setting::curraim = 0;
			}
			if (randomNum == 2)
			{
				Setting::curraim = 1;
			}
			if (randomNum == 3)
			{
				Setting::curraim = 2;
			}		
		}
		//MyProgramLogic();

		// Write the error log to a file
		//WriteErrorLog("error_log.txt");
		if (GetAsyncKeyState(Setting::RefreshKey) & 1)
		{
			Setting::MagicBullet = false;
			Memory::RestoreHook();
			Setting::MagicBullet = true;
		}

		if (GetAsyncKeyState(Setting::AimSwichKey) & 1) {
			Setting::curraim++;
			if (Setting::curraim >= 4)
			{
				Setting::curraim = 0;
			}
			std::cout << Setting::curraim << std::endl;
		}
		bool IsWeaponFiring = Utility::ReadMemoryEx<BOOL>(Data::LocalPlayer + 0xfb8);
		if (IsWeaponFiring == true) {
			Setting::autocurraim++;
			if (Setting::autocurraim == 4)
				Setting::autocurraim = 0;

		}
		if (GetAsyncKeyState(VK_END) & 1)
		{

			if (Setting::MagicBullet)
			{
				Memory::RestoreHook();
			}

			if (Setting::IpadView)
			{
				Setting::IpadViewValue = 360;
			}
			if (Setting::CameraView)
			{
				Setting::view = 220;
			}

			Setting::crossHairrandom = false;
			Setting::XEffectRandomHead = false;
			Setting::XEffectRandomBody = false;
			Setting::MagicX = false;
			Setting::IpadView = false;
			Setting::CameraView = false;
			Setting::CameraCatch = false;
			Setting::MemoryAimbot = false;
			Setting::noSpread = false;
			Setting::ShowDamage = false;
			Setting::fastrun = false;
			Setting::FastSwitchWeapon = false;
			Setting::Quickloot = false;
			Setting::instanthit = false;
			Setting::speedcar = false;
			Setting::ScopeZoom = false;
			Setting::RapidFireG = false;
			Setting::ForceTPP = false;
			Setting::damagebeast = false;
			Setting::WeaponScaleValue = 1;
			//Utility::WriteMemoryEx<char>(OurPointer + 4 * index::Pan, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::Parachute, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Dacia, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Moto, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Skorpion, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_MG3, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_M249, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_DP28, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_S1897, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_SLR, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_MK14, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Mini14, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_SKS, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_AMR, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_VSS, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_AWM, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_M24, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_K98, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Bizon, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Thompson, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Vector, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_UAZ, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_CoupeRP, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_UMP, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_UZI, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_ace32, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Honey, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_qbz, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_aug, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_groza, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_m416, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_scar, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_m16a4, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_s, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::bagback_s, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::helmets_s, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_Buggy, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::Parachute, 0); 
		    //Utility::WriteMemoryEx<char>(OurPointer + 4 * index::skin_m762, 0); 
			Sleep(100);
			m_drv->UnloadDriver("RBG");
			ExitProcess(1);
		}



	}

	return EXIT_SUCCESS;
}

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
	char Buffer[1000];
	GetClassNameA(hWnd, Buffer, 1000);

	string WindowClassName = Buffer;
	if (Emulator::IsSmartGaGa == TRUE)
	{
		if (WindowClassName.find("TitanRenderWindowClass") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TitanRenderWindowClass", Name);
		}
	}
	else if (Emulator::IsGameLoop == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
		}
	}
	else if (Emulator::IsGameLoop7 == TRUE)
	{
		if (WindowClassName.find("TXGuiFoundation") != string::npos)
		{
			wchar_t Name[1000];
			GetWindowTextW(hWnd, Name, 1000);
			Game::hWindow = FindWindowW(L"TXGuiFoundation", Name);
			if (!Game::hWindow)
			{
				Game::hWindow = FindWindowEx(NULL, NULL, L"TXGuiFoundation", L"Gameloop【Turbo AOW Engine-7.1 Beta】");
			}

		}
	}
	return TRUE;
	//return 0;
}