
// week2_1.1View.h : Cweek2_11View ��Ľӿ�
//

#pragma once


class Cweek2_11View : public CView
{
protected: // �������л�����
	Cweek2_11View();
	DECLARE_DYNCREATE(Cweek2_11View)

// ����
public:
	Cweek2_11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2_11View();
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

#ifndef _DEBUG  // week2_1.1View.cpp �еĵ��԰汾
inline Cweek2_11Doc* Cweek2_11View::GetDocument() const
   { return reinterpret_cast<Cweek2_11Doc*>(m_pDocument); }
#endif

