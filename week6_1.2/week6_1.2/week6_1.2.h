
// week6_1.2.h : week6_1.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek6_12App:
// �йش����ʵ�֣������ week6_1.2.cpp
//

class Cweek6_12App : public CWinApp
{
public:
	Cweek6_12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek6_12App theApp;
