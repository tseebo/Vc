
// week5_1.1View.h : Cweek5_11View ��Ľӿ�
//

#pragma once


class Cweek5_11View : public CView
{
protected: // �������л�����
	Cweek5_11View();
	DECLARE_DYNCREATE(Cweek5_11View)

// ����
public:
	Cweek5_11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek5_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipseDrawellipse();
};

#ifndef _DEBUG  // week5_1.1View.cpp �еĵ��԰汾
inline Cweek5_11Doc* Cweek5_11View::GetDocument() const
   { return reinterpret_cast<Cweek5_11Doc*>(m_pDocument); }
#endif

