// jiluji.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week14_1.h"
#include "jiluji.h"
#include "afxdialogex.h"
#include "week14_1Set.h"


// jiluji �Ի���

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


// jiluji ��Ϣ�������

BOOL jiluji::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
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
					  // �쳣: OCX ����ҳӦ���� FALSE
	}
}
