
// MFCApplication413Dlg.h : ͷ�ļ�
//

#pragma once


// CMFCApplication413Dlg �Ի���
class CMFCApplication413Dlg : public CDialogEx
{
// ����
public:
	CMFCApplication413Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION413_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int sum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit3();
};
