
// MFCApplication20200316_4.h : MFCApplication20200316_4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication20200316_4App:
// �йش����ʵ�֣������ MFCApplication20200316_4.cpp
//

class CMFCApplication20200316_4App : public CWinApp
{
public:
	CMFCApplication20200316_4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication20200316_4App theApp;
