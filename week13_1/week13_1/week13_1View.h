
// week13_1View.h : Cweek13_1View ��Ľӿ�
//

#pragma once

class Cweek13_1Set;

class Cweek13_1View : public CRecordView
{
protected: // �������л�����
	Cweek13_1View();
	DECLARE_DYNCREATE(Cweek13_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13_1_FORM };
#endif
	Cweek13_1Set* m_pSet;

// ����
public:
	Cweek13_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cweek13_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // week13_1View.cpp �еĵ��԰汾
inline Cweek13_1Doc* Cweek13_1View::GetDocument() const
   { return reinterpret_cast<Cweek13_1Doc*>(m_pDocument); }
#endif

