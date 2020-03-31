
// MFCApplication20200330_1View.cpp : CMFCApplication20200330_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200330_1.h"
#endif

#include "MFCApplication20200330_1Doc.h"
#include "MFCApplication20200330_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200330_1View

IMPLEMENT_DYNCREATE(CMFCApplication20200330_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200330_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMFCApplication20200330_1View::OnFileOpen)
END_MESSAGE_MAP()

// CMFCApplication20200330_1View 构造/析构

CMFCApplication20200330_1View::CMFCApplication20200330_1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200330_1View::~CMFCApplication20200330_1View()
{
}

BOOL CMFCApplication20200330_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200330_1View 绘制

void CMFCApplication20200330_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200330_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200330_1View 诊断

#ifdef _DEBUG
void CMFCApplication20200330_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200330_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200330_1Doc* CMFCApplication20200330_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200330_1Doc)));
	return (CMFCApplication20200330_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200330_1View 消息处理程序


void CMFCApplication20200330_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect cr;
	int x; int y;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&cr);
		x = (cr.Width() - img.GetWidth()) / 2;
		y = (cr.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, x, y, img.GetWidth(), img.GetHeight());
		dc.TextOutW(500, 100, filename);
	}
}
