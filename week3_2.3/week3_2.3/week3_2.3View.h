
// week3_2.3View.h : Cweek3_23View ��Ľӿ�
//

#pragma once


class Cweek3_23View : public CView
{
protected: // �������л�����
	Cweek3_23View();
	DECLARE_DYNCREATE(Cweek3_23View)

// ����
public:
	Cweek3_23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek3_23View();
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

#ifndef _DEBUG  // week3_2.3View.cpp �еĵ��԰汾
inline Cweek3_23Doc* Cweek3_23View::GetDocument() const
   { return reinterpret_cast<Cweek3_23Doc*>(m_pDocument); }
#endif

