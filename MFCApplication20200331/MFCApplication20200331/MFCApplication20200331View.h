
// MFCApplication20200331View.h : CMFCApplication20200331View 类的接口
//

#pragma once


class CMFCApplication20200331View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication20200331View();
	DECLARE_DYNCREATE(CMFCApplication20200331View)

// 特性
public:
	CMFCApplication20200331Doc* GetDocument() const;

// 操作
public:CString m_strLine;

	   CPoint m_ptOrigin;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication20200331View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication20200331View.cpp 中的调试版本
inline CMFCApplication20200331Doc* CMFCApplication20200331View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200331Doc*>(m_pDocument); }
#endif

