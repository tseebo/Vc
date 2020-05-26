
// week10_2.1View.cpp : Cweek10_21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week10_2.1.h"
#endif

#include "week10_2.1Doc.h"
#include "week10_2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10_21View

IMPLEMENT_DYNCREATE(Cweek10_21View, CView)

BEGIN_MESSAGE_MAP(Cweek10_21View, CView)
END_MESSAGE_MAP()

// Cweek10_21View 构造/析构

Cweek10_21View::Cweek10_21View()
{
	// TODO: 在此处添加构造代码

}

Cweek10_21View::~Cweek10_21View()
{
}

BOOL Cweek10_21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek10_21View 绘制

void Cweek10_21View::OnDraw(CDC* /*pDC*/)
{
	Cweek10_21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek10_21View 诊断

#ifdef _DEBUG
void Cweek10_21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10_21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10_21Doc* Cweek10_21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10_21Doc)));
	return (Cweek10_21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10_21View 消息处理程序
