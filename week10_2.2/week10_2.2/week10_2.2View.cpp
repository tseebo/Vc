
// week10_2.2View.cpp : Cweek10_22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10_2.2.h"
#endif

#include "week10_2.2Doc.h"
#include "week10_2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10_22View

IMPLEMENT_DYNCREATE(Cweek10_22View, CView)

BEGIN_MESSAGE_MAP(Cweek10_22View, CView)
END_MESSAGE_MAP()

// Cweek10_22View ����/����

Cweek10_22View::Cweek10_22View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek10_22View::~Cweek10_22View()
{
}

BOOL Cweek10_22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek10_22View ����

void Cweek10_22View::OnDraw(CDC* /*pDC*/)
{
	Cweek10_22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek10_22View ���

#ifdef _DEBUG
void Cweek10_22View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10_22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10_22Doc* Cweek10_22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10_22Doc)));
	return (Cweek10_22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10_22View ��Ϣ�������
