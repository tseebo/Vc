
// week2_1.3View.cpp : Cweek2_13View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2_1.3.h"
#endif

#include "week2_1.3Doc.h"
#include "week2_1.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_13View

IMPLEMENT_DYNCREATE(Cweek2_13View, CView)

BEGIN_MESSAGE_MAP(Cweek2_13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_13View 构造/析构

Cweek2_13View::Cweek2_13View()
{
	// TODO: 在此处添加构造代码

}

Cweek2_13View::~Cweek2_13View()
{
}

BOOL Cweek2_13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2_13View 绘制

void Cweek2_13View::OnDraw(CDC* /*pDC*/)
{
	Cweek2_13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2_13View 诊断

#ifdef _DEBUG
void Cweek2_13View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_13Doc* Cweek2_13View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_13Doc)));
	return (Cweek2_13Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_13View 消息处理程序


void Cweek2_13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	
	CView::OnLButtonDown(nFlags, point);
}
