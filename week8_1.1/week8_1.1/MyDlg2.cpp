// MyDlg2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week8_1.1.h"
#include "MyDlg2.h"
#include "afxdialogex.h"


// MyDlg2 �Ի���

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST3, Lbox);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
END_MESSAGE_MAP()


// MyDlg2 ��Ϣ�������
