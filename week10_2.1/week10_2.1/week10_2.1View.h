
// week10_2.1View.h : Cweek10_21View ��Ľӿ�
//

#pragma once


class Cweek10_21View : public CView
{
protected: // �������л�����
	Cweek10_21View();
	DECLARE_DYNCREATE(Cweek10_21View)

// ����
public:
	Cweek10_21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek10_21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10_2.1View.cpp �еĵ��԰汾
inline Cweek10_21Doc* Cweek10_21View::GetDocument() const
   { return reinterpret_cast<Cweek10_21Doc*>(m_pDocument); }
#endif

