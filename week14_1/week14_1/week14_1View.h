
// week14_1View.h : Cweek14_1View 类的接口
//

#pragma once

class Cweek14_1Set;

class Cweek14_1View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek14_1View();
	DECLARE_DYNCREATE(Cweek14_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14_1_FORM };
#endif
	Cweek14_1Set* m_pSet;

// 特性
public:
	Cweek14_1Doc* GetDocument() const;

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
	virtual ~Cweek14_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long number;
	CString name;
	CString sex;
	long money;
	afx_msg
	void OnPaint();
	CString add;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void Onjiluji();
	afx_msg void Onsort();
	afx_msg void Onsearch();
};

#ifndef _DEBUG  // week14_1View.cpp 中的调试版本
inline Cweek14_1Doc* Cweek14_1View::GetDocument() const
   { return reinterpret_cast<Cweek14_1Doc*>(m_pDocument); }
#endif

