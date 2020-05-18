#include <windows.h>
#include <stdio.h>

LRESULT CALLBACK WinSunProc(
  HWND hwnd,
  UINT uMsg,
  WPARAM wParam,
  LPARAM lParam
  );

int WINAPI WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevIntance,
  LPSTR lpCmaline,
  int nCmdShow
)
{
	WNDCLASS wndcls; //定义一个窗口类变量
	
	wndcls.cbClsExtra=0;
	wndcls.cbWndExtra=0;
	wndcls.hInstance=hInstance;
	wndcls.hIcon=LoadIcon(NULL,IDI_ERROR);
	wndcls.hCursor=LoadCursor(NULL,IDC_CROSS);
	wndcls.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);
	wndcls.lpszMenuName=NULL;
	wndcls.lpszClassName="sunxin2006";
	wndcls.lpfnWndProc=WinSunProc;
	wndcls.style=CS_HREDRAW|CS_VREDRAW;
	RegisterClass(&wndcls);

	HWND hwnd;
    hwnd=CreateWindow("sunxin2006",
				"http://www.sunxin.org",
				WS_OVERLAPPEDWINDOW,
				0,0,600,400,
				NULL,	NULL,	hInstance,
				NULL); 
	ShowWindow(hwnd,SW_SHOWNORMAL);		
    UpdateWindow(hwnd); 

	MSG msg;
	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	 return msg.wParam;
}

LRESULT CALLBACK WinSunProc(
   HWND hwnd,
   UINT uMsg,
   WPARAM wParam,
   LPARAM lParam
  )
{
	switch(uMsg)
    {
	case WM_CHAR:
			char szChar[20];
			sprintf(szChar,"char code is %d",wParam);
			MessageBox(hwnd,szChar,"char",0);
			break;
	case WM_LBUTTONDOWN:
			MessageBox(hwnd,"mouse clicked","message",0);
			HDC hdc;
			hdc=GetDC(hwnd);
			TextOut(hdc,0,50,"程序之家",strlen("程序之家"));
			//ReleaseDC(hwnd,hdc);
			break;
	case WM_PAINT:
			HDC hDC;
			PAINTSTRUCT ps;
			hDC=BeginPaint(hwnd,&ps);
			TextOut(hDC,0,0,"http://www.sunxin.org",strlen("http://www.sunxin.org"));
			EndPaint(hwnd,&ps);
			break;
	case WM_CLOSE:
			if(IDYES==MessageBox(hwnd,"是否真的结束？","message",MB_YESNO))
			{
				DestroyWindow(hwnd);
			}
			break;
	case WM_DESTROY:
			PostQuitMessage(0);
			break;
	default:
			return DefWindowProc(hwnd,uMsg,wParam,lParam);
	}
	return 0;
}
