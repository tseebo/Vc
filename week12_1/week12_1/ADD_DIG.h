#pragma once


// ADD_DIG �Ի���

class ADD_DIG : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIG)

public:
	ADD_DIG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_DIG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString addname;
	long addnumber;
	CString addmajor;
	int addid;
};
