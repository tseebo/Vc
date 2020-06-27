// jiluji.cpp : 实现文件
//

#include "stdafx.h"
#include "week14_1.h"
#include "jiluji.h"
#include "afxdialogex.h"
#include "week14_1Set.h"


// jiluji 对话框

IMPLEMENT_DYNAMIC(jiluji, CDialogEx)

jiluji::jiluji(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{
	m_pSet = NULL;
}

jiluji::~jiluji()
{
}

void jiluji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, list);
}



BEGIN_MESSAGE_MAP(jiluji, CDialogEx)
END_MESSAGE_MAP()


// jiluji 消息处理程序

BOOL jiluji::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_pSet->MoveFirst();
	list.ResetContent();
	CString s;
	int n = m_pSet->GetODBCFieldCount();
	while (!m_pSet->IsEOF())
	{
		s.Empty();

		for (int i = 0; i < n; i++)
		{
			CString temp;
			m_pSet->GetFieldValue((short)i, temp);
			s += temp;
			s += _T("    ");
		}
		list.AddString(s);
		m_pSet->MoveNext();
		return TRUE;  // return TRUE unless you set the focus to a control
					  // 异常: OCX 属性页应返回 FALSE
	}
}
