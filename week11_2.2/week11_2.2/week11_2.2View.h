
// week11_2.2View.h : Cweek11_22View 类的接口
//

#pragma once

class Cweek11_22Set;

class Cweek11_22View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11_22View();
	DECLARE_DYNCREATE(Cweek11_22View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_22_FORM };
#endif
	Cweek11_22Set* m_pSet;

// 特性
public:
	Cweek11_22Doc* GetDocument() const;

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
	virtual ~Cweek11_22View();
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
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // week11_2.2View.cpp 中的调试版本
inline Cweek11_22Doc* Cweek11_22View::GetDocument() const
   { return reinterpret_cast<Cweek11_22Doc*>(m_pDocument); }
#endif

