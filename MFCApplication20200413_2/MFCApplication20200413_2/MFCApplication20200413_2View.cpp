
// MFCApplication20200413_2View.cpp : CMFCApplication20200413_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200413_2.h"
#endif

#include "MFCApplication20200413_2Doc.h"
#include "MFCApplication20200413_2View.h"
#include "MyDig.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200413_2View

IMPLEMENT_DYNCREATE(CMFCApplication20200413_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200413_2View, CView)
	ON_COMMAND(ID_calculate, &CMFCApplication20200413_2View::Oncalculate)
END_MESSAGE_MAP()

// CMFCApplication20200413_2View 构造/析构

CMFCApplication20200413_2View::CMFCApplication20200413_2View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200413_2View::~CMFCApplication20200413_2View()
{
}

BOOL CMFCApplication20200413_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200413_2View 绘制

void CMFCApplication20200413_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200413_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200413_2View 诊断

#ifdef _DEBUG
void CMFCApplication20200413_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200413_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200413_2Doc* CMFCApplication20200413_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200413_2Doc)));
	return (CMFCApplication20200413_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200413_2View 消息处理程序


void CMFCApplication20200413_2View::Oncalculate()
{
	// TODO: 在此添加命令处理程序代码
	MyDig dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {

	}
}
