
// MFCApplication0406View.cpp : CMFCApplication0406View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication0406.h"
#endif

#include "MFCApplication0406Doc.h"
#include "MFCApplication0406View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication0406View

IMPLEMENT_DYNCREATE(CMFCApplication0406View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication0406View, CView)
	ON_COMMAND(ID_SHOWDlg, &CMFCApplication0406View::OnShowdlg)
END_MESSAGE_MAP()

// CMFCApplication0406View ����/����

CMFCApplication0406View::CMFCApplication0406View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication0406View::~CMFCApplication0406View()
{
}

BOOL CMFCApplication0406View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication0406View ����

void CMFCApplication0406View::OnDraw(CDC* /*pDC*/)
{
	CMFCApplication0406Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCApplication0406View ���

#ifdef _DEBUG
void CMFCApplication0406View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication0406View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication0406Doc* CMFCApplication0406View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication0406Doc)));
	return (CMFCApplication0406Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication0406View ��Ϣ�������


void CMFCApplication0406View::OnShowdlg()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		s.Format(_T("�����˳��Ի���"));
		dc.TextOutW(200, 200, s);
	}

}
