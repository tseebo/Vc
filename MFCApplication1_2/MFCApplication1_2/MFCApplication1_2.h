
// MFCApplication1_2.h : MFCApplication1_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication1_2App:
// �йش����ʵ�֣������ MFCApplication1_2.cpp
//

class CMFCApplication1_2App : public CWinApp
{
public:
	CMFCApplication1_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication1_2App theApp;
