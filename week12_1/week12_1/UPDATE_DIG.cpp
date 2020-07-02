// UPDATE_DIG.cpp : 实现文件
//

#include "stdafx.h"
#include "week12_1.h"
#include "UPDATE_DIG.h"
#include "afxdialogex.h"


// UPDATE_DIG 对话框

IMPLEMENT_DYNAMIC(UPDATE_DIG, CDialogEx)

UPDATE_DIG::UPDATE_DIG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, updateid(0)
	, updatename(_T(""))
	, updatenumber(0)
	, updatemajor(_T(""))
{

}

UPDATE_DIG::~UPDATE_DIG()
{
}

void UPDATE_DIG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, updateid);
	DDX_Text(pDX, IDC_EDIT2, updatename);
	DDX_Text(pDX, IDC_EDIT3, updatenumber);
	DDX_Text(pDX, IDC_EDIT4, updatemajor);
}


BEGIN_MESSAGE_MAP(UPDATE_DIG, CDialogEx)
END_MESSAGE_MAP()


// UPDATE_DIG 消息处理程序
