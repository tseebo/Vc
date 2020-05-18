
// week6_1.2View.cpp : Cweek6_12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "week6_1.2.h"
#endif

#include "week6_1.2Doc.h"
#include "week6_1.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek6_12View

IMPLEMENT_DYNCREATE(Cweek6_12View, CView)

BEGIN_MESSAGE_MAP(Cweek6_12View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &Cweek6_12View::OnFileOpen)
END_MESSAGE_MAP()

// Cweek6_12View ����/����

Cweek6_12View::Cweek6_12View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweek6_12View::~Cweek6_12View()
{
}

BOOL Cweek6_12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweek6_12View ����

void Cweek6_12View::OnDraw(CDC* /*pDC*/)
{
	Cweek6_12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweek6_12View ��ӡ

BOOL Cweek6_12View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cweek6_12View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cweek6_12View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cweek6_12View ���

#ifdef _DEBUG
void Cweek6_12View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek6_12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek6_12Doc* Cweek6_12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek6_12Doc)));
	return (Cweek6_12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek6_12View ��Ϣ�������


void Cweek6_12View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect cr;
	int x; int y;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&cr);
		x = (cr.Width() - img.GetWidth()) / 2;
		y = (cr.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, x, y, img.GetWidth(), img.GetHeight());
		Invalidate();
		//dc.TextOutW(500, 100, filename);
	}
}
