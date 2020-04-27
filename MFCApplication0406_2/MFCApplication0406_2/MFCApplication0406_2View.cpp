
// MFCApplication0406_2View.cpp : CMFCApplication0406_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication0406_2.h"
#endif

#include "MFCApplication0406_2Doc.h"
#include "MFCApplication0406_2View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0406_2View

IMPLEMENT_DYNCREATE(CMFCApplication0406_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0406_2View, CView)
	ON_COMMAND(ID_INPUT, &CMFCApplication0406_2View::OnInput)
END_MESSAGE_MAP()

// CMFCApplication0406_2View 构造/析构

CMFCApplication0406_2View::CMFCApplication0406_2View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication0406_2View::~CMFCApplication0406_2View()
{
}

BOOL CMFCApplication0406_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0406_2View 绘制

void CMFCApplication0406_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0406_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCApplication0406_2View 诊断

#ifdef _DEBUG
void CMFCApplication0406_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0406_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0406_2Doc* CMFCApplication0406_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0406_2Doc)));
	return (CMFCApplication0406_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0406_2View 消息处理程序


void CMFCApplication0406_2View::OnInput()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString s1, s2, h1;
		s1 = dlg.str1;
		s2 = dlg.str2;
		h1.Format(_T("交换后的第一个为：%s,第二个为：%s"), s2, s1);
		dc.TextOutW(100, 100, h1);
	}
}
