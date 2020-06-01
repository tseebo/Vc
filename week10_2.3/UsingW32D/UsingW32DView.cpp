
// UsingW32DView.cpp : CUsingW32DView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingW32D.h"
#endif

#include "UsingW32DDoc.h"
#include "UsingW32DView.h"
#include "W32D.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsingW32DView

IMPLEMENT_DYNCREATE(CUsingW32DView, CView)

BEGIN_MESSAGE_MAP(CUsingW32DView, CView)
END_MESSAGE_MAP()

// CUsingW32DView 构造/析构

CUsingW32DView::CUsingW32DView()
{
	// TODO: 在此处添加构造代码

}

CUsingW32DView::~CUsingW32DView()
{
}

BOOL CUsingW32DView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingW32DView 绘制

void CUsingW32DView::OnDraw(CDC* pDC)
{
	CUsingW32DDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString ss;
	ss.Format(_T("从动态链接库返回:%d"),factorial(5));
	pDC->TextOutW(100, 150, ss);

	FAC A;
	CString s;
	s.Format(_T("从动态链接库返回:%f"), A.convert(30.0));
	pDC->TextOutW(100, 100, s);
}


// CUsingW32DView 诊断

#ifdef _DEBUG
void CUsingW32DView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingW32DView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingW32DDoc* CUsingW32DView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingW32DDoc)));
	return (CUsingW32DDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingW32DView 消息处理程序
