
// MFCApplication20200413_2View.cpp : CMFCApplication20200413_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200413_2.h"
#endif

#include "MFCApplication20200413_2Doc.h"
#include "MFCApplication20200413_2View.h"
#include "MyDig.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200413_2View

IMPLEMENT_DYNCREATE(CMFCApplication20200413_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200413_2View, CView)
	ON_COMMAND(ID_calculate, &CMFCApplication20200413_2View::Oncalculate)
END_MESSAGE_MAP()

// CMFCApplication20200413_2View ����/����

CMFCApplication20200413_2View::CMFCApplication20200413_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200413_2View::~CMFCApplication20200413_2View()
{
}

BOOL CMFCApplication20200413_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200413_2View ����

void CMFCApplication20200413_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200413_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200413_2View ���

#ifdef _DEBUG
void CMFCApplication20200413_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200413_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200413_2Doc* CMFCApplication20200413_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200413_2Doc)));
	return (CMFCApplication20200413_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200413_2View ��Ϣ�������


void CMFCApplication20200413_2View::Oncalculate()
{
	// TODO: �ڴ���������������
	MyDig dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {

	}
}
