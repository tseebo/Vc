#pragma once


// sort �Ի���

class sort : public CDialogEx
{
	DECLARE_DYNAMIC(sort)

public:
	sort(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~sort();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString orderby;
};
