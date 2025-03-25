#include "DX11Window.h"
#include<thread>
HWND DX11Window::hWindow;
MARGINS DX11Window::Margins;
INT DX11Window::Left;
INT DX11Window::Top;
INT DX11Window::Width;
INT DX11Window::Height;
bool DX11Window::IsClickable = true;
bool DX11Window::IsDrawing = false;

BOOL DX11Window::Instantiate(INT Left, INT Top, INT Width, INT Height)
{
	DX11Window::Left = Left;
	DX11Window::Top = Top;
	DX11Window::Width = Width;
	DX11Window::Height = Height;

	std::string str ="Nvidia Overlay";
	std::wstring stemp = std::wstring(str.begin(), str.end());
	LPCWSTR sw = stemp.c_str();
	 

	WNDCLASSEX wClass =
	{
		sizeof(WNDCLASSEX),
		0,
		 DX11Window::WndProc,
		0,
		0,
		nullptr,
		LoadIcon(nullptr, IDI_APPLICATION),
		LoadCursor(nullptr, IDC_ARROW),
		nullptr,
		nullptr,
		TEXT("Test1"),
		LoadIcon(nullptr, IDI_APPLICATION)
	};
	if (!RegisterClassEx(&wClass))
		exit(1);
	DX11Window::hWindow =
		CreateWindowExA(WS_EX_TOPMOST, "Test1", "Test1", WS_POPUP | WS_VISIBLE, Left, Top, Width, Height, NULL, NULL, 0, NULL);

	if (DX11Window::hWindow == 0x0) return FALSE;

	SetWindowLong(DX11Window::hWindow, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW);

	//SetLayeredWindowAttributes(DX11Window::hWindow, 0, 1, LWA_ALPHA);
 	//SetLayeredWindowAttributes(DX11Window::hWindow, RGB(0, 0, 0), 0, LWA_COLORKEY);
	 MARGINS margin = { -1, -1, -1, -1 };
 	DwmExtendFrameIntoClientArea(DX11Window::hWindow, &margin);

	//SetForegroundWindow(overlayHWND);
	ShowWindow(DX11Window::hWindow, SW_SHOW);
	UpdateWindow(DX11Window::hWindow);
	BringWindowToTop(DX11Window::hWindow);
	return TRUE;
}


extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK DX11Window::WndProc(HWND hWindow, UINT Message, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWindow, Message, wParam, lParam)) return true;


	switch (Message)
	{
	case WM_QUIT:
		ExitProcess(0);
		break;
	case WM_CLOSE:
		ExitProcess(0);
		break;
	case WM_DESTROY:
		ExitProcess(0);
		break;
	case WM_SIZE:
		 if (DX11::pDevice != NULL && wParam != SIZE_MINIMIZED)
		 {
		 	ImGui_ImplDX9_InvalidateDeviceObjects();
		 	DX11::d3dpp.BackBufferWidth = LOWORD(lParam);
		 	DX11::d3dpp.BackBufferHeight = HIWORD(lParam);
		 	HRESULT hr = DX11::pDevice->Reset(&DX11::d3dpp);
		 	if (hr == D3DERR_INVALIDCALL)
		 		exit(1);
		 	 
		 	ImGui_ImplDX9_CreateDeviceObjects();
		 }
		break;
 
	default:
		return DefWindowProc(hWindow, Message, wParam, lParam);
		break;
	}

	return 0;
}

