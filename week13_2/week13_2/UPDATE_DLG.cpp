// UPDATE_DLG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week13_2.h"
#include "UPDATE_DLG.h"
#include "afxdialogex.h"


// UPDATE_DLG �Ի���

IMPLEMENT_DYNAMIC(UPDATE_DLG, CDialogEx)

UPDATE_DLG::UPDATE_DLG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_UPDATE, pParent)
	, i(0)
{

}

UPDATE_DLG::~UPDATE_DLG()
{
}

void UPDATE_DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, i);
}


BEGIN_MESSAGE_MAP(UPDATE_DLG, CDialogEx)
END_MESSAGE_MAP()


// UPDATE_DLG ��Ϣ�������
