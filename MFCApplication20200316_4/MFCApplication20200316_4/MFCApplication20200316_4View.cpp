
// MFCApplication20200316_4View.cpp : CMFCApplication20200316_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200316_4.h"
#endif

#include "MFCApplication20200316_4Doc.h"
#include "MFCApplication20200316_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200316_4View

IMPLEMENT_DYNCREATE(CMFCApplication20200316_4View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200316_4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCApplication20200316_4View ����/����

CMFCApplication20200316_4View::CMFCApplication20200316_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200316_4View::~CMFCApplication20200316_4View()
{
}

BOOL CMFCApplication20200316_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200316_4View ����

void CMFCApplication20200316_4View::OnDraw(CDC* pDC)
{
	CMFCApplication20200316_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
		if (pDoc->set) {
			int i = 1;
			SetTimer(1, rand()%100+100, NULL);
			pDoc->set = false;

		}
}


// CMFCApplication20200316_4View ���

#ifdef _DEBUG
void CMFCApplication20200316_4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200316_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200316_4Doc* CMFCApplication20200316_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200316_4Doc)));
	return (CMFCApplication20200316_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200316_4View ��Ϣ�������


void CMFCApplication20200316_4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int flag = 1;
	CMFCApplication20200316_4Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	int i = nIDEvent;
	
	if (flag == 1) {
		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
		Invalidate();
	}
	if (pDoc->cr.bottom >= rect.bottom)
		flag = 0;
	else if (flag == 0)
	{

	} {
		pDoc->cr.top -= 5;
		pDoc->cr.bottom -= 5;
		
	}CView::OnTimer(nIDEvent);
}