
// MFCApplication0_1.h : MFCApplication0_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication0_1App:
// �йش����ʵ�֣������ MFCApplication0_1.cpp
//

class CMFCApplication0_1App : public CWinApp
{
public:
	CMFCApplication0_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication0_1App theApp;
