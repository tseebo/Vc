
// MFCApplication0406_2View.h : CMFCApplication0406_2View ��Ľӿ�
//

#pragma once


class CMFCApplication0406_2View : public CView
{
protected: // �������л�����
	CMFCApplication0406_2View();
	DECLARE_DYNCREATE(CMFCApplication0406_2View)

// ����
public:
	CMFCApplication0406_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication0406_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnInput();
};

#ifndef _DEBUG  // MFCApplication0406_2View.cpp �еĵ��԰汾
inline CMFCApplication0406_2Doc* CMFCApplication0406_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0406_2Doc*>(m_pDocument); }
#endif

