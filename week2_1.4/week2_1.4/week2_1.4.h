
// week2_1.4.h : week2_1.4 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cweek2_14App:
// 有关此类的实现，请参阅 week2_1.4.cpp
//

class Cweek2_14App : public CWinApp
{
public:
	Cweek2_14App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek2_14App theApp;