VOID DX11Window::Move()
{
	if (Emulator::IsSmartGaGa == true)
	{
	//	Game::hWindow = FindWindowW(L"TitanRenderWindowClass", nullptr);
		Game::hWindow = FindWindowEx(FindWindow(0, L"TitanRenderWindowClass"), NULL, L"TitanRenderWindowClass", L"SmartGaGa RenderWindow");

	}
//if (DX11::pDevice != NULL && wParam != SIZE_MINIMIZED)
//{
//	ImGui_ImplDX9_InvalidateDeviceObjects();
//	DX11::d3dpp.BackBufferWidth = LOWORD(lParam);
//	DX11::d3dpp.BackBufferHeight = HIWORD(lParam);
//	HRESULT hr = DX11::pDevice->Reset(&DX11::d3dpp);
//	if (hr == D3DERR_INVALIDCALL)
//		exit(1);
//
//
//	ImGui_ImplDX9_CreateDeviceObjects();
//}
	RECT Rect;
	GetWindowRect(Game::hWindow, &Rect);
	if (Rect.left < 0 || Rect.top < 0 || Rect.right < 0 || Rect.bottom < 0) return;

	if (DX11Window::Left != Rect.left || DX11Window::Top != Rect.top)
	{
		DX11Window::Left = Rect.left;
		DX11Window::Top = Rect.top;

		if (DX11Window::Width != (Rect.right - Rect.left) || DX11Window::Height != (Rect.bottom - Rect.top))
		{
			DX11Window::Width = Rect.right - Rect.left;
			DX11Window::Height = Rect.bottom - Rect.top;
		}

		MoveWindow(DX11Window::hWindow, DX11Window::Left, DX11Window::Top, DX11Window::Width, DX11Window::Height, TRUE);
		DwmExtendFrameIntoClientArea(DX11Window::hWindow, &DX11Window::Margins);
	}

	



}
 
void DX11Window::SetWindowToTarget()
{
	while (true)
	{
		if (DX11Window::IsDrawing == true)
		{ 
			RECT Rect;
			GetWindowRect(Game::hWindow, &Rect);
			DX11Window::Left = Rect.left;
			DX11Window::Top = Rect.top;
			DX11Window::Width = Rect.right - Rect.left;
			DX11Window::Height = Rect.bottom - Rect.top;
			////SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, DX11Window::Left, DX11Window::Top, DX11Window::Width, DX11Window::Height, SWP_NOMOVE | SWP_NOSIZE); 
			MoveWindow(DX11Window::hWindow, DX11Window::Left, DX11Window::Top, DX11Window::Width, DX11Window::Height, true);


		} 

	}

}

// For x64 Bit Emulator int scrWidth = GetSystemMetrics(SM_CXSCREEN);
// For x64 Bit Emulator int scrHeight = GetSystemMetrics(SM_CYSCREEN);
// For x64 Bit Emulator void DX11Window::SetWindowToTarget()
// For x64 Bit Emulator {
// For x64 Bit Emulator 	while (true)
// For x64 Bit Emulator 	{
// For x64 Bit Emulator 		Sleep(10);
// For x64 Bit Emulator 
// For x64 Bit Emulator 		RECT wndRc;
// For x64 Bit Emulator 		RECT Dif;
// For x64 Bit Emulator 
// For x64 Bit Emulator 		if (Game::hWindow)
// For x64 Bit Emulator 		{
// For x64 Bit Emulator 			GetWindowRect(DX11Window::hWindow, &wndRc);
// For x64 Bit Emulator 			GetWindowRect(Game::hWindow, &Dif);
// For x64 Bit Emulator 			scrWidth = Dif.right - Dif.left;
// For x64 Bit Emulator 			scrHeight = Dif.bottom - Dif.top;
// For x64 Bit Emulator 			SetWindowPos(DX11Window::hWindow, HWND_TOPMOST, Dif.left, Dif.top, scrWidth, scrHeight, SWP_NOMOVE | SWP_NOSIZE);
// For x64 Bit Emulator 			MoveWindow(DX11Window::hWindow, Dif.left, Dif.top, scrWidth, scrHeight, true);
// For x64 Bit Emulator 			DwmExtendFrameIntoClientArea(DX11Window::hWindow, &DX11Window::Margins);
// For x64 Bit Emulator 		}
// For x64 Bit Emulator 		std::this_thread::sleep_for(std::chrono::milliseconds(2500));
// For x64 Bit Emulator 	}
// For x64 Bit Emulator 
// For x64 Bit Emulator }
