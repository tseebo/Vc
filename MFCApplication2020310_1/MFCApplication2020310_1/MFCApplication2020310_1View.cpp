
// MFCApplication2020310_1View.cpp : CMFCApplication2020310_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication2020310_1.h"
#endif

#include "MFCApplication2020310_1Doc.h"
#include "MFCApplication2020310_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2020310_1View

IMPLEMENT_DYNCREATE(CMFCApplication2020310_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication2020310_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication2020310_1View ����/����

CMFCApplication2020310_1View::CMFCApplication2020310_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication2020310_1View::~CMFCApplication2020310_1View()
{
}

BOOL CMFCApplication2020310_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication2020310_1View ����

void CMFCApplication2020310_1View::OnDraw(CDC* pDC)
{
	CMFCApplication2020310_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CMFCApplication2020310_1View ���

#ifdef _DEBUG
void CMFCApplication2020310_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication2020310_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication2020310_1Doc* CMFCApplication2020310_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication2020310_1Doc)));
	return (CMFCApplication2020310_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication2020310_1View ��Ϣ�������


void CMFCApplication2020310_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString a = _T("�����������");
	CClientDC dc(this);
	dc.TextOutW(100, 200, a);

	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication2020310_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString b = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(100, 200, b);

	CView::OnLButtonUp(nFlags, point);
}
