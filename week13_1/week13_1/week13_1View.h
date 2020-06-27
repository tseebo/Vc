
// week13_1View.h : Cweek13_1View 类的接口
//

#pragma once

class Cweek13_1Set;

class Cweek13_1View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek13_1View();
	DECLARE_DYNCREATE(Cweek13_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13_1_FORM };
#endif
	Cweek13_1Set* m_pSet;

// 特性
public:
	Cweek13_1Doc* GetDocument() const;

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
	virtual ~Cweek13_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString id;
	CString name;
	long number;
	CString sex;
	long age;
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // week13_1View.cpp 中的调试版本
inline Cweek13_1Doc* Cweek13_1View::GetDocument() const
   { return reinterpret_cast<Cweek13_1Doc*>(m_pDocument); }
#endif

