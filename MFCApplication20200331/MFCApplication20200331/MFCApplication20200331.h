
// MFCApplication20200331.h : MFCApplication20200331 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication20200331App:
// �йش����ʵ�֣������ MFCApplication20200331.cpp
//

class CMFCApplication20200331App : public CWinApp
{
public:
	CMFCApplication20200331App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication20200331App theApp;
