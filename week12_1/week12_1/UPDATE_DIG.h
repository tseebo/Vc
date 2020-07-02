#pragma once


// UPDATE_DIG 对话框

class UPDATE_DIG : public CDialogEx
{
	DECLARE_DYNAMIC(UPDATE_DIG)

public:
	UPDATE_DIG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~UPDATE_DIG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int updateid;
	CString updatename;
	long updatenumber;
	CString updatemajor;
};
