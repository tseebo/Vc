
// MFCApplication0406_2View.h : CMFCApplication0406_2View 类的接口
//

#pragma once


class CMFCApplication0406_2View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication0406_2View();
	DECLARE_DYNCREATE(CMFCApplication0406_2View)

// 特性
public:
	CMFCApplication0406_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication0406_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnInput();
};

#ifndef _DEBUG  // MFCApplication0406_2View.cpp 中的调试版本
inline CMFCApplication0406_2Doc* CMFCApplication0406_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication0406_2Doc*>(m_pDocument); }
#endif

