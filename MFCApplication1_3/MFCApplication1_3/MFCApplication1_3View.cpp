
// MFCApplication1_3View.cpp : CMFCApplication1_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1_3.h"
#endif

#include "MFCApplication1_3Doc.h"
#include "MFCApplication1_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1_3View

IMPLEMENT_DYNCREATE(CMFCApplication1_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1_3View ����/����

CMFCApplication1_3View::CMFCApplication1_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication1_3View::~CMFCApplication1_3View()
{
}

BOOL CMFCApplication1_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1_3View ����

void CMFCApplication1_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication1_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication1_3View ���

#ifdef _DEBUG
void CMFCApplication1_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1_3Doc* CMFCApplication1_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1_3Doc)));
	return (CMFCApplication1_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1_3View ��Ϣ�������


void CMFCApplication1_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication1_3Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}



void CMFCApplication1_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication1_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString S;
	S.Format(_T("%d"), pDoc->count);
	dc.TextOutW(point.x, point.y, S);
	CView::OnRButtonDown(nFlags, point);
}
