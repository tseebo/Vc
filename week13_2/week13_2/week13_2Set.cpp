
// week13_2Set.cpp : Cweek13_2Set ���ʵ��
//

#include "stdafx.h"
#include "week13_2.h"
#include "week13_2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13_2Set ʵ��

// ���������� 2020��5��25��, 15:23

IMPLEMENT_DYNAMIC(Cweek13_2Set, CRecordset)

Cweek13_2Set::Cweek13_2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek13_2Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database3.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek13_2Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cweek13_2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek13_2Set ���

#ifdef _DEBUG
void Cweek13_2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek13_2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

