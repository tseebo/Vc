
// week13_2View.h : Cweek13_2View 类的接口
//

#pragma once

class Cweek13_2Set;

class Cweek13_2View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek13_2View();
	DECLARE_DYNCREATE(Cweek13_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13_2_FORM };
#endif
	Cweek13_2Set* m_pSet;

// 特性
public:
	Cweek13_2Doc* GetDocument() const;

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
	virtual ~Cweek13_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // week13_2View.cpp 中的调试版本
inline Cweek13_2Doc* Cweek13_2View::GetDocument() const
   { return reinterpret_cast<Cweek13_2Doc*>(m_pDocument); }
#endif

