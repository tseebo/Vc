
// MFCApplication2020316_1View.cpp : CMFCApplication2020316_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2020316_1.h"
#endif

#include "MFCApplication2020316_1Doc.h"
#include "MFCApplication2020316_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2020316_1View

IMPLEMENT_DYNCREATE(CMFCApplication2020316_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication2020316_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication2020316_1View ����/����

CMFCApplication2020316_1View::CMFCApplication2020316_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication2020316_1View::~CMFCApplication2020316_1View()
{
}

BOOL CMFCApplication2020316_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication2020316_1View ����

void CMFCApplication2020316_1View::OnDraw(CDC* pDC)
{
	CMFCApplication2020316_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication2020316_1View ���

#ifdef _DEBUG
void CMFCApplication2020316_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication2020316_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication2020316_1Doc* CMFCApplication2020316_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication2020316_1Doc)));
	return (CMFCApplication2020316_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication2020316_1View ��Ϣ�������

void CMFCApplication2020316_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CClientDC dc(this);
	s.Format(_T("X=%d, Y= %d"),point.x, point.y);
	dc.TextOut(200, 20, s);
	CView::OnMouseMove(nFlags, point);
}

void CMFCApplication2020316_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//SetCapture();
	CMFCApplication2020316_1Doc* pDoc = GetDocument();
	pDoc->cr.left = point.x;
	pDoc->cr.top = point.y;

	CView::OnLButtonDown(nFlags, point);
}




void CMFCApplication2020316_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//ReleaseCapture();
	CMFCApplication2020316_1Doc* pDoc = GetDocument();
	pDoc->cr.right = point.x;
	pDoc->cr. bottom= point.y;
	CClientDC dc(this);
	dc.Rectangle(pDoc->cr);
	CView::OnLButtonUp(nFlags, point);
}
