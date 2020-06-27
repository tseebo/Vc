#pragma once
#include "afxwin.h"

// jiluji 对话框

class jiluji : public CDialogEx
{
	DECLARE_DYNAMIC(jiluji)

public:
	jiluji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~jiluji();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif
	Cweek14_1Set* m_pSet;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
   CListBox list;

   virtual BOOL OnInitDialog();
};
