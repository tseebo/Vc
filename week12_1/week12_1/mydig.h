#pragma once


// mydig �Ի���

class mydig : public CDialogEx
{
	DECLARE_DYNAMIC(mydig)

public:
	mydig(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydig();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
