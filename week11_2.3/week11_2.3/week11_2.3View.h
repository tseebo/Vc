
// week11_2.3View.h : Cweek11_23View 类的接口
//

#pragma once

class Cweek11_23Set;

class Cweek11_23View : public CRecordView
{
protected: // 仅从序列化创建
	Cweek11_23View();
	DECLARE_DYNCREATE(Cweek11_23View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_23_FORM };
#endif
	Cweek11_23Set* m_pSet;

// 特性
public:
	Cweek11_23Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cweek11_23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit2();
	CString id;
	CString name;
	long number;
	CString sex;
	long age;
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // week11_2.3View.cpp 中的调试版本
inline Cweek11_23Doc* Cweek11_23View::GetDocument() const
   { return reinterpret_cast<Cweek11_23Doc*>(m_pDocument); }
#endif

