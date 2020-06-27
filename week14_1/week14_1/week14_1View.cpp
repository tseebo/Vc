
// week14_1View.cpp : Cweek14_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week14_1.h"
#endif

#include "week14_1Set.h"
#include "week14_1Doc.h"
#include "week14_1View.h"
#include "showpicrtues.h"
#include "jiluji.h"
#include "find.h"
#include "sort.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek14_1View

IMPLEMENT_DYNCREATE(Cweek14_1View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek14_1View, CRecordView)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &Cweek14_1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cweek14_1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek14_1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek14_1View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek14_1View::OnBnClickedButton1)
	ON_COMMAND(ID_jiluji, &Cweek14_1View::Onjiluji)
	ON_COMMAND(ID_sort, &Cweek14_1View::Onsort)
	ON_COMMAND(ID_search, &Cweek14_1View::Onsearch)
END_MESSAGE_MAP()

// Cweek14_1View 构造/析构

Cweek14_1View::Cweek14_1View()
	: CRecordView(IDD_WEEK14_1_FORM)
	, number(0)
	, name(_T(""))
	, sex(_T(""))
	, money(0)
	, add(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek14_1View::~Cweek14_1View()
{
}

void Cweek14_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
}

BOOL Cweek14_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek14_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week14_1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek14_1View 诊断

#ifdef _DEBUG
void Cweek14_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek14_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek14_1Doc* Cweek14_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek14_1Doc)));
	return (Cweek14_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek14_1View 数据库支持
CRecordset* Cweek14_1View::OnGetRecordset()
{
	return m_pSet;
}




// Cweek14_1View 消息处理程序


void Cweek14_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString filename;
	filename = m_pSet->column5;
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
	//pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}


void Cweek14_1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek14_1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);

	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek14_1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);

	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);

}



void Cweek14_1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek14_1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	showpicrtues dig;
	int t = dig.DoModal();
}


void Cweek14_1View::Onjiluji()
{
	// TODO: 在此添加命令处理程序代码
	jiluji *dig = new jiluji;
	dig->m_pSet = m_pSet;
	dig->Create(IDD_DIALOG2);
	dig->ShowWindow(1);

}


void Cweek14_1View::Onsort()
{
	// TODO: 在此添加命令处理程序代码
	sort dig;
	int t = dig.DoModal();
	CString s;
	if (t == IDOK)
		s = dig.orderby;
	m_pSet->m_strSort = s;
	m_pSet->Requery();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	OnPaint();
}


void Cweek14_1View::Onsearch()
{
	// TODO: 在此添加命令处理程序代码
	find dig;
	int t = dig.DoModal();
	CString s;
	if (t == IDOK)
		s = dig.search;
	m_pSet->m_strFilter = s;
	m_pSet->Requery();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CImage img;
	CString filename= m_pSet->column5;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}
