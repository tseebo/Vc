#pragma once


// find �Ի���

class find : public CDialogEx
{
	DECLARE_DYNAMIC(find)

public:
	find(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~find();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString search;
};
