
// MFCApplication20200324_2View.h : CMFCApplication20200324_2View 类的接口
//

#pragma once


class CMFCApplication20200324_2View : public CView
{
protected: // 仅从序列化创建
	CMFCApplication20200324_2View();
	DECLARE_DYNCREATE(CMFCApplication20200324_2View)

// 特性
public:
	CMFCApplication20200324_2Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCApplication20200324_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCApplication20200324_2View.cpp 中的调试版本
inline CMFCApplication20200324_2Doc* CMFCApplication20200324_2View::GetDocument() const
   { return reinterpret_cast<CMFCApplication20200324_2Doc*>(m_pDocument); }
#endif

