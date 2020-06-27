
// week13_1Set.cpp : Cweek13_1Set ���ʵ��
//

#include "stdafx.h"
#include "week13_1.h"
#include "week13_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13_1Set ʵ��

// ���������� 2020��6��27��, 16:26

IMPLEMENT_DYNAMIC(Cweek13_1Set, CRecordset)

Cweek13_1Set::Cweek13_1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = L"";
	m_1 = L"";
	m_2 = 0;
	m_3 = L"";
	m_4 = 0;
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek13_1Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database2.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek13_1Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cweek13_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Long(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek13_1Set ���

#ifdef _DEBUG
void Cweek13_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek13_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

