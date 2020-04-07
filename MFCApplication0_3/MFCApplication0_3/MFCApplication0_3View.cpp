
// MFCApplication0_3View.cpp : CMFCApplication0_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication0_3.h"
#endif

#include "MFCApplication0_3Doc.h"
#include "MFCApplication0_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_3View

IMPLEMENT_DYNCREATE(CMFCApplication0_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_3View 构造/析构

CMFCApplication0_3View::CMFCApplication0_3View()
{
	// TODO: 在此处添加构造代码
	s1 = "view类";
}

CMFCApplication0_3View::~CMFCApplication0_3View()
{
}

BOOL CMFCApplication0_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_3View 绘制

void CMFCApplication0_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication0_3View 诊断

#ifdef _DEBUG
void CMFCApplication0_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_3Doc* CMFCApplication0_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_3Doc)));
	return (CMFCApplication0_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_3View 消息处理程序


void CMFCApplication0_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication0_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s1 + pDoc->s2);
	CView::OnLButtonDown(nFlags, point);
}
