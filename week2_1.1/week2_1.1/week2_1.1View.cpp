
// week2_1.1View.cpp : Cweek2_11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2_1.1.h"
#endif

#include "week2_1.1Doc.h"
#include "week2_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_11View

IMPLEMENT_DYNCREATE(Cweek2_11View, CView)

BEGIN_MESSAGE_MAP(Cweek2_11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_11View 构造/析构

Cweek2_11View::Cweek2_11View()
{
	// TODO: 在此处添加构造代码

}

Cweek2_11View::~Cweek2_11View()
{
}

BOOL Cweek2_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2_11View 绘制

void Cweek2_11View::OnDraw(CDC* pDC)
{
	Cweek2_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2_11View 诊断

#ifdef _DEBUG
void Cweek2_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_11Doc* Cweek2_11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_11Doc)));
	return (Cweek2_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_11View 消息处理程序


void Cweek2_11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC *pDC = GetDC();
	int a = 50; int b = 100;
	int r = rand() % (b - a) + a;
	pDC->Ellipse(point.x, point.y, point.x + r, point.y + r);

	CView::OnLButtonDown(nFlags, point);
}
