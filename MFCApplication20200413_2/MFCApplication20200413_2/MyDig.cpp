// MyDig.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication20200413_2.h"
#include "MyDig.h"
#include "afxdialogex.h"


// MyDig 对话框

IMPLEMENT_DYNAMIC(MyDig, CDialogEx)

MyDig::MyDig(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_nun1(0)
	, m_num2(0)
	, m_num3(0)
{

}

MyDig::~MyDig()
{
}

void MyDig::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_nun1);
	DDX_Text(pDX, IDC_EDIT2, m_num2);
	DDX_Text(pDX, IDC_EDIT3, m_num3);
}


BEGIN_MESSAGE_MAP(MyDig, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyDig::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDig::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDig 消息处理程序


void MyDig::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyDig::OnBnClickedButton1()
{
	UpdateData(TRUE); 
	m_num3 = m_nun1 + m_num2; 
	UpdateData(FALSE);

	// TODO: 在此添加控件通知处理程序代码
}
