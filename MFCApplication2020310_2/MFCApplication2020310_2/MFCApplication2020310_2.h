
// MFCApplication2020310_2.h : MFCApplication2020310_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication2020310_2App:
// �йش����ʵ�֣������ MFCApplication2020310_2.cpp
//

class CMFCApplication2020310_2App : public CWinApp
{
public:
	CMFCApplication2020310_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication2020310_2App theApp;
