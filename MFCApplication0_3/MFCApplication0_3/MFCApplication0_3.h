
// MFCApplication0_3.h : MFCApplication0_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication0_3App:
// �йش����ʵ�֣������ MFCApplication0_3.cpp
//

class CMFCApplication0_3App : public CWinApp
{
public:
	CMFCApplication0_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication0_3App theApp;