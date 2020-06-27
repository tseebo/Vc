
// week13_1View.cpp : Cweek13_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week13_1.h"
#endif

#include "week13_1Set.h"
#include "week13_1Doc.h"
#include "week13_1View.h"
#include "mydia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13_1View

IMPLEMENT_DYNCREATE(Cweek13_1View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek13_1View, CRecordView)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek13_1View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cweek13_1View ����/����

Cweek13_1View::Cweek13_1View()
	: CRecordView(IDD_WEEK13_1_FORM)
	, id(_T(""))
	, name(_T(""))
	, number(0)
	, sex(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek13_1View::~Cweek13_1View()
{
}

void Cweek13_1View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
}

BOOL Cweek13_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13_1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13_1View ���

#ifdef _DEBUG
void Cweek13_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13_1Doc* Cweek13_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13_1Doc)));
	return (Cweek13_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13_1View ���ݿ�֧��
CRecordset* Cweek13_1View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13_1View ��Ϣ�������


void Cweek13_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	//GetDlgItemText(IDC_EDIT1, m_pSet->m_5);

	filename = m_pSet->m_5;
	CImage img;
	img.Load(filename);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);

}




void Cweek13_1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydia dig;
	int t = dig.DoModal();
}

