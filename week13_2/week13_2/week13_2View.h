
// week13_2View.h : Cweek13_2View ��Ľӿ�
//

#pragma once

class Cweek13_2Set;

class Cweek13_2View : public CRecordView
{
protected: // �������л�����
	Cweek13_2View();
	DECLARE_DYNCREATE(Cweek13_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13_2_FORM };
#endif
	Cweek13_2Set* m_pSet;

// ����
public:
	Cweek13_2Doc* GetDocument() const;

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
	virtual ~Cweek13_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long id;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // week13_2View.cpp �еĵ��԰汾
inline Cweek13_2Doc* Cweek13_2View::GetDocument() const
   { return reinterpret_cast<Cweek13_2Doc*>(m_pDocument); }
#endif

