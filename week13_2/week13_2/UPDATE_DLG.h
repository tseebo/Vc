#pragma once


// UPDATE_DLG �Ի���

class UPDATE_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(UPDATE_DLG)

public:
	UPDATE_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~UPDATE_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UPDATE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long i;
};
