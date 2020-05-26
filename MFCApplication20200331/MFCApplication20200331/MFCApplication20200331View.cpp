
// MFCApplication20200331View.cpp : CMFCApplication20200331View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200331.h"
#endif

#include "MFCApplication20200331Doc.h"
#include "MFCApplication20200331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200331View

IMPLEMENT_DYNCREATE(CMFCApplication20200331View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200331View, CView)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication20200331View ����/����

CMFCApplication20200331View::CMFCApplication20200331View()
{
	// TODO: �ڴ˴���ӹ������
	
	m_strLine="";

	m_ptOrigin.x=0;

	m_ptOrigin.y=0;
}

CMFCApplication20200331View::~CMFCApplication20200331View()
{
}

BOOL CMFCApplication20200331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200331View ����

void CMFCApplication20200331View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200331View ���

#ifdef _DEBUG
void CMFCApplication20200331View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200331Doc* CMFCApplication20200331View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200331Doc)));
	return (CMFCApplication20200331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200331View ��Ϣ�������


int CMFCApplication20200331View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	//CClientDC dc(this);
	//TEXTMETRIC tm;
	//dc.GetTextMetrics(&tm);
	//CreateSolidCaret(tm.tmAveCharWidth / 8, tm.tmHeight);
	//CreateSolidCaret(20, 100);
	//BOOL GetTextMetrics(LPTEXTMETRIC lpMetrics) const;
	//ShowCaret();
	return 0;
}



void CMFCApplication20200331View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CClientDC dc(this);
	SetCaretPos(point);
	m_strLine.Empty();
	m_ptOrigin = point;
	/*CRect cr;
	cr.top = point.x;
	cr.left = point.y;
	cr.bottom = point.y + 100;
	cr.right = point.x + 100;dc.Rectangle(&cr);*/
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication20200331View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	
	
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar)
	{
		m_strLine.Empty();
		m_ptOrigin.y += tm.tmHeight;
	}
	else if ( 0x08 == nChar)
	{
		dc.TextOutW(m_ptOrigin.x, m_ptOrigin.y, m_strLine);
		m_strLine = m_strLine.Left(m_strLine.GetLength() - 1);
	}
	else
	{
		m_strLine += char(nChar);
	}
	CSize sz = dc.GetTextExtent(m_strLine);
	CPoint pt;
	pt.x = m_ptOrigin.x + sz.cx;
	pt.y = m_ptOrigin.y;
	SetCaretPos(pt);

	dc.TextOutW(m_ptOrigin.x, m_ptOrigin.y, m_strLine);

	CView::OnChar(nChar, nRepCnt, nFlags);
}
