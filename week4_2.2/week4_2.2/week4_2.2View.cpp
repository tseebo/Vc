
// week4_2.2View.cpp : Cweek4_22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week4_2.2.h"
#endif

#include "week4_2.2Doc.h"
#include "week4_2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek4_22View

IMPLEMENT_DYNCREATE(Cweek4_22View, CView)

BEGIN_MESSAGE_MAP(Cweek4_22View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek4_22View 构造/析构

Cweek4_22View::Cweek4_22View()
{
	// TODO: 在此处添加构造代码

}

Cweek4_22View::~Cweek4_22View()
{
}

BOOL Cweek4_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek4_22View 绘制

void Cweek4_22View::OnDraw(CDC* pDC)
{
	Cweek4_22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CClientDC dc(this);
	pDC->Rectangle(pDoc->cr);
	//Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek4_22View 诊断

#ifdef _DEBUG
void Cweek4_22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek4_22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek4_22Doc* Cweek4_22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek4_22Doc)));
	return (Cweek4_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek4_22View 消息处理程序


void Cweek4_22View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek4_22Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 10;
			pDoc->cr.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.left +=10;
			pDoc->cr.right +=10;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= rect.bottom - rect.top) {
			pDoc->cr.top += 10;
			pDoc->cr.bottom += 10;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0) {
			pDoc->cr.top -= 10;
			pDoc->cr.bottom -=10;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.left > 0) {
			pDoc->cr.left -= 10;
			pDoc->cr.top -= 10;
		}
		break;
	case VK_END:
		if (pDoc->cr.right <= rect.right - rect.left) {
			pDoc->cr.right -= 10;
			pDoc->cr.bottom -=10;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cweek4_22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cweek4_22Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->cr.left = 300;
	pDoc->cr.top = 200;
	pDoc->cr.right = 600;
	pDoc->cr.bottom = 300;
    dc.Rectangle(pDoc->cr);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
