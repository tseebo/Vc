
// UsingLib0DllView.h : CUsingLib0DllView 类的接口
//

#pragma once


class CUsingLib0DllView : public CView
{
protected: // 仅从序列化创建
	CUsingLib0DllView();
	DECLARE_DYNCREATE(CUsingLib0DllView)

// 特性
public:
	CUsingLib0DllDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingLib0DllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLib0DllView.cpp 中的调试版本
inline CUsingLib0DllDoc* CUsingLib0DllView::GetDocument() const
   { return reinterpret_cast<CUsingLib0DllDoc*>(m_pDocument); }
#endif

