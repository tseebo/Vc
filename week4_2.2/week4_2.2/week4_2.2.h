
// week4_2.2.h : week4_2.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek4_22App:
// �йش����ʵ�֣������ week4_2.2.cpp
//

class Cweek4_22App : public CWinApp
{
public:
	Cweek4_22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek4_22App theApp;
