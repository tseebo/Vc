
// MFCApplication0406.h : MFCApplication0406 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication0406App:
// �йش����ʵ�֣������ MFCApplication0406.cpp
//

class CMFCApplication0406App : public CWinApp
{
public:
	CMFCApplication0406App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication0406App theApp;
