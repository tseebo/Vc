#pragma once


// ADD_DIG 对话框

class ADD_DIG : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIG)

public:
	ADD_DIG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_DIG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString addname;
	long addnumber;
	CString addmajor;
	int addid;
};
