
// MFCApplication20200330_1View.h : CMFCApplication20200330_1View ��Ľӿ�
//

#pragma once


class CMFCApplication20200330_1View : public CView
{
protected: // �������л�����
	CMFCApplication20200330_1View();
	DECLARE_DYNCREATE(CMFCApplication20200330_1View)

// ����
public:
	CMFCApplication20200330_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200330_1View();
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

#ifndef _DEBUG  // MFCApplication20200330_1View.cpp �еĵ��԰汾
inline CMFCApplication20200330_1Doc* CMFCApplication20200330_1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200330_1Doc*>(m_pDocument); }
#endif
