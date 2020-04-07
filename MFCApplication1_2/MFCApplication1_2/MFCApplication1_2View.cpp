
// MFCApplication1_2View.cpp : CMFCApplication1_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication1_2.h"
#endif

#include "MFCApplication1_2Doc.h"
#include "MFCApplication1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1_2View

IMPLEMENT_DYNCREATE(CMFCApplication1_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1_2View 构造/析构

CMFCApplication1_2View::CMFCApplication1_2View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication1_2View::~CMFCApplication1_2View()
{
}

BOOL CMFCApplication1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1_2View 绘制

void CMFCApplication1_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication1_2View 诊断

#ifdef _DEBUG
void CMFCApplication1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1_2Doc* CMFCApplication1_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1_2Doc)));
	return (CMFCApplication1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1_2View 消息处理程序


void CMFCApplication1_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1_2Doc* pDoc = GetDocument(); 
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->S);
	CString s1;
	s1.Format(_T("%d"), pDoc->A);
	dc.TextOutW(point.x, point.y+50, s1);
	CView::OnLButtonDown(nFlags, point);
}
