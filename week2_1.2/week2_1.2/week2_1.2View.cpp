
// week2_1.2View.cpp : Cweek2_12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2_1.2.h"
#endif

#include "week2_1.2Doc.h"
#include "week2_1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_12View

IMPLEMENT_DYNCREATE(Cweek2_12View, CView)

BEGIN_MESSAGE_MAP(Cweek2_12View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_12View ����/����

Cweek2_12View::Cweek2_12View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2_12View::~Cweek2_12View()
{
}

BOOL Cweek2_12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2_12View ����

void Cweek2_12View::OnDraw(CDC* pDC)
{
	Cweek2_12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//InvalidateRect(NULL, TRUE);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2_12View ���

#ifdef _DEBUG
void Cweek2_12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_12Doc* Cweek2_12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_12Doc)));
	return (Cweek2_12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_12View ��Ϣ�������


void Cweek2_12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDC *pDC = GetDC();
	int a = 50; int b = 100;
	int r = rand() % (b - a) + a;
	pDC->Ellipse(point.x-r, point.y-r, point.x + r, point.y + r);
	//Invalidate();
	
	CView::OnLButtonDown(nFlags, point);
}
