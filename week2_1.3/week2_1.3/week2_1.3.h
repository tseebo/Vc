
// week2_1.3.h : week2_1.3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cweek2_13App:
// 有关此类的实现，请参阅 week2_1.3.cpp
//

class Cweek2_13App : public CWinApp
{
public:
	Cweek2_13App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2_13App theApp;
