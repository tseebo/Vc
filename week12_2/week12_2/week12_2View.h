
// week12_2View.h : Cweek12_2View ��Ľӿ�
//

#pragma once

class Cweek12_2Set;

class Cweek12_2View : public CRecordView
{
protected: // �������л�����
	Cweek12_2View();
	DECLARE_DYNCREATE(Cweek12_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK12_2_FORM };
#endif
	Cweek12_2Set* m_pSet;
	CString path;

// ����
public:
	Cweek12_2Doc* GetDocument() const;
	void draw_pic(CString file);

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
	virtual ~Cweek12_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString pic;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordLast();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // week12_2View.cpp �еĵ��԰汾
inline Cweek12_2Doc* Cweek12_2View::GetDocument() const
   { return reinterpret_cast<Cweek12_2Doc*>(m_pDocument); }
#endif

