#pragma once


// UPDATE_DIG �Ի���

class UPDATE_DIG : public CDialogEx
{
	DECLARE_DYNAMIC(UPDATE_DIG)

public:
	UPDATE_DIG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~UPDATE_DIG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int updateid;
	CString updatename;
	long updatenumber;
	CString updatemajor;
};
