
// MFCApplication8View.h : CMFCApplication8View ��Ľӿ�
//

#pragma once


class CMFCApplication8View : public CView
{
protected: // �������л�����
	CMFCApplication8View();
	DECLARE_DYNCREATE(CMFCApplication8View)

// ����
public:
	CMFCApplication8Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCApplication8View.cpp �еĵ��԰汾
inline CMFCApplication8Doc* CMFCApplication8View::GetDocument() const
   { return reinterpret_cast<CMFCApplication8Doc*>(m_pDocument); }
#endif

