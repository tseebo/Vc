
// MFCApplication0406View.h : CMFCApplication0406View ��Ľӿ�
//

#pragma once


class CMFCApplication0406View : public CView
{
protected: // �������л�����
	CMFCApplication0406View();
	DECLARE_DYNCREATE(CMFCApplication0406View)

// ����
public:
	CMFCApplication0406Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication0406View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
};

#ifndef _DEBUG  // MFCApplication0406View.cpp �еĵ��԰汾
inline CMFCApplication0406Doc* CMFCApplication0406View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0406Doc*>(m_pDocument); }
#endif

