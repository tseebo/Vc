
// MFCApplication20200413_2View.h : CMFCApplication20200413_2View ��Ľӿ�
//

#pragma once


class CMFCApplication20200413_2View : public CView
{
protected: // �������л�����
	CMFCApplication20200413_2View();
	DECLARE_DYNCREATE(CMFCApplication20200413_2View)

// ����
public:
	CMFCApplication20200413_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200413_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Oncalculate();
};

#ifndef _DEBUG  // MFCApplication20200413_2View.cpp �еĵ��԰汾
inline CMFCApplication20200413_2Doc* CMFCApplication20200413_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200413_2Doc*>(m_pDocument); }
#endif

