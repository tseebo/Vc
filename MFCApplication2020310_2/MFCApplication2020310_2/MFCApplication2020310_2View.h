
// MFCApplication2020310_2View.h : CMFCApplication2020310_2View ��Ľӿ�
//

#pragma once


class CMFCApplication2020310_2View : public CView
{
protected: // �������л�����
	CMFCApplication2020310_2View();
	DECLARE_DYNCREATE(CMFCApplication2020310_2View)

// ����
public:
	CMFCApplication2020310_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication2020310_2View();
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

#ifndef _DEBUG  // MFCApplication2020310_2View.cpp �еĵ��԰汾
inline CMFCApplication2020310_2Doc* CMFCApplication2020310_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication2020310_2Doc*>(m_pDocument); }
#endif

