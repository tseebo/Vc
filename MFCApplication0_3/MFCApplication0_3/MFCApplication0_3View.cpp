
// MFCApplication0_3View.cpp : CMFCApplication0_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication0_3.h"
#endif

#include "MFCApplication0_3Doc.h"
#include "MFCApplication0_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_3View

IMPLEMENT_DYNCREATE(CMFCApplication0_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_3View ����/����

CMFCApplication0_3View::CMFCApplication0_3View()
{
	// TODO: �ڴ˴���ӹ������
	s1 = "view��";
}

CMFCApplication0_3View::~CMFCApplication0_3View()
{
}

BOOL CMFCApplication0_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_3View ����

void CMFCApplication0_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication0_3View ���

#ifdef _DEBUG
void CMFCApplication0_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_3Doc* CMFCApplication0_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_3Doc)));
	return (CMFCApplication0_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_3View ��Ϣ�������


void CMFCApplication0_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication0_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s1 + pDoc->s2);
	CView::OnLButtonDown(nFlags, point);
}
