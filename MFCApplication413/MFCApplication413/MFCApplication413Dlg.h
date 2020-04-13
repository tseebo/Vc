
// MFCApplication413Dlg.h : 头文件
//

#pragma once


// CMFCApplication413Dlg 对话框
class CMFCApplication413Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication413Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION413_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int sum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit3();
};
