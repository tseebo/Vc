// MyDig.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication20200413_2.h"
#include "MyDig.h"
#include "afxdialogex.h"


// MyDig �Ի���

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


// MyDig ��Ϣ�������


void MyDig::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyDig::OnBnClickedButton1()
{
	UpdateData(TRUE); 
	m_num3 = m_nun1 + m_num2; 
	UpdateData(FALSE);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
