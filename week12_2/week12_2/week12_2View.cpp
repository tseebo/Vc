
// week12_2View.cpp : Cweek12_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Cweek12_2View 构造/析构

Cweek12_2View::Cweek12_2View()
	: CRecordView(IDD_WEEK12_2_FORM)
	, pic(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("C:\\Users\\lenovo\\Pictures\\Saved Pictures\\");

}

Cweek12_2View::~Cweek12_2View()
{
}

void Cweek12_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Cweek12_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek12_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week12_2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek12_2View 诊断

#ifdef _DEBUG
void Cweek12_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek12_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek12_2Doc* Cweek12_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12_2Doc)));
	return (Cweek12_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12_2View 数据库支持
CRecordset* Cweek12_2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek12_2View 消息处理程序


void Cweek12_2View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
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
