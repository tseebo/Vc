
// MFCApplication0_2View.cpp : CMFCApplication0_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication0_2.h"
#endif

#include "MFCApplication0_2Doc.h"
#include "MFCApplication0_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0_2View

IMPLEMENT_DYNCREATE(CMFCApplication0_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication0_2View ����/����

CMFCApplication0_2View::CMFCApplication0_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication0_2View::~CMFCApplication0_2View()
{
}

BOOL CMFCApplication0_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0_2View ����

void CMFCApplication0_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication0_2View ���

#ifdef _DEBUG
void CMFCApplication0_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0_2Doc* CMFCApplication0_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0_2Doc)));
	return (CMFCApplication0_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0_2View ��Ϣ�������


void CMFCApplication0_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication0_2Doc* pDoc = GetDocument();
	pDoc->count=pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication0_2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication0_2Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("��������%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnRButtonDown(nFlags, point);
}
