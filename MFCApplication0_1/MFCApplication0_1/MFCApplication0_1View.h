
// MFCApplication0_1View.h : CMFCApplication0_1View 类的接口
//

#pragma once


class CMFCApplication0_1View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication0_1View();
	DECLARE_DYNCREATE(CMFCApplication0_1View)

// 特性
public:
	CMFCApplication0_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication0_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication0_1View.cpp 中的调试版本
inline CMFCApplication0_1Doc* CMFCApplication0_1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0_1Doc*>(m_pDocument); }
#endif

