
// MFCApplication20200317_1.h : MFCApplication20200317_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication20200317_1App:
// �йش����ʵ�֣������ MFCApplication20200317_1.cpp
//

class CMFCApplication20200317_1App : public CWinApp
{
public:
	CMFCApplication20200317_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication20200317_1App theApp;
