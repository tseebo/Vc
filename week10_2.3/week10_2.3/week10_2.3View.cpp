
// week10_2.3View.cpp : Cweek10_23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10_2.3.h"
#endif

#include "week10_2.3Doc.h"
#include "week10_2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10_23View

IMPLEMENT_DYNCREATE(Cweek10_23View, CView)

BEGIN_MESSAGE_MAP(Cweek10_23View, CView)
END_MESSAGE_MAP()

// Cweek10_23View ����/����

Cweek10_23View::Cweek10_23View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek10_23View::~Cweek10_23View()
{
}

BOOL Cweek10_23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek10_23View ����

void Cweek10_23View::OnDraw(CDC* /*pDC*/)
{
	Cweek10_23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek10_23View ���

#ifdef _DEBUG
void Cweek10_23View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10_23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10_23Doc* Cweek10_23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10_23Doc)));
	return (Cweek10_23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10_23View ��Ϣ�������
