
// UsingLib0Dll.h : UsingLib0Dll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingLib0DllApp:
// �йش����ʵ�֣������ UsingLib0Dll.cpp
//

class CUsingLib0DllApp : public CWinApp
{
public:
	CUsingLib0DllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingLib0DllApp theApp;
