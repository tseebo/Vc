
// MFCApplication20200316_4View.cpp : CMFCApplication20200316_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200316_4.h"
#endif

#include "MFCApplication20200316_4Doc.h"
#include "MFCApplication20200316_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200316_4View

IMPLEMENT_DYNCREATE(CMFCApplication20200316_4View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200316_4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCApplication20200316_4View 构造/析构

CMFCApplication20200316_4View::CMFCApplication20200316_4View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200316_4View::~CMFCApplication20200316_4View()
{
}

BOOL CMFCApplication20200316_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200316_4View 绘制

void CMFCApplication20200316_4View::OnDraw(CDC* pDC)
{
	CMFCApplication20200316_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->cr);
		if (pDoc->set) {
			int i = 1;
			SetTimer(1, rand()%100+100, NULL);
			pDoc->set = false;

		}
}


// CMFCApplication20200316_4View 诊断

#ifdef _DEBUG
void CMFCApplication20200316_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200316_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200316_4Doc* CMFCApplication20200316_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200316_4Doc)));
	return (CMFCApplication20200316_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200316_4View 消息处理程序


void CMFCApplication20200316_4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int flag = 1;
	CMFCApplication20200316_4Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	int i = nIDEvent;
	
	if (flag == 1) {
		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
		Invalidate();
	}
	if (pDoc->cr.bottom >= rect.bottom)
		flag = 0;
	else if (flag == 0)
	{

	} {
		pDoc->cr.top -= 5;
		pDoc->cr.bottom -= 5;
		
	}CView::OnTimer(nIDEvent);
}