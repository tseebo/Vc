
// week9_1.1View.h : Cweek9_11View ��Ľӿ�
//

#pragma once


class Cweek9_11View : public CView
{
protected: // �������л�����
	Cweek9_11View();
	DECLARE_DYNCREATE(Cweek9_11View)

// ����
public:
	Cweek9_11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek9_11View();
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
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileSave();
};

#ifndef _DEBUG  // week9_1.1View.cpp �еĵ��԰汾
inline Cweek9_11Doc* Cweek9_11View::GetDocument() const
   { return reinterpret_cast<Cweek9_11Doc*>(m_pDocument); }
#endif

