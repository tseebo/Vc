
// MFCApplication20200330_1View.cpp : CMFCApplication20200330_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMFCApplication20200330_1View ����/����

CMFCApplication20200330_1View::CMFCApplication20200330_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200330_1View::~CMFCApplication20200330_1View()
{
}

BOOL CMFCApplication20200330_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200330_1View ����

void CMFCApplication20200330_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200330_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200330_1View ���

#ifdef _DEBUG
void CMFCApplication20200330_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200330_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200330_1Doc* CMFCApplication20200330_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200330_1Doc)));
	return (CMFCApplication20200330_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200330_1View ��Ϣ�������


void CMFCApplication20200330_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
