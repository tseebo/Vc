
// MFCApplication2020310_1.h : MFCApplication2020310_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCApplication2020310_1App:
// �йش����ʵ�֣������ MFCApplication2020310_1.cpp
//

class CMFCApplication2020310_1App : public CWinApp
{
public:
	CMFCApplication2020310_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication2020310_1App theApp;
