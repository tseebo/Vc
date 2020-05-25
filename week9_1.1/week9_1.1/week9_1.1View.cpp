
// week9_1.1View.cpp : Cweek9_11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week9_1.1.h"
#endif

#include "week9_1.1Doc.h"
#include "week9_1.1View.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek9_11View

IMPLEMENT_DYNCREATE(Cweek9_11View, CView)

BEGIN_MESSAGE_MAP(Cweek9_11View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cweek9_11View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &Cweek9_11View::OnFileSaveAs)
	ON_COMMAND(ID_FILE_SAVE, &Cweek9_11View::OnFileSave)
END_MESSAGE_MAP()

// Cweek9_11View 构造/析构

Cweek9_11View::Cweek9_11View()
{
	// TODO: 在此处添加构造代码

}

Cweek9_11View::~Cweek9_11View()
{
}

BOOL Cweek9_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek9_11View 绘制

void Cweek9_11View::OnDraw(CDC* /*pDC*/)
{
	Cweek9_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweek9_11View 诊断

#ifdef _DEBUG
void Cweek9_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek9_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek9_11Doc* Cweek9_11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek9_11Doc)));
	return (Cweek9_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek9_11View 消息处理程序


void Cweek9_11View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if(r==IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		dc.TextOutW(100, 200, filename);
		/*string s;

		CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s)
		{
			dc.TextOutW(x, y, CString(s.c_str()));
			y += 30;
		}*/
	}
}


void Cweek9_11View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("abc.txt");
		//ofs << "ok" << endl;
		//CString s = cfd.GetPathName();
		//ofs << CT2A(s.GetString()) << endl;
	}

}


void Cweek9_11View::OnFileSave()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs("abc.txt");
		//ofs << "ok" << endl;
		//CString s = cfd.GetPathName();
		//ofs << CT2A(s.GetString()) << endl;
	}
}
