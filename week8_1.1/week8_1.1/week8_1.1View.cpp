
// week8_1.1View.cpp : Cweek8_11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week8_1.1.h"
#endif

#include "week8_1.1Doc.h"
#include "week8_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "MyDlg2.h"

// Cweek8_11View

IMPLEMENT_DYNCREATE(Cweek8_11View, CView)

BEGIN_MESSAGE_MAP(Cweek8_11View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cweek8_11View ����/����

Cweek8_11View::Cweek8_11View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek8_11View::~Cweek8_11View()
{
}

BOOL Cweek8_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek8_11View ����

void Cweek8_11View::OnDraw(CDC* /*pDC*/)
{
	Cweek8_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek8_11View ���

#ifdef _DEBUG
void Cweek8_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek8_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek8_11Doc* Cweek8_11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek8_11Doc)));
	return (Cweek8_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek8_11View ��Ϣ�������


void Cweek8_11View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//MyDlg2 md2;
	//int r = md2.DoModal();
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
	
		CString filename=cfd.GetFileName();
		dc.TextOutW(300, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
