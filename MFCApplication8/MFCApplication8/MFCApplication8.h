
// MFCApplication8.h : MFCApplication8 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication8App:
// �йش����ʵ�֣������ MFCApplication8.cpp
//

class CMFCApplication8App : public CWinApp
{
public:
	CMFCApplication8App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication8App theApp;
