
// week12_2View.h : Cweek12_2View 类的接口
//

#pragma once

class Cweek12_2Set;

class Cweek12_2View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek12_2View();
	DECLARE_DYNCREATE(Cweek12_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK12_2_FORM };
#endif
	Cweek12_2Set* m_pSet;
	CString path;

// 特性
public:
	Cweek12_2Doc* GetDocument() const;
	void draw_pic(CString file);

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Cweek12_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString pic;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordLast();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // week12_2View.cpp 中的调试版本
inline Cweek12_2Doc* Cweek12_2View::GetDocument() const
   { return reinterpret_cast<Cweek12_2Doc*>(m_pDocument); }
#endif

