
// week12_1Set.cpp : Cweek12_1Set ���ʵ��
//

#include "stdafx.h"
#include "week12_1.h"
#include "week12_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_1Set ʵ��

// ���������� 2020��7��2��, 17:23

IMPLEMENT_DYNAMIC(Cweek12_1Set, CRecordset)

Cweek12_1Set::Cweek12_1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = L"";
	column4 = 0;
	column5 = 0.0;
	column6 = L"";
	column7 = L"";
	m_nFields = 8;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek12_1Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database1.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek12_1Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void Cweek12_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Long(pFX, _T("[��������]"), column4);
	RFX_Double(pFX, _T("[�ֻ���]"), column5);
	RFX_Text(pFX, _T("[��ͥסַ]"), column6);
	RFX_Text(pFX, _T("[��Ƭ]"), column7);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek12_1Set ���

#ifdef _DEBUG
void Cweek12_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek12_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

