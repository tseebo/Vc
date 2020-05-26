
// week12_2Set.cpp : Cweek12_2Set ���ʵ��
//

#include "stdafx.h"
#include "week12_2.h"
#include "week12_2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_2Set ʵ��

// ���������� 2020��5��25��, 16:51

IMPLEMENT_DYNAMIC(Cweek12_2Set, CRecordset)

Cweek12_2Set::Cweek12_2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek12_2Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database4.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek12_2Set::GetDefaultSQL()
{
	return _T("[5pictures]");
}

void Cweek12_2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek12_2Set ���

#ifdef _DEBUG
void Cweek12_2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek12_2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

