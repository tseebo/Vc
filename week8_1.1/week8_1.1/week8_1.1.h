
// week8_1.1.h : week8_1.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek8_11App:
// �йش����ʵ�֣������ week8_1.1.cpp
//

class Cweek8_11App : public CWinApp
{
public:
	Cweek8_11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek8_11App theApp;
