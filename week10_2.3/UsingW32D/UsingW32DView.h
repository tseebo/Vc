
// UsingW32DView.h : CUsingW32DView ��Ľӿ�
//

#pragma once


class CUsingW32DView : public CView
{
protected: // �������л�����
	CUsingW32DView();
	DECLARE_DYNCREATE(CUsingW32DView)

// ����
public:
	CUsingW32DDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingW32DView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingW32DView.cpp �еĵ��԰汾
inline CUsingW32DDoc* CUsingW32DView::GetDocument() const
   { return reinterpret_cast<CUsingW32DDoc*>(m_pDocument); }
#endif

