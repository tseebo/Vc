
// week9_2.1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// Cweek9_21Dlg �Ի���
class Cweek9_21Dlg : public CDialogEx
{
// ����
public:
	Cweek9_21Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WEEK9_21_DIALOG };
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
	CListBox list;
	CString content;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
