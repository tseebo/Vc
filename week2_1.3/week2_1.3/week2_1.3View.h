
// week2_1.3View.h : Cweek2_13View ��Ľӿ�
//

#pragma once


class Cweek2_13View : public CView
{
protected: // �������л�����
	Cweek2_13View();
	DECLARE_DYNCREATE(Cweek2_13View)

// ����
public:
	Cweek2_13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2_13View();
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

#ifndef _DEBUG  // week2_1.3View.cpp �еĵ��԰汾
inline Cweek2_13Doc* Cweek2_13View::GetDocument() const
   { return reinterpret_cast<Cweek2_13Doc*>(m_pDocument); }
#endif

