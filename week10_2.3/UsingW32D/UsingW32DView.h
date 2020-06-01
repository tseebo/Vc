
// UsingW32DView.h : CUsingW32DView 类的接口
//

#pragma once


class CUsingW32DView : public CView
{
protected: // 仅从序列化创建
	CUsingW32DView();
	DECLARE_DYNCREATE(CUsingW32DView)

// 特性
public:
	CUsingW32DDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingW32DView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingW32DView.cpp 中的调试版本
inline CUsingW32DDoc* CUsingW32DView::GetDocument() const
   { return reinterpret_cast<CUsingW32DDoc*>(m_pDocument); }
#endif

