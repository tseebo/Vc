
// MFCApplication2020310_2View.cpp : CMFCApplication2020310_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication2020310_2.h"
#endif

#include "MFCApplication2020310_2Doc.h"
#include "MFCApplication2020310_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2020310_2View

IMPLEMENT_DYNCREATE(CMFCApplication2020310_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication2020310_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication2020310_2View 构造/析构

CMFCApplication2020310_2View::CMFCApplication2020310_2View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication2020310_2View::~CMFCApplication2020310_2View()
{
}

BOOL CMFCApplication2020310_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication2020310_2View 绘制

void CMFCApplication2020310_2View::OnDraw(CDC* pDC)
{
	CMFCApplication2020310_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication2020310_2View 诊断

#ifdef _DEBUG
void CMFCApplication2020310_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication2020310_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication2020310_2Doc* CMFCApplication2020310_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication2020310_2Doc)));
	return (CMFCApplication2020310_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication2020310_2View 消息处理程序


void CMFCApplication2020310_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CMFCApplication2020310_2Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;
	
	s.Format(_T("%d + %d = %d"), a, b, a+b);
	CClientDC dc(this);
	
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
