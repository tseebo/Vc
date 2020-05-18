
// week5_1.1View.cpp : Cweek5_11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week5_1.1.h"
#endif

#include "week5_1.1Doc.h"
#include "week5_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek5_11View

IMPLEMENT_DYNCREATE(Cweek5_11View, CView)

BEGIN_MESSAGE_MAP(Cweek5_11View, CView)
	ON_COMMAND(ID_ELLIPSE_DRAWELLIPSE, &Cweek5_11View::OnEllipseDrawellipse)
END_MESSAGE_MAP()

// Cweek5_11View 构造/析构

Cweek5_11View::Cweek5_11View()
{
	// TODO: 在此处添加构造代码

}

Cweek5_11View::~Cweek5_11View()
{
}

BOOL Cweek5_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek5_11View 绘制

void Cweek5_11View::OnDraw(CDC* pDC)
{
	Cweek5_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek5_11View 诊断

#ifdef _DEBUG
void Cweek5_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5_11Doc* Cweek5_11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5_11Doc)));
	return (Cweek5_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5_11View 消息处理程序


void Cweek5_11View::OnEllipseDrawellipse()
{
	// TODO: 在此添加命令处理程序代码
	Cweek5_11Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	CClientDC dc(this);
	int r = 10;
	for (int i = 0; i < 5; i++) 
	{
		
		dc.Ellipse(rect.left-r, rect.top-r, rect.right+r,rect.bottom+r);
		r -= 30;
	}
	//InvalidateRect(NULL, TRUE);


}
