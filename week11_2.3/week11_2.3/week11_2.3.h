
// week11_2.3.h : week11_2.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek11_23App:
// �йش����ʵ�֣������ week11_2.3.cpp
//

class Cweek11_23App : public CWinApp
{
public:
	Cweek11_23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek11_23App theApp;
