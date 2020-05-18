
// week6_1.2View.h : Cweek6_12View 类的接口
//

#pragma once


class Cweek6_12View : public CView
{
protected: // 仅从序列化创建
	Cweek6_12View();
	DECLARE_DYNCREATE(Cweek6_12View)

// 特性
public:
	Cweek6_12Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cweek6_12View();
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

#ifndef _DEBUG  // week6_1.2View.cpp 中的调试版本
inline Cweek6_12Doc* Cweek6_12View::GetDocument() const
   { return reinterpret_cast<Cweek6_12Doc*>(m_pDocument); }
#endif

