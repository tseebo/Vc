
// MFCApplication20200316_4Doc.cpp : CMFCApplication20200316_4Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication20200316_4.h"
#endif

#include "MFCApplication20200316_4Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFCApplication20200316_4Doc

IMPLEMENT_DYNCREATE(CMFCApplication20200316_4Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFCApplication20200316_4Doc, CDocument)
END_MESSAGE_MAP()


// CMFCApplication20200316_4Doc ����/����

CMFCApplication20200316_4Doc::CMFCApplication20200316_4Doc()
{
	// TODO: �ڴ�����һ���Թ������
	cr.left = 100; cr.top = 0; cr.right = 200; cr.bottom = 100;
	set = true;

}

CMFCApplication20200316_4Doc::~CMFCApplication20200316_4Doc()
{
}

BOOL CMFCApplication20200316_4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ��������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFCApplication20200316_4Doc ���л�

void CMFCApplication20200316_4Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ����Ӵ洢����
	}
	else
	{
		// TODO: �ڴ����Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMFCApplication20200316_4Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// �������������֧��
void CMFCApplication20200316_4Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFCApplication20200316_4Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMFCApplication20200316_4Doc ���

#ifdef _DEBUG
void CMFCApplication20200316_4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCApplication20200316_4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFCApplication20200316_4Doc ����