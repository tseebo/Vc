
// week2_1.3View.cpp : Cweek2_13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week2_1.3.h"
#endif

#include "week2_1.3Doc.h"
#include "week2_1.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek2_13View

IMPLEMENT_DYNCREATE(Cweek2_13View, CView)

BEGIN_MESSAGE_MAP(Cweek2_13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cweek2_13View ����/����

Cweek2_13View::Cweek2_13View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek2_13View::~Cweek2_13View()
{
}

BOOL Cweek2_13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek2_13View ����

void Cweek2_13View::OnDraw(CDC* /*pDC*/)
{
	Cweek2_13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek2_13View ���

#ifdef _DEBUG
void Cweek2_13View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek2_13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek2_13Doc* Cweek2_13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek2_13Doc)));
	return (Cweek2_13Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek2_13View ��Ϣ�������


void Cweek2_13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	
	CView::OnLButtonDown(nFlags, point);
}
