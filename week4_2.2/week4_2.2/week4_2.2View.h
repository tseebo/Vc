
// week4_2.2View.h : Cweek4_22View ��Ľӿ�
//

#pragma once


class Cweek4_22View : public CView
{
protected: // �������л�����
	Cweek4_22View();
	DECLARE_DYNCREATE(Cweek4_22View)

// ����
public:
	Cweek4_22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek4_22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week4_2.2View.cpp �еĵ��԰汾
inline Cweek4_22Doc* Cweek4_22View::GetDocument() const
   { return reinterpret_cast<Cweek4_22Doc*>(m_pDocument); }
#endif

