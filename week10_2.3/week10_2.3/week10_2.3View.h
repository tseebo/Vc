
// week10_2.3View.h : Cweek10_23View ��Ľӿ�
//

#pragma once


class Cweek10_23View : public CView
{
protected: // �������л�����
	Cweek10_23View();
	DECLARE_DYNCREATE(Cweek10_23View)

// ����
public:
	Cweek10_23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek10_23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10_2.3View.cpp �еĵ��԰汾
inline Cweek10_23Doc* Cweek10_23View::GetDocument() const
   { return reinterpret_cast<Cweek10_23Doc*>(m_pDocument); }
#endif

