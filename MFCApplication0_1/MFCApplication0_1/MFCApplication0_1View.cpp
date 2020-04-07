
// MFCApplication0_1View.cpp : CMFCApplication0_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication0_1.h"
#endif

#include "MFCApplication0_1Doc.h"
#include "MFCApplication0_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_1View

IMPLEMENT_DYNCREATE(CMFCApplication0_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_1View 构造/析构

CMFCApplication0_1View::CMFCApplication0_1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication0_1View::~CMFCApplication0_1View()
{
}

BOOL CMFCApplication0_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_1View 绘制

void CMFCApplication0_1View::OnDraw(CDC* pDC)
{
	CMFCApplication0_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication0_1View 诊断

#ifdef _DEBUG
void CMFCApplication0_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_1Doc* CMFCApplication0_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_1Doc)));
	return (CMFCApplication0_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_1View 消息处理程序


void CMFCApplication0_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication0_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->str);
	CView::OnLButtonDown(nFlags, point);
}
