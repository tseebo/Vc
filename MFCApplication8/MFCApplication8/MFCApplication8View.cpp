
// MFCApplication8View.cpp : CMFCApplication8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication8.h"
#endif

#include "MFCApplication8Doc.h"
#include "MFCApplication8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication8View

IMPLEMENT_DYNCREATE(CMFCApplication8View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication8View, CView)
END_MESSAGE_MAP()

// CMFCApplication8View ����/����

CMFCApplication8View::CMFCApplication8View()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCApplication8View::~CMFCApplication8View()
{
}

BOOL CMFCApplication8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication8View ����

void CMFCApplication8View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication8View ���

#ifdef _DEBUG
void CMFCApplication8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication8Doc* CMFCApplication8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication8Doc)));
	return (CMFCApplication8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication8View ��Ϣ�������
