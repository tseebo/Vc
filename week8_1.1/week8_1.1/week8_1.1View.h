
// week8_1.1View.h : Cweek8_11View ��Ľӿ�
//

#pragma once


class Cweek8_11View : public CView
{
protected: // �������л�����
	Cweek8_11View();
	DECLARE_DYNCREATE(Cweek8_11View)

// ����
public:
	Cweek8_11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek8_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8_1.1View.cpp �еĵ��԰汾
inline Cweek8_11Doc* Cweek8_11View::GetDocument() const
   { return reinterpret_cast<Cweek8_11Doc*>(m_pDocument); }
#endif

