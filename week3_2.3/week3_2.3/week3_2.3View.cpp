
// week3_2.3View.cpp : Cweek3_23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week3_2.3.h"
#endif

#include "week3_2.3Doc.h"
#include "week3_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek3_23View

IMPLEMENT_DYNCREATE(Cweek3_23View, CView)

BEGIN_MESSAGE_MAP(Cweek3_23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek3_23View ����/����

Cweek3_23View::Cweek3_23View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek3_23View::~Cweek3_23View()
{
}

BOOL Cweek3_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek3_23View ����

void Cweek3_23View::OnDraw(CDC* /*pDC*/)
{
	Cweek3_23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect A(100, 100, 150,150);
	dc.Rectangle(A);
	CRect B(300, 100, 350, 150);
	dc.Rectangle(B);
	CRect	C(500, 100, 550, 150);
	dc.Rectangle(C);

	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek3_23View ���

#ifdef _DEBUG
void Cweek3_23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek3_23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek3_23Doc* Cweek3_23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek3_23Doc)));
	return (Cweek3_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek3_23View ��Ϣ�������


void Cweek3_23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek3_23Doc* pDoc = GetDocument();
	CString s1,s2;
	
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	CClientDC dc(this);
	if (point.x > 100 & point.x < 150 && point.y>100 & point.y < 150)
	{ 
		dc.TextOutW(point.x, point.y, s1);
	}
		
	 else if (point.x > 300 & point.x < 350 && point.y>100 & point.y < 150)
	{
		dc.TextOutW(point.x, point.y, s2);
	}

	else if (!(point.x > 100 & point.x < 150 && point.y>100 & point.y < 150))
	{
		dc.TextOutW(point.x, point.y, _T("�����Ч"));
	}

	CView::OnLButtonDown(nFlags, point);
}


void Cweek3_23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cweek3_23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s3;
	s3.Format(_T("%d"), pDoc->a+pDoc->b);
	if (point.x > 500 & point.x < 550 && point.y>100 & point.y < 150)
	{
		dc.TextOutW(point.x, point.y, s3);
	}
	CView::OnRButtonDown(nFlags, point);
}
