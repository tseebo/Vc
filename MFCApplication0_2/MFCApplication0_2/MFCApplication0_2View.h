
// MFCApplication0_2View.h : CMFCApplication0_2View ��Ľӿ�
//

#pragma once


class CMFCApplication0_2View : public CView
{
protected: // �������л�����
	CMFCApplication0_2View();
	DECLARE_DYNCREATE(CMFCApplication0_2View)

// ����
public:
	CMFCApplication0_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication0_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication0_2View.cpp �еĵ��԰汾
inline CMFCApplication0_2Doc* CMFCApplication0_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0_2Doc*>(m_pDocument); }
#endif

