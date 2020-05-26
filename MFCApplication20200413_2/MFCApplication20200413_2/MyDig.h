#pragma once


// MyDig 对话框

class MyDig : public CDialogEx
{
	DECLARE_DYNAMIC(MyDig)

public:
	MyDig(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDig();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int m_nun1;
	int m_num2;
	afx_msg void OnBnClickedButton1();
	int m_num3;
};
