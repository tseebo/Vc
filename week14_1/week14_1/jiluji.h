#pragma once
#include "afxwin.h"

// jiluji �Ի���

class jiluji : public CDialogEx
{
	DECLARE_DYNAMIC(jiluji)

public:
	jiluji(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~jiluji();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif
	Cweek14_1Set* m_pSet;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
   CListBox list;

   virtual BOOL OnInitDialog();
};
