
// MFCApplication413.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCApplication413App: 
// �йش����ʵ�֣������ MFCApplication413.cpp
//

class CMFCApplication413App : public CWinApp
{
public:
	CMFCApplication413App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication413App theApp;