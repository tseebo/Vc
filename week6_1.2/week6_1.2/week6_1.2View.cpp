
// week6_1.2View.cpp : Cweek6_12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week6_1.2.h"
#endif

#include "week6_1.2Doc.h"
#include "week6_1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek6_12View

IMPLEMENT_DYNCREATE(Cweek6_12View, CView)

BEGIN_MESSAGE_MAP(Cweek6_12View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &Cweek6_12View::OnFileOpen)
END_MESSAGE_MAP()

// Cweek6_12View 构造/析构

Cweek6_12View::Cweek6_12View()
{
	// TODO: 在此处添加构造代码

}

Cweek6_12View::~Cweek6_12View()
{
}

BOOL Cweek6_12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek6_12View 绘制

void Cweek6_12View::OnDraw(CDC* /*pDC*/)
{
	Cweek6_12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek6_12View 打印

BOOL Cweek6_12View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Cweek6_12View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void Cweek6_12View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// Cweek6_12View 诊断

#ifdef _DEBUG
void Cweek6_12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek6_12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek6_12Doc* Cweek6_12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek6_12Doc)));
	return (Cweek6_12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek6_12View 消息处理程序


void Cweek6_12View::OnFileOpen()
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
		Invalidate();
		//dc.TextOutW(500, 100, filename);
	}
}
