
// MFCApplication1_2View.cpp : CMFCApplication1_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1_2.h"
#endif

#include "MFCApplication1_2Doc.h"
#include "MFCApplication1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1_2View

IMPLEMENT_DYNCREATE(CMFCApplication1_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1_2View ����/����

CMFCApplication1_2View::CMFCApplication1_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication1_2View::~CMFCApplication1_2View()
{
}

BOOL CMFCApplication1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1_2View ����

void CMFCApplication1_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication1_2View ���

#ifdef _DEBUG
void CMFCApplication1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1_2Doc* CMFCApplication1_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1_2Doc)));
	return (CMFCApplication1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1_2View ��Ϣ�������


void CMFCApplication1_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication1_2Doc* pDoc = GetDocument(); 
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->S);
	CString s1;
	s1.Format(_T("%d"), pDoc->A);
	dc.TextOutW(point.x, point.y+50, s1);
	CView::OnLButtonDown(nFlags, point);
}
