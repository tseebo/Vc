
// MFCApplication0_2.h : MFCApplication0_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication0_2App:
// �йش����ʵ�֣������ MFCApplication0_2.cpp
//

class CMFCApplication0_2App : public CWinApp
{
public:
	CMFCApplication0_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication0_2App theApp;