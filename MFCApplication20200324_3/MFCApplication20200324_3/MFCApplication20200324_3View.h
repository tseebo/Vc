
// MFCApplication20200324_3View.h : CMFCApplication20200324_3View ��Ľӿ�
//

#pragma once


class CMFCApplication20200324_3View : public CView
{
protected: // �������л�����
	CMFCApplication20200324_3View();
	DECLARE_DYNCREATE(CMFCApplication20200324_3View)

// ����
public:
	CMFCApplication20200324_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200324_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Online();
	afx_msg void Onrect();


	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void Oncircle();
};

#ifndef _DEBUG  // MFCApplication20200324_3View.cpp �еĵ��԰汾
inline CMFCApplication20200324_3Doc* CMFCApplication20200324_3View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200324_3Doc*>(m_pDocument); }
#endif

