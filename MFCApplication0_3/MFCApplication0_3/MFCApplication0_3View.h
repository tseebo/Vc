
// MFCApplication0_3View.h : CMFCApplication0_3View ��Ľӿ�
//

#pragma once


class CMFCApplication0_3View : public CView
{
protected: // �������л�����
	CMFCApplication0_3View();
	DECLARE_DYNCREATE(CMFCApplication0_3View)

// ����
public:
	CMFCApplication0_3Doc* GetDocument() const;

// ����
public:CString s1;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication0_3View();
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

#ifndef _DEBUG  // MFCApplication0_3View.cpp �еĵ��԰汾
inline CMFCApplication0_3Doc* CMFCApplication0_3View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0_3Doc*>(m_pDocument); }
#endif

