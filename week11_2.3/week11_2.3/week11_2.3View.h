
// week11_2.3View.h : Cweek11_23View ��Ľӿ�
//

#pragma once

class Cweek11_23Set;

class Cweek11_23View : public CRecordView
{
protected: // �������л�����
	Cweek11_23View();
	DECLARE_DYNCREATE(Cweek11_23View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_23_FORM };
#endif
	Cweek11_23Set* m_pSet;

// ����
public:
	Cweek11_23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cweek11_23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // week11_2.3View.cpp �еĵ��԰汾
inline Cweek11_23Doc* Cweek11_23View::GetDocument() const
   { return reinterpret_cast<Cweek11_23Doc*>(m_pDocument); }
#endif

