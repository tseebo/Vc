
// week2_1.4View.cpp : Cweek2_14View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2_1.4.h"
#endif

#include "week2_1.4Doc.h"
#include "week2_1.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_14View

IMPLEMENT_DYNCREATE(Cweek2_14View, CView)

BEGIN_MESSAGE_MAP(Cweek2_14View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_14View ����/����

Cweek2_14View::Cweek2_14View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2_14View::~Cweek2_14View()
{
}

BOOL Cweek2_14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2_14View ����

void Cweek2_14View::OnDraw(CDC* pDC)
{
	Cweek2_14Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2_14View ���

#ifdef _DEBUG
void Cweek2_14View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_14View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_14Doc* Cweek2_14View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_14Doc)));
	return (Cweek2_14Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_14View ��Ϣ�������


void Cweek2_14View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDC *pDC = GetDC();
	CRect cr;
	this->GetClientRect(&cr);
	CBrush newBrush(RGB(0,100,50));
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);;
	CView::OnLButtonDown(nFlags, point);
}
