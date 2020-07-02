#pragma once


// mydig 对话框

class mydig : public CDialogEx
{
	DECLARE_DYNAMIC(mydig)

public:
	mydig(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydig();

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
