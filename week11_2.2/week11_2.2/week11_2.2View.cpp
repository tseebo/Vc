
// week11_2.2View.cpp : Cweek11_22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week11_2.2.h"
#endif

#include "week11_2.2Set.h"
#include "week11_2.2Doc.h"
#include "week11_2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_22View

IMPLEMENT_DYNCREATE(Cweek11_22View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11_22View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek11_22View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cweek11_22View 构造/析构

Cweek11_22View::Cweek11_22View()
	: CRecordView(IDD_WEEK11_22_FORM)
	, id(_T(""))
	, name(_T(""))
	, number(0)
	, sex(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek11_22View::~Cweek11_22View()
{
}

void Cweek11_22View::DoDataExchange(CDataExchange* pDX)
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
}

BOOL Cweek11_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_22View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_22Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11_22View 诊断

#ifdef _DEBUG
void Cweek11_22View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_22View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_22Doc* Cweek11_22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_22Doc)));
	return (Cweek11_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_22View 数据库支持
CRecordset* Cweek11_22View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_22View 消息处理程序


void Cweek11_22View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString filename;
	filename = m_pSet->m_5;
	CImage img;
	img.Load(filename);
	//CImage img;
	//img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
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

	ReleaseDC(pDC);
	

}
