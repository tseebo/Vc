
// MFCApplication20200413_2.h : MFCApplication20200413_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication20200413_2App:
// �йش����ʵ�֣������ MFCApplication20200413_2.cpp
//

class CMFCApplication20200413_2App : public CWinApp
{
public:
	CMFCApplication20200413_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication20200413_2App theApp;
