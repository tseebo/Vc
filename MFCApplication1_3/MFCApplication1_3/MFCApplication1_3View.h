
// MFCApplication1_3View.h : CMFCApplication1_3View 类的接口
//

#pragma once


class CMFCApplication1_3View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication1_3View();
	DECLARE_DYNCREATE(CMFCApplication1_3View)

// 特性
public:
	CMFCApplication1_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication1_3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCApplication1_3View.cpp 中的调试版本
inline CMFCApplication1_3Doc* CMFCApplication1_3View::GetDocument() const
   { return reinterpret_cast<CMFCApplication1_3Doc*>(m_pDocument); }
#endif

