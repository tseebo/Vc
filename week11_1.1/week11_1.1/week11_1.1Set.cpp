
// week11_1.1Set.cpp : Cweek11_11Set 类的实现
//

#include "stdafx.h"
#include "week11_1.1.h"
#include "week11_1.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_11Set 实现

// 代码生成在 2020年5月18日, 16:46

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Cweek11_11Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database1.mdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek11_11Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void Cweek11_11Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);
	RFX_Text(pFX, _T("[字段4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek11_11Set 诊断

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

