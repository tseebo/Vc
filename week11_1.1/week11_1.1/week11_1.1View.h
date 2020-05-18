
// week11_1.1View.h : Cweek11_11View 类的接口
//

#pragma once

class Cweek11_11Set;

class Cweek11_11View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11_11View();
	DECLARE_DYNCREATE(Cweek11_11View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_11_FORM };
#endif
	Cweek11_11Set* m_pSet;

// 特性
public:
	Cweek11_11Doc* GetDocument() const;

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
	virtual ~Cweek11_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // week11_1.1View.cpp 中的调试版本
inline Cweek11_11Doc* Cweek11_11View::GetDocument() const
   { return reinterpret_cast<Cweek11_11Doc*>(m_pDocument); }
#endif

