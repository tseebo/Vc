
// MFCApplication20200324_3View.cpp : CMFCApplication20200324_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200324_3.h"
#endif

#include "MFCApplication20200324_3Doc.h"
#include "MFCApplication20200324_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200324_3View

IMPLEMENT_DYNCREATE(CMFCApplication20200324_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200324_3View, CView)
	ON_COMMAND(ID_line, &CMFCApplication20200324_3View::Online)
	ON_COMMAND(ID_rect, &CMFCApplication20200324_3View::Onrect)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_circle, &CMFCApplication20200324_3View::Oncircle)
END_MESSAGE_MAP()

// CMFCApplication20200324_3View 构造/析构

CMFCApplication20200324_3View::CMFCApplication20200324_3View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200324_3View::~CMFCApplication20200324_3View()
{
}

BOOL CMFCApplication20200324_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200324_3View 绘制

void CMFCApplication20200324_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200324_3View 诊断

#ifdef _DEBUG
void CMFCApplication20200324_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200324_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200324_3Doc* CMFCApplication20200324_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200324_3Doc)));
	return (CMFCApplication20200324_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200324_3View 消息处理程序

int flag;
void CMFCApplication20200324_3View::Online()
{
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	flag = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 40, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CMFCApplication20200324_3View::Onrect()
{
	// TODO: 在此添加命令处理程序代码
	flag = 2;
}

void CMFCApplication20200324_3View::Oncircle()
{
	// TODO: 在此添加命令处理程序代码
	flag = 3;
}



CPoint point1;
CPoint point2;
void CMFCApplication20200324_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	point1.x = point.x;
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


CRect cr;
void CMFCApplication20200324_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (flag) {
	case 1:
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
		break;
	case 2:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Rectangle(cr);
		break;
	case 3:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Ellipse(cr);
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}

