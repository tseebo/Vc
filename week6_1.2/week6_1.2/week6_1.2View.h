
// week6_1.2View.h : Cweek6_12View ��Ľӿ�
//

#pragma once


class Cweek6_12View : public CView
{
protected: // �������л�����
	Cweek6_12View();
	DECLARE_DYNCREATE(Cweek6_12View)

// ����
public:
	Cweek6_12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cweek6_12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // week6_1.2View.cpp �еĵ��԰汾
inline Cweek6_12Doc* Cweek6_12View::GetDocument() const
   { return reinterpret_cast<Cweek6_12Doc*>(m_pDocument); }
#endif

