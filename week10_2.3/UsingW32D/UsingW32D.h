
// UsingW32D.h : UsingW32D Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingW32DApp:
// �йش����ʵ�֣������ UsingW32D.cpp
//

class CUsingW32DApp : public CWinApp
{
public:
	CUsingW32DApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingW32DApp theApp;
