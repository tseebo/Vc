
// week2_1.2.h : week2_1.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek2_12App:
// �йش����ʵ�֣������ week2_1.2.cpp
//

class Cweek2_12App : public CWinApp
{
public:
	Cweek2_12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2_12App theApp;
