
// week13_1View.cpp : Cweek13_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Cweek13_1View 构造/析构

Cweek13_1View::Cweek13_1View()
	: CRecordView(IDD_WEEK13_1_FORM)
	, id(_T(""))
	, name(_T(""))
	, number(0)
	, sex(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek13_1View::~Cweek13_1View()
{
}

void Cweek13_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_5);
}

BOOL Cweek13_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13_1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13_1View 诊断

#ifdef _DEBUG
void Cweek13_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13_1Doc* Cweek13_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13_1Doc)));
	return (Cweek13_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13_1View 数据库支持
CRecordset* Cweek13_1View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13_1View 消息处理程序


void Cweek13_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
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
	// TODO: 在此添加控件通知处理程序代码
	mydia dig;
	int t = dig.DoModal();
}

