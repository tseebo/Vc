
// week5_1.1View.h : Cweek5_11View 类的接口
//

#pragma once


class Cweek5_11View : public CView
{
protected: // 仅从序列化创建
	Cweek5_11View();
	DECLARE_DYNCREATE(Cweek5_11View)

// 特性
public:
	Cweek5_11Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek5_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipseDrawellipse();
};

#ifndef _DEBUG  // week5_1.1View.cpp 中的调试版本
inline Cweek5_11Doc* Cweek5_11View::GetDocument() const
   { return reinterpret_cast<Cweek5_11Doc*>(m_pDocument); }
#endif

