
// MFCApplication0406View.cpp : CMFCApplication0406View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication0406.h"
#endif

#include "MFCApplication0406Doc.h"
#include "MFCApplication0406View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0406View

IMPLEMENT_DYNCREATE(CMFCApplication0406View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0406View, CView)
	ON_COMMAND(ID_SHOWDlg, &CMFCApplication0406View::OnShowdlg)
END_MESSAGE_MAP()

// CMFCApplication0406View 构造/析构

CMFCApplication0406View::CMFCApplication0406View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication0406View::~CMFCApplication0406View()
{
}

BOOL CMFCApplication0406View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0406View 绘制

void CMFCApplication0406View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0406Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication0406View 诊断

#ifdef _DEBUG
void CMFCApplication0406View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0406View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0406Doc* CMFCApplication0406View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0406Doc)));
	return (CMFCApplication0406Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0406View 消息处理程序


void CMFCApplication0406View::OnShowdlg()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	CClientDC dc(this);
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		s.Format(_T("你已退出对话框"));
		dc.TextOutW(200, 200, s);
	}

}
