
// week11_1.1View.h : Cweek11_11View ��Ľӿ�
//

#pragma once

class Cweek11_11Set;

class Cweek11_11View : public CRecordView
{
protected: // �������л�����
	Cweek11_11View();
	DECLARE_DYNCREATE(Cweek11_11View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK11_11_FORM };
#endif
	Cweek11_11Set* m_pSet;

// ����
public:
	Cweek11_11Doc* GetDocument() const;

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
	virtual ~Cweek11_11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // week11_1.1View.cpp �еĵ��԰汾
inline Cweek11_11Doc* Cweek11_11View::GetDocument() const
   { return reinterpret_cast<Cweek11_11Doc*>(m_pDocument); }
#endif

