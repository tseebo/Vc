// MyDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication0406_2.h"
#include "MyDlg0.h"
#include "afxdialogex.h"


// MyDlg0 �Ի���

IMPLEMENT_DYNAMIC(MyDlg0, CDialogEx)

MyDlg0::MyDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str1(_T(""))
	, str2(_T(""))
{

}

MyDlg0::~MyDlg0()
{
}

void MyDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT5, str1);
	DDX_Text(pDX, IDC_EDIT6, str2);
}


BEGIN_MESSAGE_MAP(MyDlg0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT6, &MyDlg0::OnEnChangeEdit6)
END_MESSAGE_MAP()


// MyDlg0 ��Ϣ�������


void MyDlg0::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
