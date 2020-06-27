#pragma once


// showpicrtues 对话框

class showpicrtues : public CDialogEx
{
	DECLARE_DYNAMIC(showpicrtues)

public:
	showpicrtues(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~showpicrtues();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
