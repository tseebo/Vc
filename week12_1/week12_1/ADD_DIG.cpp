// ADD_DIG.cpp : 实现文件
//

#include "stdafx.h"
#include "week12_1.h"
#include "ADD_DIG.h"
#include "afxdialogex.h"


// ADD_DIG 对话框

IMPLEMENT_DYNAMIC(ADD_DIG, CDialogEx)

ADD_DIG::ADD_DIG(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, addname(_T(""))
	, addnumber(0)
	, addmajor(_T(""))
	, addid(0)
{

}

ADD_DIG::~ADD_DIG()
{
}

void ADD_DIG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, addname);
	DDX_Text(pDX, IDC_EDIT2, addnumber);
	DDX_Text(pDX, IDC_EDIT3, addmajor);
	DDX_Text(pDX, IDC_EDIT4, addid);
}


BEGIN_MESSAGE_MAP(ADD_DIG, CDialogEx)
END_MESSAGE_MAP()


// ADD_DIG 消息处理程序
