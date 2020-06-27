// showpicrtues.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week14_1.h"
#include "showpicrtues.h"
#include "afxdialogex.h"


// showpicrtues �Ի���

IMPLEMENT_DYNAMIC(showpicrtues, CDialogEx)

showpicrtues::showpicrtues(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

showpicrtues::~showpicrtues()
{
}

void showpicrtues::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(showpicrtues, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// showpicrtues ��Ϣ�������


void showpicrtues::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	//CString filename;
	//filename = m_pSet->column5;
	CImage img;
	//img.Load(filename);
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
	//pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
