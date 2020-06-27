
// week14_1Set.cpp : Cweek14_1Set 类的实现
//

#include "stdafx.h"
#include "week14_1.h"
#include "week14_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek14_1Set 实现

// 代码生成在 2020年6月27日, 18:24

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Cweek14_1Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database4.1.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek14_1Set::GetDefaultSQL()
{
	return _T("[表1]");
}

void Cweek14_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[学号]"), column1);
	RFX_Text(pFX, _T("[姓名]"), column2);
	RFX_Text(pFX, _T("[性别]"), column3);
	RFX_Long(pFX, _T("[年薪]"), column4);
	RFX_Text(pFX, _T("[相片]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek14_1Set 诊断

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

