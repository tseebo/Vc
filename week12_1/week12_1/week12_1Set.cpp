
// week12_1Set.cpp : Cweek12_1Set 类的实现
//

#include "stdafx.h"
#include "week12_1.h"
#include "week12_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_1Set 实现

// 代码生成在 2020年7月2日, 17:23

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString Cweek12_1Set::GetDefaultConnect()
{
	return _T("DSN=1;DBQ=D:\\access\\Database1.accdb;DefaultDir=D:\\access;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cweek12_1Set::GetDefaultSQL()
{
	return _T("[表1]");
}

void Cweek12_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Long(pFX, _T("[学号]"), column2);
	RFX_Text(pFX, _T("[专业]"), column3);
	RFX_Long(pFX, _T("[出生年月]"), column4);
	RFX_Double(pFX, _T("[手机号]"), column5);
	RFX_Text(pFX, _T("[家庭住址]"), column6);
	RFX_Text(pFX, _T("[相片]"), column7);

}
/////////////////////////////////////////////////////////////////////////////
// Cweek12_1Set 诊断

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

