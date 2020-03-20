
// MFCApplication20200317_1View.cpp : CMFCApplication20200317_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200317_1.h"
#endif

#include "MFCApplication20200317_1Doc.h"
#include "MFCApplication20200317_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200317_1View

IMPLEMENT_DYNCREATE(CMFCApplication20200317_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200317_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCApplication20200317_1View 构造/析构

CMFCApplication20200317_1View::CMFCApplication20200317_1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200317_1View::~CMFCApplication20200317_1View()
{
}

BOOL CMFCApplication20200317_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200317_1View 绘制

void CMFCApplication20200317_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200317_1View 诊断

#ifdef _DEBUG
void CMFCApplication20200317_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200317_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200317_1Doc* CMFCApplication20200317_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200317_1Doc)));
	return (CMFCApplication20200317_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200317_1View 消息处理程序


void CMFCApplication20200317_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	pDoc->a = point.x;

	CView::OnLButtonDown(nFlags, point);
}




void CMFCApplication20200317_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	pDoc->b= point.x;
	CView::OnLButtonUp(nFlags, point);
}


void CMFCApplication20200317_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int i = abs(pDoc->b - pDoc->a);
	if (nFlags)
		pDoc->count = pDoc->count++;
	CString s;
	s.Format(_T("MouseMove发生了 %d 次，横向移动%d个像素发生一次"), pDoc->count, i);
	dc.TextOutW(300, 300, s);
	CView::OnMouseMove(nFlags, point);
}
