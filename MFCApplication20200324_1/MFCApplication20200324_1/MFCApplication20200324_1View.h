
// MFCApplication20200324_1View.h : CMFCApplication20200324_1View ��Ľӿ�
//

#pragma once


class CMFCApplication20200324_1View : public CView
{
protected: // �������л�����
	CMFCApplication20200324_1View();
	DECLARE_DYNCREATE(CMFCApplication20200324_1View)

// ����
public:
	CMFCApplication20200324_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200324_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshowname();
};

#ifndef _DEBUG  // MFCApplication20200324_1View.cpp �еĵ��԰汾
inline CMFCApplication20200324_1Doc* CMFCApplication20200324_1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200324_1Doc*>(m_pDocument); }
#endif

