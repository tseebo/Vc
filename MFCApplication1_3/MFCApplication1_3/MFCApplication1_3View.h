
// MFCApplication1_3View.h : CMFCApplication1_3View ��Ľӿ�
//

#pragma once


class CMFCApplication1_3View : public CView
{
protected: // �������л�����
	CMFCApplication1_3View();
	DECLARE_DYNCREATE(CMFCApplication1_3View)

// ����
public:
	CMFCApplication1_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication1_3View();
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

#ifndef _DEBUG  // MFCApplication1_3View.cpp �еĵ��԰汾
inline CMFCApplication1_3Doc* CMFCApplication1_3View::GetDocument() const
   { return reinterpret_cast<CMFCApplication1_3Doc*>(m_pDocument); }
#endif

