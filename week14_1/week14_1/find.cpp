// find.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week14_1.h"
#include "find.h"
#include "afxdialogex.h"


// find �Ի���

IMPLEMENT_DYNAMIC(find, CDialogEx)

find::find(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

find::~find()
{
}

void find::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, search);
}


BEGIN_MESSAGE_MAP(find, CDialogEx)
END_MESSAGE_MAP()


// find ��Ϣ�������
