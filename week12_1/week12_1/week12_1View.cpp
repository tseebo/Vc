
// week12_1View.cpp : Cweek12_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week12_1.h"
#endif

#include "week12_1Set.h"
#include "week12_1Doc.h"
#include "week12_1View.h"
#include "mydig.h"
#include "ADD_DIG.h"
#include "UPDATE_DIG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_1View

IMPLEMENT_DYNCREATE(Cweek12_1View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek12_1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek12_1View::OnRecordFirst)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_PREV, &Cweek12_1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek12_1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek12_1View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek12_1View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cweek12_1View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cweek12_1View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cweek12_1View::OnBnClickedButton4)
END_MESSAGE_MAP()

// Cweek12_1View ����/����

Cweek12_1View::Cweek12_1View()
	: CRecordView(IDD_WEEK12_1_FORM)
	, name(_T(""))
	, number(0)
	, major(_T(""))
	, birthday(0)
	, phonenumber(0)
	, address(_T(""))
	, addr(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cweek12_1View::~Cweek12_1View()
{
}

void Cweek12_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL Cweek12_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cweek12_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week12_1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek12_1View ���

#ifdef _DEBUG
void Cweek12_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek12_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek12_1Doc* Cweek12_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12_1Doc)));
	return (Cweek12_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12_1View ���ݿ�֧��
CRecordset* Cweek12_1View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek12_1View ��Ϣ�������


void Cweek12_1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	
	filename = m_pSet->column7;
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


void Cweek12_1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);

	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}



void Cweek12_1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydig dig;
	int t = dig.DoModal();

}


void Cweek12_1View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DIG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		int addid = adddlg.addid;
		CString addna = adddlg.addname;
		long addnu = adddlg.addnumber;
		CString addma = adddlg.addmajor;
		m_pSet->AddNew();
		m_pSet->column1 = addna;
		m_pSet->column2 = addnu;
		m_pSet->column3 = addma;
		m_pSet->Update();
		UpdateData(false);
	}

}


void Cweek12_1View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MovePrev();
	UpdateData(false);
}


void Cweek12_1View::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UPDATE_DIG updig;
	int r = updig.DoModal();
	CString s;
	GetDlgItemText(IDC_EDIT1, s);
	if (r == IDOK) {
		int idd = updig.updateid;
		CString name = updig.updatename;
		long number = updig.updatenumber;
		CString upmajor = updig.updatemajor;
		m_pSet->Edit();
		m_pSet->m_ID= idd;
		m_pSet->column1 = name;
		m_pSet->column2 = number;
		m_pSet->column3 = upmajor;
		m_pSet->Update();
		UpdateData(false);

	}
}
