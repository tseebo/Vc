
// week2_1.2View.h : Cweek2_12View ��Ľӿ�
//

#pragma once


class Cweek2_12View : public CView
{
protected: // �������л�����
	Cweek2_12View();
	DECLARE_DYNCREATE(Cweek2_12View)

// ����
public:
	Cweek2_12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek2_12View();
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

#ifndef _DEBUG  // week2_1.2View.cpp �еĵ��԰汾
inline Cweek2_12Doc* Cweek2_12View::GetDocument() const
   { return reinterpret_cast<Cweek2_12Doc*>(m_pDocument); }
#endif

