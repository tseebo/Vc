
// MFCApplication20200324_2View.cpp : CMFCApplication20200324_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200324_2.h"
#endif

#include "MFCApplication20200324_2Doc.h"
#include "MFCApplication20200324_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200324_2View

IMPLEMENT_DYNCREATE(CMFCApplication20200324_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200324_2View, CView)
END_MESSAGE_MAP()

// CMFCApplication20200324_2View ����/����

CMFCApplication20200324_2View::CMFCApplication20200324_2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CMFCApplication20200324_2View::~CMFCApplication20200324_2View()
{
}

BOOL CMFCApplication20200324_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200324_2View ����

void CMFCApplication20200324_2View::OnDraw(CDC* pDC)
{
	CMFCApplication20200324_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}



// CMFCApplication20200324_2View ���

#ifdef _DEBUG
void CMFCApplication20200324_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200324_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200324_2Doc* CMFCApplication20200324_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200324_2Doc)));
	return (CMFCApplication20200324_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200324_2View ��Ϣ�������
