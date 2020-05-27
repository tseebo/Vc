
// week10_2.2View.cpp : Cweek10_22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week10_2.2.h"
#endif

#include "week10_2.2Doc.h"
#include "week10_2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10_22View

IMPLEMENT_DYNCREATE(Cweek10_22View, CView)

BEGIN_MESSAGE_MAP(Cweek10_22View, CView)
END_MESSAGE_MAP()

// Cweek10_22View 构造/析构

Cweek10_22View::Cweek10_22View()
{
	// TODO: 在此处添加构造代码

}

Cweek10_22View::~Cweek10_22View()
{
}

BOOL Cweek10_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek10_22View 绘制

void Cweek10_22View::OnDraw(CDC* /*pDC*/)
{
	Cweek10_22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek10_22View 诊断

#ifdef _DEBUG
void Cweek10_22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10_22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10_22Doc* Cweek10_22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10_22Doc)));
	return (Cweek10_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10_22View 消息处理程序
