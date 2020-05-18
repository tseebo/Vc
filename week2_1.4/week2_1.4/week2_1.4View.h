
// week2_1.4View.h : Cweek2_14View 类的接口
//

#pragma once


class Cweek2_14View : public CView
{
protected: // 仅从序列化创建
	Cweek2_14View();
	DECLARE_DYNCREATE(Cweek2_14View)

// 特性
public:
	Cweek2_14Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek2_14View();
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

#ifndef _DEBUG  // week2_1.4View.cpp 中的调试版本
inline Cweek2_14Doc* Cweek2_14View::GetDocument() const
   { return reinterpret_cast<Cweek2_14Doc*>(m_pDocument); }
#endif

