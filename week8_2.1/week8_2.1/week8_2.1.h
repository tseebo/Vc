
// week8_2.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cweek8_21App: 
// �йش����ʵ�֣������ week8_2.1.cpp
//

class Cweek8_21App : public CWinApp
{
public:
	Cweek8_21App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cweek8_21App theApp;