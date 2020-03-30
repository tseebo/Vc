
// MFCApplication20200324_3View.cpp : CMFCApplication20200324_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200324_3.h"
#endif

#include "MFCApplication20200324_3Doc.h"
#include "MFCApplication20200324_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200324_3View

IMPLEMENT_DYNCREATE(CMFCApplication20200324_3View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200324_3View, CView)
	ON_COMMAND(ID_line, &CMFCApplication20200324_3View::Online)
	ON_COMMAND(ID_rect, &CMFCApplication20200324_3View::Onrect)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_circle, &CMFCApplication20200324_3View::Oncircle)
END_MESSAGE_MAP()

// CMFCApplication20200324_3View ����/����

CMFCApplication20200324_3View::CMFCApplication20200324_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200324_3View::~CMFCApplication20200324_3View()
{
}

BOOL CMFCApplication20200324_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200324_3View ����

void CMFCApplication20200324_3View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200324_3View ���

#ifdef _DEBUG
void CMFCApplication20200324_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200324_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200324_3Doc* CMFCApplication20200324_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200324_3Doc)));
	return (CMFCApplication20200324_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200324_3View ��Ϣ�������

int flag;
void CMFCApplication20200324_3View::Online()
{
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	flag = 1;
	CPen pen(PS_SOLID, 5, RGB(0, 40, 0));
	CPen* oldPen = dc.SelectObject(&pen);
}


void CMFCApplication20200324_3View::Onrect()
{
	// TODO: �ڴ���������������
	flag = 2;
}

void CMFCApplication20200324_3View::Oncircle()
{
	// TODO: �ڴ���������������
	flag = 3;
}



CPoint point1;
CPoint point2;
void CMFCApplication20200324_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCApplication20200324_3Doc* pDoc = GetDocument();
	point1.x = point.x;
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


CRect cr;
void CMFCApplication20200324_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (flag) {
	case 1:
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
		break;
	case 2:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Rectangle(cr);
		break;
	case 3:
		cr.left = point1.x;
		cr.top = point1.y;
		cr.right = point2.x;
		cr.bottom = point2.y;
		dc.Ellipse(cr);
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}

