
// week11_2.2View.h : Cweek11_22View ��Ľӿ�
//

#pragma once

class Cweek11_22Set;

class Cweek11_22View : public CRecordView
{
protected: // �������л�����
	Cweek11_22View();
	DECLARE_DYNCREATE(Cweek11_22View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_22_FORM };
#endif
	Cweek11_22Set* m_pSet;

// ����
public:
	Cweek11_22Doc* GetDocument() const;

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
	virtual ~Cweek11_22View();
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
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // week11_2.2View.cpp �еĵ��԰汾
inline Cweek11_22Doc* Cweek11_22View::GetDocument() const
   { return reinterpret_cast<Cweek11_22Doc*>(m_pDocument); }
#endif

