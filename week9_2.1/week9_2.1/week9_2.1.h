
// week9_2.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cweek9_21App: 
// �йش����ʵ�֣������ week9_2.1.cpp
//

class Cweek9_21App : public CWinApp
{
public:
	Cweek9_21App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cweek9_21App theApp;