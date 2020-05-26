
// week11_2.3View.cpp : Cweek11_23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week11_2.3.h"
#endif

#include "week11_2.3Set.h"
#include "week11_2.3Doc.h"
#include "week11_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_23View

IMPLEMENT_DYNCREATE(Cweek11_23View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11_23View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT3, &Cweek11_23View::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &Cweek11_23View::OnEnChangeEdit2)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &Cweek11_23View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek11_23View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek11_23View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek11_23View::OnRecordLast)
END_MESSAGE_MAP()

// Cweek11_23View ����/����

Cweek11_23View::Cweek11_23View()
	: CRecordView(IDD_WEEK11_23_FORM)
	, id(_T(""))
	, name(_T(""))
	, number(0)
	, sex(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek11_23View::~Cweek11_23View()
{
}

void Cweek11_23View::DoDataExchange(CDataExchange* pDX)
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

BOOL Cweek11_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_23View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_23Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11_23View ��ӡ

BOOL Cweek11_23View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cweek11_23View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cweek11_23View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cweek11_23View ���

#ifdef _DEBUG
void Cweek11_23View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_23View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_23Doc* Cweek11_23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_23Doc)));
	return (Cweek11_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_23View ���ݿ�֧��
CRecordset* Cweek11_23View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_23View ��Ϣ�������


void Cweek11_23View::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cweek11_23View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cweek11_23View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	filename =  m_pSet->m_5;
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
	//GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	//GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);


}


void Cweek11_23View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}




void Cweek11_23View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}



void Cweek11_23View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);

}




void Cweek11_23View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);	
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}
