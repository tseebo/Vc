
// week10_2.1View.cpp : Cweek10_21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week10_2.1.h"
#endif

#include "week10_2.1Doc.h"
#include "week10_2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10_21View

IMPLEMENT_DYNCREATE(Cweek10_21View, CView)

BEGIN_MESSAGE_MAP(Cweek10_21View, CView)
END_MESSAGE_MAP()

// Cweek10_21View ����/����

Cweek10_21View::Cweek10_21View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek10_21View::~Cweek10_21View()
{
}

BOOL Cweek10_21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek10_21View ����

void Cweek10_21View::OnDraw(CDC* /*pDC*/)
{
	Cweek10_21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek10_21View ���

#ifdef _DEBUG
void Cweek10_21View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10_21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10_21Doc* Cweek10_21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10_21Doc)));
	return (Cweek10_21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10_21View ��Ϣ�������
