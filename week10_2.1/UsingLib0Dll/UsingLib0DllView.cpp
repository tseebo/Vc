
// UsingLib0DllView.cpp : CUsingLib0DllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingLib0Dll.h"
#endif

#include "UsingLib0DllDoc.h"
#include "UsingLib0DllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "win32.h"

// CUsingLib0DllView

IMPLEMENT_DYNCREATE(CUsingLib0DllView, CView)

BEGIN_MESSAGE_MAP(CUsingLib0DllView, CView)
END_MESSAGE_MAP()

// CUsingLib0DllView 构造/析构

CUsingLib0DllView::CUsingLib0DllView()
{
	// TODO: 在此处添加构造代码

}

CUsingLib0DllView::~CUsingLib0DllView()
{
}

BOOL CUsingLib0DllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingLib0DllView 绘制

void CUsingLib0DllView::OnDraw(CDC* pDC)
{
	CUsingLib0DllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format( _T("%d" ), factorial(5));
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);

}


// CUsingLib0DllView 诊断

#ifdef _DEBUG
void CUsingLib0DllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLib0DllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLib0DllDoc* CUsingLib0DllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLib0DllDoc)));
	return (CUsingLib0DllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLib0DllView 消息处理程序
