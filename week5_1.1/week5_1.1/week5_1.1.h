
// week5_1.1.h : week5_1.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek5_11App:
// �йش����ʵ�֣������ week5_1.1.cpp
//

class Cweek5_11App : public CWinAppEx
{
public:
	Cweek5_11App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek5_11App theApp;
