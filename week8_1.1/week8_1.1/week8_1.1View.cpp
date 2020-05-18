
// week8_1.1View.cpp : Cweek8_11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week8_1.1.h"
#endif

#include "week8_1.1Doc.h"
#include "week8_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MyDlg2.h"

// Cweek8_11View

IMPLEMENT_DYNCREATE(Cweek8_11View, CView)

BEGIN_MESSAGE_MAP(Cweek8_11View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cweek8_11View 构造/析构

Cweek8_11View::Cweek8_11View()
{
	// TODO: 在此处添加构造代码

}

Cweek8_11View::~Cweek8_11View()
{
}

BOOL Cweek8_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek8_11View 绘制

void Cweek8_11View::OnDraw(CDC* /*pDC*/)
{
	Cweek8_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek8_11View 诊断

#ifdef _DEBUG
void Cweek8_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8_11Doc* Cweek8_11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8_11Doc)));
	return (Cweek8_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8_11View 消息处理程序


void Cweek8_11View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//MyDlg2 md2;
	//int r = md2.DoModal();
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
	
		CString filename=cfd.GetFileName();
		dc.TextOutW(300, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
