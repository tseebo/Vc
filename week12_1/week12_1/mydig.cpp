// mydig.cpp : 实现文件
//

#include "stdafx.h"
#include "week12_1.h"
#include "mydig.h"
#include "afxdialogex.h"
//#include "week12_1View.h"

// mydig 对话框

IMPLEMENT_DYNAMIC(mydig, CDialogEx)

mydig::mydig(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mydig::~mydig()
{
}

void mydig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mydig, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// mydig 消息处理程序


void mydig::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	
	CImage img;
	CString s;
    GetDlgItemText(IDC_EDIT7, s);
	img.Load(s);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	//img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
