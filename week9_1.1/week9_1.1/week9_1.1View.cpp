
// week9_1.1View.cpp : Cweek9_11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// Cweek9_11View ����/����

Cweek9_11View::Cweek9_11View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek9_11View::~Cweek9_11View()
{
}

BOOL Cweek9_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek9_11View ����

void Cweek9_11View::OnDraw(CDC* /*pDC*/)
{
	Cweek9_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek9_11View ���

#ifdef _DEBUG
void Cweek9_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek9_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek9_11Doc* Cweek9_11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek9_11Doc)));
	return (Cweek9_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek9_11View ��Ϣ�������


void Cweek9_11View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
