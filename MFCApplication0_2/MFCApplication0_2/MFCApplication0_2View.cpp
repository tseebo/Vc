
// MFCApplication0_2View.cpp : CMFCApplication0_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication0_2.h"
#endif

#include "MFCApplication0_2Doc.h"
#include "MFCApplication0_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_2View

IMPLEMENT_DYNCREATE(CMFCApplication0_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_2View 构造/析构

CMFCApplication0_2View::CMFCApplication0_2View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication0_2View::~CMFCApplication0_2View()
{
}

BOOL CMFCApplication0_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_2View 绘制

void CMFCApplication0_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication0_2View 诊断

#ifdef _DEBUG
void CMFCApplication0_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_2Doc* CMFCApplication0_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_2Doc)));
	return (CMFCApplication0_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_2View 消息处理程序


void CMFCApplication0_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication0_2Doc* pDoc = GetDocument();
	pDoc->count=pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication0_2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication0_2Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("左键点击了%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnRButtonDown(nFlags, point);
}
