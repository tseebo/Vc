
// week2_1.2View.cpp : Cweek2_12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2_1.2.h"
#endif

#include "week2_1.2Doc.h"
#include "week2_1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_12View

IMPLEMENT_DYNCREATE(Cweek2_12View, CView)

BEGIN_MESSAGE_MAP(Cweek2_12View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_12View 构造/析构

Cweek2_12View::Cweek2_12View()
{
	// TODO: 在此处添加构造代码

}

Cweek2_12View::~Cweek2_12View()
{
}

BOOL Cweek2_12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2_12View 绘制

void Cweek2_12View::OnDraw(CDC* pDC)
{
	Cweek2_12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//InvalidateRect(NULL, TRUE);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2_12View 诊断

#ifdef _DEBUG
void Cweek2_12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_12Doc* Cweek2_12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_12Doc)));
	return (Cweek2_12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_12View 消息处理程序


void Cweek2_12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC *pDC = GetDC();
	int a = 50; int b = 100;
	int r = rand() % (b - a) + a;
	pDC->Ellipse(point.x-r, point.y-r, point.x + r, point.y + r);
	//Invalidate();
	
	CView::OnLButtonDown(nFlags, point);
}
