
// week11_1.1Set.cpp : Cweek11_11Set ���ʵ��
//

#include "stdafx.h"
#include "week11_1.1.h"
#include "week11_1.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_11Set ʵ��

// ���������� 2020��5��18��, 16:46

IMPLEMENT_DYNAMIC(Cweek11_11Set, CRecordset)

Cweek11_11Set::Cweek11_11Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = L"";
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cweek11_11Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database1.mdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11_11Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void Cweek11_11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11_11Set ���

#ifdef _DEBUG
void Cweek11_11Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cweek11_11Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

