
// week9_1.1.h : week9_1.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek9_11App:
// �йش����ʵ�֣������ week9_1.1.cpp
//

class Cweek9_11App : public CWinApp
{
public:
	Cweek9_11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek9_11App theApp;
