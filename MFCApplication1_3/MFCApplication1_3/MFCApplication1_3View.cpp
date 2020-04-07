
// MFCApplication1_3View.cpp : CMFCApplication1_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication1_3.h"
#endif

#include "MFCApplication1_3Doc.h"
#include "MFCApplication1_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1_3View

IMPLEMENT_DYNCREATE(CMFCApplication1_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1_3View 构造/析构

CMFCApplication1_3View::CMFCApplication1_3View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication1_3View::~CMFCApplication1_3View()
{
}

BOOL CMFCApplication1_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1_3View 绘制

void CMFCApplication1_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication1_3View 诊断

#ifdef _DEBUG
void CMFCApplication1_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1_3Doc* CMFCApplication1_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1_3Doc)));
	return (CMFCApplication1_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1_3View 消息处理程序


void CMFCApplication1_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1_3Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}



void CMFCApplication1_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString S;
	S.Format(_T("%d"), pDoc->count);
	dc.TextOutW(point.x, point.y, S);
	CView::OnRButtonDown(nFlags, point);
}
