
// UsingLib0DllView.cpp : CUsingLib0DllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLib0Dll.h"
#endif

#include "UsingLib0DllDoc.h"
#include "UsingLib0DllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include "win32.h"

// CUsingLib0DllView

IMPLEMENT_DYNCREATE(CUsingLib0DllView, CView)

BEGIN_MESSAGE_MAP(CUsingLib0DllView, CView)
END_MESSAGE_MAP()

// CUsingLib0DllView ����/����

CUsingLib0DllView::CUsingLib0DllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLib0DllView::~CUsingLib0DllView()
{
}

BOOL CUsingLib0DllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLib0DllView ����

void CUsingLib0DllView::OnDraw(CDC* pDC)
{
	CUsingLib0DllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format( _T("%d" ), factorial(5));
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);

}


// CUsingLib0DllView ���

#ifdef _DEBUG
void CUsingLib0DllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLib0DllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLib0DllDoc* CUsingLib0DllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLib0DllDoc)));
	return (CUsingLib0DllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLib0DllView ��Ϣ�������
