#pragma once


// MyDig �Ի���

class MyDig : public CDialogEx
{
	DECLARE_DYNAMIC(MyDig)

public:
	MyDig(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDig();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int m_nun1;
	int m_num2;
	afx_msg void OnBnClickedButton1();
	int m_num3;
};
