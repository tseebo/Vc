
// MFCApplication20200330_1View.h : CMFCApplication20200330_1View 类的接口
//

#pragma once


class CMFCApplication20200330_1View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication20200330_1View();
	DECLARE_DYNCREATE(CMFCApplication20200330_1View)

// 特性
public:
	CMFCApplication20200330_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication20200330_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCApplication20200330_1View.cpp 中的调试版本
inline CMFCApplication20200330_1Doc* CMFCApplication20200330_1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200330_1Doc*>(m_pDocument); }
#endif

