
// week10_2.3View.h : Cweek10_23View 类的接口
//

#pragma once


class Cweek10_23View : public CView
{
protected: // 仅从序列化创建
	Cweek10_23View();
	DECLARE_DYNCREATE(Cweek10_23View)

// 特性
public:
	Cweek10_23Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek10_23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10_2.3View.cpp 中的调试版本
inline Cweek10_23Doc* Cweek10_23View::GetDocument() const
   { return reinterpret_cast<Cweek10_23Doc*>(m_pDocument); }
#endif

