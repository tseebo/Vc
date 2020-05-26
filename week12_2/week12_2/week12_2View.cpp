
// week12_2View.cpp : Cweek12_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week12_2.h"
#endif

#include "week12_2Set.h"
#include "week12_2Doc.h"
#include "week12_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_2View

IMPLEMENT_DYNCREATE(Cweek12_2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek12_2View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek12_2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_LAST, &Cweek12_2View::OnRecordLast)
	ON_COMMAND(ID_RECORD_PREV, &Cweek12_2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek12_2View::OnRecordNext)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Cweek12_2View ����/����

Cweek12_2View::Cweek12_2View()
	: CRecordView(IDD_WEEK12_2_FORM)
	, pic(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("C:\\Users\\lenovo\\Pictures\\Saved Pictures\\");

}

Cweek12_2View::~Cweek12_2View()
{
}

void Cweek12_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Cweek12_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek12_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week12_2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek12_2View ���

#ifdef _DEBUG
void Cweek12_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek12_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek12_2Doc* Cweek12_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12_2Doc)));
	return (Cweek12_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12_2View ���ݿ�֧��
CRecordset* Cweek12_2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek12_2View ��Ϣ�������


void Cweek12_2View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	//CString filename,s;
	//GetDlgItemText(IDC_EDIT1, s);
	//filename = path + s;
	//draw_pic(filename);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	
}




void Cweek12_2View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	//CString filename, s;
	//GetDlgItemText(IDC_EDIT1, s);
	//filename = path + s;
	//draw_pic(filename);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	
}




void Cweek12_2View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	//CString filename, s;
	//GetDlgItemText(IDC_EDIT1, s);
	//filename = path + s;
	//draw_pic(filename);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	
}


void Cweek12_2View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	//CString filename, s;
	//GetDlgItemText(IDC_EDIT1, s);
	//filename = path + s;
	//draw_pic(filename);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);

}


void Cweek12_2View::draw_pic(CString file)
{
	

}


void Cweek12_2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	GetDlgItemText(IDC_EDIT1, m_pSet->m_1);

	filename = path + m_pSet->m_1;
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
