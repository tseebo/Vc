
// MFCApplication20200316_4View.h : CMFCApplication20200316_4View ��Ľӿ�
//

#pragma once


class CMFCApplication20200316_4View : public CView
{
protected: // �������л�����
	CMFCApplication20200316_4View();
	DECLARE_DYNCREATE(CMFCApplication20200316_4View)

// ����
public:
	CMFCApplication20200316_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200316_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCApplication20200316_4View.cpp �еĵ��԰汾
inline CMFCApplication20200316_4Doc* CMFCApplication20200316_4View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200316_4Doc*>(m_pDocument); }
#endif

