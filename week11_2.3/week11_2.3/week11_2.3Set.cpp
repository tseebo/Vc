
// week11_2.3Set.cpp : Cweek11_23Set ���ʵ��
//

#include "stdafx.h"
#include "week11_2.3.h"
#include "week11_2.3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_23Set ʵ��

// ���������� 2020��5��26��, 16:38

IMPLEMENT_DYNAMIC(Cweek11_23Set, CRecordset)

Cweek11_23Set::Cweek11_23Set(CDatabase* pdb)
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
CString Cweek11_23Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database2.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11_23Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cweek11_23Set::DoFieldExchange(CFieldExchange* pFX)
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
// Cweek11_23Set ���

#ifdef _DEBUG
void Cweek11_23Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11_23Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

