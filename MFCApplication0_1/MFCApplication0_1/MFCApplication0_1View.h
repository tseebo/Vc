
// MFCApplication0_1View.h : CMFCApplication0_1View ��Ľӿ�
//

#pragma once


class CMFCApplication0_1View : public CView
{
protected: // �������л�����
	CMFCApplication0_1View();
	DECLARE_DYNCREATE(CMFCApplication0_1View)

// ����
public:
	CMFCApplication0_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication0_1View();
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
};

#ifndef _DEBUG  // MFCApplication0_1View.cpp �еĵ��԰汾
inline CMFCApplication0_1Doc* CMFCApplication0_1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0_1Doc*>(m_pDocument); }
#endif

