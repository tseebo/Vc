
// week2_1.1View.cpp : Cweek2_11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2_1.1.h"
#endif

#include "week2_1.1Doc.h"
#include "week2_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_11View

IMPLEMENT_DYNCREATE(Cweek2_11View, CView)

BEGIN_MESSAGE_MAP(Cweek2_11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_11View ����/����

Cweek2_11View::Cweek2_11View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2_11View::~Cweek2_11View()
{
}

BOOL Cweek2_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2_11View ����

void Cweek2_11View::OnDraw(CDC* pDC)
{
	Cweek2_11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2_11View ���

#ifdef _DEBUG
void Cweek2_11View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_11Doc* Cweek2_11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_11Doc)));
	return (Cweek2_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_11View ��Ϣ�������


void Cweek2_11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDC *pDC = GetDC();
	int a = 50; int b = 100;
	int r = rand() % (b - a) + a;
	pDC->Ellipse(point.x, point.y, point.x + r, point.y + r);

	CView::OnLButtonDown(nFlags, point);
}
