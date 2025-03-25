//#include "Main.h"
#include "Includes.h"
#include "Utility.h"
#include "Driver.h"
#include "DX11Window.h"
#include "DX11.h"
#include "Data.h"
#include "Esp.h"
#include "Memory.h"
#include "Aimbot.h"
#include"loadDrv.h"
#include "imgui-docking/imgui.h"
#include "imgui-docking/imgui_impl_win32.h"
#include "imgui-docking/imgui_impl_dx11.h"
#include "imgui-docking/imgui_internal.h"

#include "ShObjIdl.h"
#include "api/KeyAuth.hpp"
#include "api/xorstr.hpp"
#include "SimpleIni.h"
#include "logo.h"
#include "heart.h"

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


#define XTREME_DRIVER_FILE  "FZ.sys"
#define XTREME_SERVICE_NAME "FZ"
#define XTREME_DEVICE_NAME  "\\Device\\FZ"
DRIVER* m_drv = nullptr;



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
void CustomImGUIStyle2()
{
	ImGuiIO& io = ImGui::GetIO();
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 10.0f;
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

	style.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 235);
	style.Colors[ImGuiCol_Border] = ImColor(50, 50, 50, 255);
	// style.Colors[ImGuiCol_ChildBg] = ImVec4(5.03399e-07, 4.41989e-07, 1e-06, 0.84530);
	//style.Colors[ImGuiCol_Border] = ImColor(255, 0, 0, 255);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 1.0f);
	style.Colors[ImGuiCol_FrameBg] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_FrameBgHovered] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_FrameBgActive] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_TitleBg] = ImColor(66, 66, 66, 255);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_TitleBgActive] = ImColor(66, 66, 66, 255);


	style.Colors[ImGuiCol_CheckMark] = ImColor(255, 255, 255, 255);
	style.Colors[ImGuiCol_MenuBarBg] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_SliderGrab] = ImColor(61, 133, 224, 250);
	style.Colors[ImGuiCol_SliderGrabActive] = ImColor(61, 133, 224, 250);
	style.Colors[ImGuiCol_Text] = ImVec4(0.98f, 0.97f, 0.93f, 1.00f);

	style.Colors[ImGuiCol_Header] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_HeaderHovered] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_HeaderActive] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_TabHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_SliderGrabActive] = ImColor(61, 133, 224, 250);

	style.Colors[ImGuiCol_Button] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_ButtonHovered] = ImColor(158, 158, 158, 250);
	style.Colors[ImGuiCol_ButtonActive] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_Header] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_HeaderHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_HeaderActive] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_SeparatorHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_SeparatorActive] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_ResizeGrip] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_ResizeGripHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_ResizeGripActive] = ImColor(66, 66, 66, 250);

	style.Colors[ImGuiCol_PlotHistogram] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImColor(66, 66, 66, 250);
	style.Colors[ImGuiCol_PlotLines] = ImColor(66, 66, 66, 250);

	colors[ImGuiCol_PlotHistogram] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_PlotHistogramHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_PlotLinesHovered] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_PlotLines] = ImColor(66, 66, 66, 250);

	style.Colors[ImGuiCol_Tab] = ImColor(33, 33, 33, 255);
	style.Colors[ImGuiCol_TabHovered] = ImColor(66, 66, 66, 255);
	style.Colors[ImGuiCol_TabActive] = ImColor(66, 66, 66, 255);
	// colors[ImGuiCol_TabUnfocused] = ImVec4(0.038f, 0.050f, 0.136f, 1.000f);

	colors[ImGuiCol_TabUnfocusedActive] = ImColor(66, 66, 66, 250);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.98f, 0.26f, 0.26f, 0.35f);
	colors[ImGuiCol_NavHighlight] = ImColor(66, 66, 66, 250);
	//style.Colors[ImGuiCol_Node]
}
void CustomImGUIStyle()
{
	ImGuiIO& io = ImGui::GetIO();
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(4, 9);
	style.WindowRounding = 10.0f;
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


	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(0.80f, 0.80f, 0.83f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.12f, 0.20f, 0.28f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.09f, 0.12f, 0.14f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);

	colors[ImGuiCol_TitleBgActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.0f, 4.0f, 247.0f, 0.63f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.37f, 0.61f, 1.00f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(38.0f, 183.0f, 11.0f, 0.53f);
	colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.29f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	//style.Colors[ImGuiCol_Node]
}
size_t writeFunction(void* ptr, size_t size, size_t nmemb, std::string* data) {
	data->append((char*)ptr, size * nmemb);
	return size * nmemb;
}





std::string GetClipboardText2()
{
entryclipboard:
	// Try opening the clipboard
	if (!OpenClipboard(nullptr))
	{
		// Release the clipboard
		CloseClipboard();
		Sleep(3000);
		goto entryclipboard;
	}

	// Get handle of clipboard object for ANSI text
	HANDLE hData = GetClipboardData(CF_TEXT);
	if (hData == nullptr)
	{
		// Release the lock
		GlobalUnlock(hData);
		// Release the clipboard
		CloseClipboard();
		Sleep(3000);
		goto entryclipboard;
	}
	// Lock the handle to get the actual text pointer
	char* pszText = static_cast<char*>(GlobalLock(hData));
	if (pszText == nullptr)
	{
		MessageBox(0, L"Copy your license key to the clipboard.", 0, 0);
		return "";
	}

	// Save text in a string class instance
	std::string text(pszText);
	std::ofstream MyFile(("C:\\TNT-BP-Key.lic"));
	MyFile << text;
	MyFile.close();
	//KeyAuthApp.license(text);
	// Release the lock
	GlobalUnlock(hData);
	// Release the clipboard
	CloseClipboard();
	return text;
}

inline bool exists1(const std::string& name)
{
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

bool loginlogin() {

	int option;

	//Sleep(1000);
	std::cout <<  ("") << std::endl;




	RECT wndRc;




	static char str0[128] = "";
	std::string token = "";
	bool login = false;
	if (exists1(("KEY.lic")))
	{
		std::cout  << ("Reading Key") << std::endl;

		std::ifstream MyFile(("KEY.lic"));
		getline(MyFile, token);
		MyFile.close();
		if (!token.empty())
			strcpy(str0, token.c_str());
		//login = KeyAuthApp.license(token);
		std::cout << ("Attempting To Login") << std::endl;
		// expr = auth_instance.user_data.expires.substr(0, 10);

		

		if (login)
		{
			std::cout << ("Login Success") << std::endl;

			return true;
		}
		else
		{

			system("KEY.lic");
			Sleep(500);
			system(("cls"));
			return false;
		}

	}
	else {
		std::cout <<  ("License Not Found") << std::endl;
	again:
		std::cout << ("Enter License Key :");
	
		std::cin >> token;
		//login = KeyAuthApp.license(token);
		//std::cout << termcolor::magenta << ("\n") << std::endl;
		std::cout << ("\n Attempting To Login With Licence") << std::endl;
		if (!login) {
			std::cout << ("Invalid License");
			Sleep(500);
			std::cout << (". ");
			Sleep(500);
			std::cout << (". ");
			Sleep(500);
			std::cout << (". ");
			Sleep(500);
			//	system(("cls"));
			goto again;
		}
		else if (login) {

			std::cout << ("Login Success") << std::endl;


			Sleep(500);
			std::ofstream MyFile(("KEY.lic"));
			MyFile << token;
			MyFile.close();
			if (exists1(("KEY.lic")))
			{

			}

			return true;
		}
	}
	return false;
}
void mainmenu();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	AllocConsole();
	FILE* fDummy;
	freopen_s(&fDummy, "CONOUT$", "w+", stdout);
	freopen_s(&fDummy, "CONIN$", "w+", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	//KeyAuthApp.init();

	//if (KeyAuthApp.checkblack()) // check if user HWID or IP is blacklisted (don't put before init or it won't work)
	//{

	//	exit(0);

	//}
	system("MODE Con Cols=80 lines=21");
	
	
	SetConsoleOutputCP(65001);
	printf("");

	/*if (login())
	{*/
	
					mainmenu();
		

	/*}
	else
	{
		exit(0);
	}*/

	//return 0;
}

void mainmenu()
{


	

	SetConsoleTitle(_T("FiZZ"));
	system("Color F");
	system("MODE Con Cols=56 lines=16");

	print(XorStr(" Welcome back to FiZZ Hax... \n\n"), 4);

	Sleep(1000);
	//KeyAuthApp.init();


	print(XorStr("[+]Checking for key... \n"), 4);

	//if (login())
		int a;
				//else
		
			//exit(0);
		

	ShowWindow(GetConsoleWindow(), SW_HIDE);



	m_drv = new DRIVER(XTREME_DRIVER_FILE, XTREME_DEVICE_NAME, XTREME_SERVICE_NAME, Driver, DriverSize);
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
		MessageBox(NULL, L"Can't Find Game Process", L"FiZZ", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}


	Game::hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game::Id);

	if (Game::hProcess == 0)
	{
		m_drv->Unload();
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
		m_drv->Unload();
		MessageBox(NULL, L"Can't Find Game Window", L"FiZZ", MB_OKCANCEL);
		system("pause >nul");
		ExitProcess(0);
	}

	int scrWidthh = GetSystemMetrics(SM_CXSCREEN);
	int scrHeightt = GetSystemMetrics(SM_CYSCREEN);
	RECT Rect;
	GetWindowRect(Game::hWindow, &Rect);
	  
	if (Emulator::IsSmartGaGa == true)
	{
		Data::Ue4base = Data::GetUe4Base(0x60000000, 0x90000000);
		print(XorStr("[+]Getting UE4 For Smart7"), 9  );
		if (Data::Ue4base == 0)
		{
			Data::Ue4base = Data::GetUe4Base(0x90000000, 0xA0000000);
			print(XorStr("[+]Getting UE4 For Smart4"), 9);
			Emulator::IsSmartGaGa4 = true;
		}
		else
		{
			Emulator::IsSmartGaGa7 = true;
		}
	}
	else if (Emulator::IsGameLoop == true)
	{
		Data::Ue4base = Data::GetUe4Base(0x25000000, 0x60000000);
		print(XorStr("[+]Getting UE4 For Loop 7"), 9);
			Emulator::IsGameLoop7 = true;
	} 

	//	driver
	std::time_t currentttime = std::time(0);  // t is an integer type
	std::string s = std::to_string(currentttime);
 

	cout << " \n[+] PID: " << dec << uppercase << Game::Id << " | " << hex << Game::Id << endl;

	print(XorStr("[+]Getting Game Winow...."), 6);
	//Sleep(700);
	 


	  DX11Window::Instantiate(Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top);

	DX11::Instantiate(DX11Window::hWindow, DX11Window::Width, DX11Window::Height);

	ImGui::CreateContext();
	ImGuiIO& Io = ImGui::GetIO(); 
	Io.WantSaveIniSettings = false;

	


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

	 
	
	

	Io.Fonts->AddFontFromMemoryTTF((void*)Custom, sizeof(Custom), 15.0f);
	Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 15.0f, &icons_config, icons_ranges);

 
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, rawData, sizeof(rawData),  &DX11::Image ); 
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, LeftMenu, sizeof(LeftMenu), &DX11::LeftMenu);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AirDrop, sizeof(AirDrop), &DX11::AirDrop);

	D3DXCreateTextureFromFileInMemory(DX11::pDevice, M416, sizeof(M416), &DX11::M416);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, AKM, sizeof(AKM), &DX11::AKM);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Helmet3, sizeof(Helmet3), &DX11::Helmet3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Bag3, sizeof(Bag3), &DX11::Bag3);
	D3DXCreateTextureFromFileInMemory(DX11::pDevice, Armor3, sizeof(Armor3), &DX11::Armor3);

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
	ImGui_ImplDX9_Init(DX11::pDevice );
 
	DX11::ImGui_DX11::pic = Io.Fonts->AddFontFromMemoryTTF((void*)Custom, sizeof(Custom), 24.0f);
	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryTTF((void*)Custom, sizeof(Custom), 15.0f);
	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 16.0f, &icons_config, icons_ranges);
	DX11::ImGui_DX11::pRegularFont = Io.Fonts->AddFontFromFileTTF("C:\\windows\\Fonts\\arial.ttf", 16.0f, &icons_config, icons_ranges);
	
	 if (logok==false)
	 {
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Data::QueryThread, nullptr, NULL, nullptr);
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Data::ItemPicker, nullptr, NULL, nullptr);
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Esp::EspThread, nullptr, NULL, nullptr);
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Memory::MemoryThread, nullptr, NULL, nullptr);
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Aimbot::AimbotThread, nullptr, NULL, nullptr);
		 CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)Memory::WeaponCheats, nullptr, NULL, nullptr);
	 

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
			Setting::MagicBullet = !Setting::MagicBullet;
			Setting::MagicBulletticked = !Setting::MagicBulletticked;

		}
		if (GetAsyncKeyState(VK_HOME) & 0x1) {

			Setting::ShowSideMenu = !Setting::ShowSideMenu;
		}
		if (GetAsyncKeyState(VK_F3) & 1)
		{
			Setting::fightmode = !Setting::fightmode;
			Setting::deadbox = !Setting::deadbox;
			Setting::Vehicle = !Setting::Vehicle;
			Setting::allitemss = !Setting::allitemss;
		}
		if (GetAsyncKeyState(VK_F5) & 1)
		{
			Setting::allitemss = !Setting::allitemss;
		}
		if (GetAsyncKeyState(VK_F6) & 1)
		{
			Setting::Vehicle = !Setting::Vehicle;
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
					Setting::curraim = 2;
				}
				else if (Setting::curraim == 2) {
					Setting::curraim = 3;
				}
				else if (Setting::curraim == 3) {
					Setting::curraim = 0;
				}
			}


		}
		
		if (GetAsyncKeyState(VK_END) & 1)
		{
			if (Setting::MagicBullet && Memory::WasBuggedHook == false)
			{
				Memory::RestoreHook();
			}

			Sleep(100);
			m_drv->Unload();
			ExitProcess(1);
		}

	

	}

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