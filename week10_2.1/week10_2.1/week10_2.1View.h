
// week10_2.1View.h : Cweek10_21View 类的接口
//

#pragma once


class Cweek10_21View : public CView
{
protected: // 仅从序列化创建
	Cweek10_21View();
	DECLARE_DYNCREATE(Cweek10_21View)

// 特性
public:
	Cweek10_21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek10_21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10_2.1View.cpp 中的调试版本
inline Cweek10_21Doc* Cweek10_21View::GetDocument() const
   { return reinterpret_cast<Cweek10_21Doc*>(m_pDocument); }
#endif

