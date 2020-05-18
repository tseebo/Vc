
// week8_1.1View.h : Cweek8_11View 类的接口
//

#pragma once


class Cweek8_11View : public CView
{
protected: // 仅从序列化创建
	Cweek8_11View();
	DECLARE_DYNCREATE(Cweek8_11View)

// 特性
public:
	Cweek8_11Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek8_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week8_1.1View.cpp 中的调试版本
inline Cweek8_11Doc* Cweek8_11View::GetDocument() const
   { return reinterpret_cast<Cweek8_11Doc*>(m_pDocument); }
#endif

