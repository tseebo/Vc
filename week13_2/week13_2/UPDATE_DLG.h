#pragma once


// UPDATE_DLG 对话框

class UPDATE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(UPDATE_DLG)

public:
	UPDATE_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~UPDATE_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UPDATE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long i;
};
