
// week11_1.1View.cpp : Cweek11_11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week11_1.1.h"
#endif

#include "week11_1.1Set.h"
#include "week11_1.1Doc.h"
#include "week11_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_11View

IMPLEMENT_DYNCREATE(Cweek11_11View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11_11View, CRecordView)
END_MESSAGE_MAP()

// Cweek11_11View ����/����

Cweek11_11View::Cweek11_11View()
	: CRecordView(IDD_WEEK11_11_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek11_11View::~Cweek11_11View()
{
}

void Cweek11_11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL Cweek11_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_11Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11_11View ���

#ifdef _DEBUG
void Cweek11_11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_11Doc* Cweek11_11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_11Doc)));
	return (Cweek11_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_11View ���ݿ�֧��
CRecordset* Cweek11_11View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_11View ��Ϣ�������
