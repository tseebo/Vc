
// week10_2.1.h : week10_2.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek10_21App:
// �йش����ʵ�֣������ week10_2.1.cpp
//

class Cweek10_21App : public CWinApp
{
public:
	Cweek10_21App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek10_21App theApp;
