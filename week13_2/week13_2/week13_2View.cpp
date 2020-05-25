
// week13_2View.cpp : Cweek13_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week13_2.h"
#endif

#include "week13_2Set.h"
#include "week13_2Doc.h"
#include "week13_2View.h"
#include "ADD_DLG.h"
#include "UPDATE_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13_2View

IMPLEMENT_DYNCREATE(Cweek13_2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek13_2View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &Cweek13_2View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek13_2View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cweek13_2View::OnBnClickedButton2)
END_MESSAGE_MAP()

// Cweek13_2View ����/����

Cweek13_2View::Cweek13_2View()
	: CRecordView(IDD_WEEK13_2_FORM)
	, id(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek13_2View::~Cweek13_2View()
{
}

void Cweek13_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Cweek13_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13_2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13_2View ���

#ifdef _DEBUG
void Cweek13_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13_2Doc* Cweek13_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13_2Doc)));
	return (Cweek13_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13_2View ���ݿ�֧��
CRecordset* Cweek13_2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13_2View ��Ϣ�������


void Cweek13_2View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MovePrev();
	UpdateData(false);
}


void Cweek13_2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		long ll = adddlg.l;
		m_pSet->AddNew();
		m_pSet->m_1 = ll;
		m_pSet->Update();
		UpdateData(false);

	}

}


void Cweek13_2View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UPDATE_DLG updlg;
	int r = updlg.DoModal();
	    CString s;
		GetDlgItemText(IDC_EDIT1, s);
	if (r == IDOK) {
		long ii = updlg.i;
		m_pSet->Edit();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
		
	}
}
