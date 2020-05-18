
// week3_2.3View.cpp : Cweek3_23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week3_2.3.h"
#endif

#include "week3_2.3Doc.h"
#include "week3_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3_23View

IMPLEMENT_DYNCREATE(Cweek3_23View, CView)

BEGIN_MESSAGE_MAP(Cweek3_23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3_23View 构造/析构

Cweek3_23View::Cweek3_23View()
{
	// TODO: 在此处添加构造代码

}

Cweek3_23View::~Cweek3_23View()
{
}

BOOL Cweek3_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek3_23View 绘制

void Cweek3_23View::OnDraw(CDC* /*pDC*/)
{
	Cweek3_23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect A(100, 100, 150,150);
	dc.Rectangle(A);
	CRect B(300, 100, 350, 150);
	dc.Rectangle(B);
	CRect	C(500, 100, 550, 150);
	dc.Rectangle(C);

	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek3_23View 诊断

#ifdef _DEBUG
void Cweek3_23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3_23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3_23Doc* Cweek3_23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3_23Doc)));
	return (Cweek3_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3_23View 消息处理程序


void Cweek3_23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek3_23Doc* pDoc = GetDocument();
	CString s1,s2;
	
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	CClientDC dc(this);
	if (point.x > 100 & point.x < 150 && point.y>100 & point.y < 150)
	{ 
		dc.TextOutW(point.x, point.y, s1);
	}
		
	 else if (point.x > 300 & point.x < 350 && point.y>100 & point.y < 150)
	{
		dc.TextOutW(point.x, point.y, s2);
	}

	else if (!(point.x > 100 & point.x < 150 && point.y>100 & point.y < 150))
	{
		dc.TextOutW(point.x, point.y, _T("点击无效"));
	}

	CView::OnLButtonDown(nFlags, point);
}


void Cweek3_23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek3_23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s3;
	s3.Format(_T("%d"), pDoc->a+pDoc->b);
	if (point.x > 500 & point.x < 550 && point.y>100 & point.y < 150)
	{
		dc.TextOutW(point.x, point.y, s3);
	}
	CView::OnRButtonDown(nFlags, point);
}
