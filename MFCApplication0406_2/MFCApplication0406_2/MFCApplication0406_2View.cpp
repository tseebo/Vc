
// MFCApplication0406_2View.cpp : CMFCApplication0406_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication0406_2.h"
#endif

#include "MFCApplication0406_2Doc.h"
#include "MFCApplication0406_2View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0406_2View

IMPLEMENT_DYNCREATE(CMFCApplication0406_2View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0406_2View, CView)
	ON_COMMAND(ID_INPUT, &CMFCApplication0406_2View::OnInput)
END_MESSAGE_MAP()

// CMFCApplication0406_2View ����/����

CMFCApplication0406_2View::CMFCApplication0406_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication0406_2View::~CMFCApplication0406_2View()
{
}

BOOL CMFCApplication0406_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0406_2View ����

void CMFCApplication0406_2View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0406_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication0406_2View ���

#ifdef _DEBUG
void CMFCApplication0406_2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0406_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0406_2Doc* CMFCApplication0406_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0406_2Doc)));
	return (CMFCApplication0406_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0406_2View ��Ϣ�������


void CMFCApplication0406_2View::OnInput()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CString s1, s2, h1;
		s1 = dlg.str1;
		s2 = dlg.str2;
		h1.Format(_T("������ĵ�һ��Ϊ��%s,�ڶ���Ϊ��%s"), s2, s1);
		dc.TextOutW(100, 100, h1);
	}
}
