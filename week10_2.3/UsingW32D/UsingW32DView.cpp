
// UsingW32DView.cpp : CUsingW32DView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingW32D.h"
#endif

#include "UsingW32DDoc.h"
#include "UsingW32DView.h"
#include "W32D.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsingW32DView

IMPLEMENT_DYNCREATE(CUsingW32DView, CView)

BEGIN_MESSAGE_MAP(CUsingW32DView, CView)
END_MESSAGE_MAP()

// CUsingW32DView ����/����

CUsingW32DView::CUsingW32DView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingW32DView::~CUsingW32DView()
{
}

BOOL CUsingW32DView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingW32DView ����

void CUsingW32DView::OnDraw(CDC* pDC)
{
	CUsingW32DDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString ss;
	ss.Format(_T("�Ӷ�̬���ӿⷵ��:%d"),factorial(5));
	pDC->TextOutW(100, 150, ss);

	FAC A;
	CString s;
	s.Format(_T("�Ӷ�̬���ӿⷵ��:%f"), A.convert(30.0));
	pDC->TextOutW(100, 100, s);
}


// CUsingW32DView ���

#ifdef _DEBUG
void CUsingW32DView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingW32DView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingW32DDoc* CUsingW32DView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingW32DDoc)));
	return (CUsingW32DDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingW32DView ��Ϣ�������
