
// week5_1.1View.cpp : Cweek5_11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week5_1.1.h"
#endif

#include "week5_1.1Doc.h"
#include "week5_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek5_11View

IMPLEMENT_DYNCREATE(Cweek5_11View, CView)

BEGIN_MESSAGE_MAP(Cweek5_11View, CView)
	ON_COMMAND(ID_ELLIPSE_DRAWELLIPSE, &Cweek5_11View::OnEllipseDrawellipse)
END_MESSAGE_MAP()

// Cweek5_11View ����/����

Cweek5_11View::Cweek5_11View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek5_11View::~Cweek5_11View()
{
}

BOOL Cweek5_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek5_11View ����

void Cweek5_11View::OnDraw(CDC* pDC)
{
	Cweek5_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek5_11View ���

#ifdef _DEBUG
void Cweek5_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek5_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek5_11Doc* Cweek5_11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek5_11Doc)));
	return (Cweek5_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek5_11View ��Ϣ�������


void Cweek5_11View::OnEllipseDrawellipse()
{
	// TODO: �ڴ���������������
	Cweek5_11Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	CClientDC dc(this);
	int r = 10;
	for (int i = 0; i < 5; i++) 
	{
		
		dc.Ellipse(rect.left-r, rect.top-r, rect.right+r,rect.bottom+r);
		r -= 30;
	}
	//InvalidateRect(NULL, TRUE);


}
