
// week2_1.4View.h : Cweek2_14View ��Ľӿ�
//

#pragma once


class Cweek2_14View : public CView
{
protected: // �������л�����
	Cweek2_14View();
	DECLARE_DYNCREATE(Cweek2_14View)

// ����
public:
	Cweek2_14Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2_14View();
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

#ifndef _DEBUG  // week2_1.4View.cpp �еĵ��԰汾
inline Cweek2_14Doc* Cweek2_14View::GetDocument() const
   { return reinterpret_cast<Cweek2_14Doc*>(m_pDocument); }
#endif

