
// MFCApplication20200331View.cpp : CMFCApplication20200331View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200331.h"
#endif

#include "MFCApplication20200331Doc.h"
#include "MFCApplication20200331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200331View

IMPLEMENT_DYNCREATE(CMFCApplication20200331View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200331View, CView)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication20200331View 构造/析构

CMFCApplication20200331View::CMFCApplication20200331View()
{
	// TODO: 在此处添加构造代码
	
	m_strLine="";

	m_ptOrigin.x=0;

	m_ptOrigin.y=0;
}

CMFCApplication20200331View::~CMFCApplication20200331View()
{
}

BOOL CMFCApplication20200331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200331View 绘制

void CMFCApplication20200331View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200331View 诊断

#ifdef _DEBUG
void CMFCApplication20200331View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200331Doc* CMFCApplication20200331View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200331Doc)));
	return (CMFCApplication20200331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200331View 消息处理程序


int CMFCApplication20200331View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	//CClientDC dc(this);
	//TEXTMETRIC tm;
	//dc.GetTextMetrics(&tm);
	//CreateSolidCaret(tm.tmAveCharWidth / 8, tm.tmHeight);
	//CreateSolidCaret(20, 100);
	//BOOL GetTextMetrics(LPTEXTMETRIC lpMetrics) const;
	//ShowCaret();
	return 0;
}



void CMFCApplication20200331View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//CClientDC dc(this);
	SetCaretPos(point);
	m_strLine.Empty();
	m_ptOrigin = point;
	/*CRect cr;
	cr.top = point.x;
	cr.left = point.y;
	cr.bottom = point.y + 100;
	cr.right = point.x + 100;dc.Rectangle(&cr);*/
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication20200331View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	
	
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar)
	{
		m_strLine.Empty();
		m_ptOrigin.y += tm.tmHeight;
	}
	else if ( 0x08 == nChar)
	{
		dc.TextOutW(m_ptOrigin.x, m_ptOrigin.y, m_strLine);
		m_strLine = m_strLine.Left(m_strLine.GetLength() - 1);
	}
	else
	{
		m_strLine += char(nChar);
	}
	CSize sz = dc.GetTextExtent(m_strLine);
	CPoint pt;
	pt.x = m_ptOrigin.x + sz.cx;
	pt.y = m_ptOrigin.y;
	SetCaretPos(pt);

	dc.TextOutW(m_ptOrigin.x, m_ptOrigin.y, m_strLine);

	CView::OnChar(nChar, nRepCnt, nFlags);
}
