
// MFCApplication20200324_2View.h : CMFCApplication20200324_2View ��Ľӿ�
//

#pragma once


class CMFCApplication20200324_2View : public CView
{
protected: // �������л�����
	CMFCApplication20200324_2View();
	DECLARE_DYNCREATE(CMFCApplication20200324_2View)

// ����
public:
	CMFCApplication20200324_2Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCApplication20200324_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCApplication20200324_2View.cpp �еĵ��԰汾
inline CMFCApplication20200324_2Doc* CMFCApplication20200324_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200324_2Doc*>(m_pDocument); }
#endif

