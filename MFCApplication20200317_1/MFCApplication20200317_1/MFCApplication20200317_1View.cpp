
// MFCApplication20200317_1View.cpp : CMFCApplication20200317_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200317_1.h"
#endif

#include "MFCApplication20200317_1Doc.h"
#include "MFCApplication20200317_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200317_1View

IMPLEMENT_DYNCREATE(CMFCApplication20200317_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200317_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMFCApplication20200317_1View ����/����

CMFCApplication20200317_1View::CMFCApplication20200317_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200317_1View::~CMFCApplication20200317_1View()
{
}

BOOL CMFCApplication20200317_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200317_1View ����

void CMFCApplication20200317_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200317_1View ���

#ifdef _DEBUG
void CMFCApplication20200317_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200317_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200317_1Doc* CMFCApplication20200317_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200317_1Doc)));
	return (CMFCApplication20200317_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200317_1View ��Ϣ�������


void CMFCApplication20200317_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	pDoc->a = point.x;

	CView::OnLButtonDown(nFlags, point);
}




void CMFCApplication20200317_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	pDoc->b= point.x;
	CView::OnLButtonUp(nFlags, point);
}


void CMFCApplication20200317_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication20200317_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int i = abs(pDoc->b - pDoc->a);
	if (nFlags)
		pDoc->count = pDoc->count++;
	CString s;
	s.Format(_T("MouseMove������ %d �Σ������ƶ�%d�����ط���һ��"), pDoc->count, i);
	dc.TextOutW(300, 300, s);
	CView::OnMouseMove(nFlags, point);
}
