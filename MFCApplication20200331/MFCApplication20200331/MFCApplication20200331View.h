
// MFCApplication20200331View.h : CMFCApplication20200331View ��Ľӿ�
//

#pragma once


class CMFCApplication20200331View : public CView
{
protected: // �������л�����
	CMFCApplication20200331View();
	DECLARE_DYNCREATE(CMFCApplication20200331View)

// ����
public:
	CMFCApplication20200331Doc* GetDocument() const;

// ����
public:CString m_strLine;

	   CPoint m_ptOrigin;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200331View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication20200331View.cpp �еĵ��԰汾
inline CMFCApplication20200331Doc* CMFCApplication20200331View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200331Doc*>(m_pDocument); }
#endif

