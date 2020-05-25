
// week9_1.1View.h : Cweek9_11View 类的接口
//

#pragma once


class Cweek9_11View : public CView
{
protected: // 仅从序列化创建
	Cweek9_11View();
	DECLARE_DYNCREATE(Cweek9_11View)

// 特性
public:
	Cweek9_11Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek9_11View();
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
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileSave();
};

#ifndef _DEBUG  // week9_1.1View.cpp 中的调试版本
inline Cweek9_11Doc* Cweek9_11View::GetDocument() const
   { return reinterpret_cast<Cweek9_11Doc*>(m_pDocument); }
#endif

