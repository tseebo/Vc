
// MFCApplication20200324_1View.cpp : CMFCApplication20200324_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200324_1.h"
#endif

#include "MFCApplication20200324_1Doc.h"
#include "MFCApplication20200324_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication20200324_1View

IMPLEMENT_DYNCREATE(CMFCApplication20200324_1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication20200324_1View, CView)
	ON_COMMAND(ID_showname, &CMFCApplication20200324_1View::Onshowname)
END_MESSAGE_MAP()

// CMFCApplication20200324_1View ����/����

CMFCApplication20200324_1View::CMFCApplication20200324_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication20200324_1View::~CMFCApplication20200324_1View()
{
}

BOOL CMFCApplication20200324_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication20200324_1View ����

void CMFCApplication20200324_1View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication20200324_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication20200324_1View ���

#ifdef _DEBUG
void CMFCApplication20200324_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication20200324_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication20200324_1Doc* CMFCApplication20200324_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication20200324_1Doc)));
	return (CMFCApplication20200324_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication20200324_1View ��Ϣ�������


void CMFCApplication20200324_1View::Onshowname()
{
	// TODO: �ڴ���������������
	CString s;;
	s.Format(_T("�ҵ�����Ϊ������"));
	CClientDC dc(this);
	dc.TextOutW(450, 350, s);
}
