
// MFCApplication20200324_3View.h : CMFCApplication20200324_3View 类的接口
//

#pragma once


class CMFCApplication20200324_3View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication20200324_3View();
	DECLARE_DYNCREATE(CMFCApplication20200324_3View)

// 特性
public:
	CMFCApplication20200324_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication20200324_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Online();
	afx_msg void Onrect();


	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void Oncircle();
};

#ifndef _DEBUG  // MFCApplication20200324_3View.cpp 中的调试版本
inline CMFCApplication20200324_3Doc* CMFCApplication20200324_3View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200324_3Doc*>(m_pDocument); }
#endif

