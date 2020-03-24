
// MFCApplication20200324_1View.cpp : CMFCApplication20200324_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication20200324_1.h"
#endif

#include "MFCApplication20200324_1Doc.h"
#include "MFCApplication20200324_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200324_1View

IMPLEMENT_DYNCREATE(CMFCApplication20200324_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200324_1View, CView)
	ON_COMMAND(ID_showname, &CMFCApplication20200324_1View::Onshowname)
END_MESSAGE_MAP()

// CMFCApplication20200324_1View 构造/析构

CMFCApplication20200324_1View::CMFCApplication20200324_1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication20200324_1View::~CMFCApplication20200324_1View()
{
}

BOOL CMFCApplication20200324_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200324_1View 绘制

void CMFCApplication20200324_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200324_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication20200324_1View 诊断

#ifdef _DEBUG
void CMFCApplication20200324_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200324_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200324_1Doc* CMFCApplication20200324_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200324_1Doc)));
	return (CMFCApplication20200324_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200324_1View 消息处理程序


void CMFCApplication20200324_1View::Onshowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s;;
	s.Format(_T("我的名字为马欣仪"));
	CClientDC dc(this);
	dc.TextOutW(450, 350, s);
}
