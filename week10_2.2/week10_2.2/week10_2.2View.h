
// week10_2.2View.h : Cweek10_22View ��Ľӿ�
//

#pragma once


class Cweek10_22View : public CView
{
protected: // �������л�����
	Cweek10_22View();
	DECLARE_DYNCREATE(Cweek10_22View)

// ����
public:
	Cweek10_22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek10_22View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10_2.2View.cpp �еĵ��԰汾
inline Cweek10_22Doc* Cweek10_22View::GetDocument() const
   { return reinterpret_cast<Cweek10_22Doc*>(m_pDocument); }
#endif

