
// UsingLib0DllView.h : CUsingLib0DllView ��Ľӿ�
//

#pragma once


class CUsingLib0DllView : public CView
{
protected: // �������л�����
	CUsingLib0DllView();
	DECLARE_DYNCREATE(CUsingLib0DllView)

// ����
public:
	CUsingLib0DllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingLib0DllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLib0DllView.cpp �еĵ��԰汾
inline CUsingLib0DllDoc* CUsingLib0DllView::GetDocument() const
   { return reinterpret_cast<CUsingLib0DllDoc*>(m_pDocument); }
#endif

