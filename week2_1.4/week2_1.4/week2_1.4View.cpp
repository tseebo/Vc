
// week2_1.4View.cpp : Cweek2_14View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week2_1.4.h"
#endif

#include "week2_1.4Doc.h"
#include "week2_1.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_14View

IMPLEMENT_DYNCREATE(Cweek2_14View, CView)

BEGIN_MESSAGE_MAP(Cweek2_14View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_14View 构造/析构

Cweek2_14View::Cweek2_14View()
{
	// TODO: 在此处添加构造代码

}

Cweek2_14View::~Cweek2_14View()
{
}

BOOL Cweek2_14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek2_14View 绘制

void Cweek2_14View::OnDraw(CDC* pDC)
{
	Cweek2_14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek2_14View 诊断

#ifdef _DEBUG
void Cweek2_14View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_14Doc* Cweek2_14View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_14Doc)));
	return (Cweek2_14Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_14View 消息处理程序


void Cweek2_14View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CDC *pDC = GetDC();
	CRect cr;
	this->GetClientRect(&cr);
	CBrush newBrush(RGB(0,100,50));
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);;
	CView::OnLButtonDown(nFlags, point);
}
