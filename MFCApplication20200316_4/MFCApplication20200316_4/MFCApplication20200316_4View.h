
// MFCApplication20200316_4View.h : CMFCApplication20200316_4View 类的接口
//

#pragma once


class CMFCApplication20200316_4View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication20200316_4View();
	DECLARE_DYNCREATE(CMFCApplication20200316_4View)

// 特性
public:
	CMFCApplication20200316_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication20200316_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCApplication20200316_4View.cpp 中的调试版本
inline CMFCApplication20200316_4Doc* CMFCApplication20200316_4View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200316_4Doc*>(m_pDocument); }
#endif

