
// week12_1View.h : Cweek12_1View 类的接口
//

#pragma once

class Cweek12_1Set;

class Cweek12_1View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek12_1View();
	DECLARE_DYNCREATE(Cweek12_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK12_1_FORM };
#endif
	Cweek12_1Set* m_pSet;

// 特性
public:
	Cweek12_1Doc* GetDocument() const;

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
	virtual ~Cweek12_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	long number;
	CString major;
	long birthday;
	LONGLONG phonenumber;
	CString address;
	CString addr;
	afx_msg void OnRecordFirst();
	afx_msg void OnPaint();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};

#ifndef _DEBUG  // week12_1View.cpp 中的调试版本
inline Cweek12_1Doc* Cweek12_1View::GetDocument() const
   { return reinterpret_cast<Cweek12_1Doc*>(m_pDocument); }
#endif

