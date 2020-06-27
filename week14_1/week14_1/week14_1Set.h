
// week14_1Set.h: Cweek14_1Set 类的接口
//


#pragma once

// 代码生成在 2020年6月27日, 18:24

class Cweek14_1Set : public CRecordset
{
public:
	Cweek14_1Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Cweek14_1Set)

// 字段/参数数据

// 以下字符串类型(如果存在)反映数据库字段(ANSI 数据类型的 CStringA 和 Unicode
// 数据类型的 CStringW)的实际数据类型。
//  这是为防止 ODBC 驱动程序执行可能
// 不必要的转换。如果希望，可以将这些成员更改为
// CString 类型，ODBC 驱动程序将执行所有必要的转换。
// (注意: 必须使用 3.5 版或更高版本的 ODBC 驱动程序
// 以同时支持 Unicode 和这些转换)。

	long	m_ID;
	long	column1;
	CStringW	column2;
	CStringW	column3;
	long	column4;
	CStringW	column5;

// 重写
	// 向导生成的虚函数重写
	public:
	virtual CString GetDefaultConnect();	// 默认连接字符串

	virtual CString GetDefaultSQL(); 	// 记录集的默认 SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX 支持

// 实现
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

