
// MFCApplication2020310_2View.cpp : CMFCApplication2020310_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2020310_2.h"
#endif

#include "MFCApplication2020310_2Doc.h"
#include "MFCApplication2020310_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2020310_2View

IMPLEMENT_DYNCREATE(CMFCApplication2020310_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication2020310_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication2020310_2View ����/����

CMFCApplication2020310_2View::CMFCApplication2020310_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication2020310_2View::~CMFCApplication2020310_2View()
{
}

BOOL CMFCApplication2020310_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication2020310_2View ����

void CMFCApplication2020310_2View::OnDraw(CDC* pDC)
{
	CMFCApplication2020310_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication2020310_2View ���

#ifdef _DEBUG
void CMFCApplication2020310_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication2020310_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication2020310_2Doc* CMFCApplication2020310_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication2020310_2Doc)));
	return (CMFCApplication2020310_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication2020310_2View ��Ϣ�������


void CMFCApplication2020310_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CMFCApplication2020310_2Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;
	
	s.Format(_T("%d + %d = %d"), a, b, a+b);
	CClientDC dc(this);
	
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
