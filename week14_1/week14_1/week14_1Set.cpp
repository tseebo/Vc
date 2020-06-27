
// week14_1Set.cpp : Cweek14_1Set ���ʵ��
//

#include "stdafx.h"
#include "week14_1.h"
#include "week14_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek14_1Set ʵ��

// ���������� 2020��6��27��, 18:24

IMPLEMENT_DYNAMIC(Cweek14_1Set, CRecordset)

Cweek14_1Set::Cweek14_1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = 0;
	column2 = L"";
	column3 = L"";
	column4 = 0;
	column5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek14_1Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database4.1.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek14_1Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cweek14_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[ѧ��]"), column1);
	RFX_Text(pFX, _T("[����]"), column2);
	RFX_Text(pFX, _T("[�Ա�]"), column3);
	RFX_Long(pFX, _T("[��н]"), column4);
	RFX_Text(pFX, _T("[��Ƭ]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek14_1Set ���

#ifdef _DEBUG
void Cweek14_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek14_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

