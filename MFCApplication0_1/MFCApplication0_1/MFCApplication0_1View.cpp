
// MFCApplication0_1View.cpp : CMFCApplication0_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication0_1.h"
#endif

#include "MFCApplication0_1Doc.h"
#include "MFCApplication0_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_1View

IMPLEMENT_DYNCREATE(CMFCApplication0_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_1View ����/����

CMFCApplication0_1View::CMFCApplication0_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication0_1View::~CMFCApplication0_1View()
{
}

BOOL CMFCApplication0_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_1View ����

void CMFCApplication0_1View::OnDraw(CDC* pDC)
{
	CMFCApplication0_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication0_1View ���

#ifdef _DEBUG
void CMFCApplication0_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_1Doc* CMFCApplication0_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_1Doc)));
	return (CMFCApplication0_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_1View ��Ϣ�������


void CMFCApplication0_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication0_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->str);
	CView::OnLButtonDown(nFlags, point);
}
