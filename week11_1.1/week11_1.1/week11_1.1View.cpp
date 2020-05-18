
// week11_1.1View.cpp : Cweek11_11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week11_1.1.h"
#endif

#include "week11_1.1Set.h"
#include "week11_1.1Doc.h"
#include "week11_1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek11_11View

IMPLEMENT_DYNCREATE(Cweek11_11View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek11_11View, CRecordView)
END_MESSAGE_MAP()

// Cweek11_11View 构造/析构

Cweek11_11View::Cweek11_11View()
	: CRecordView(IDD_WEEK11_11_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek11_11View::~Cweek11_11View()
{
}

void Cweek11_11View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL Cweek11_11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek11_11View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week11_11Set;
	CRecordView::OnInitialUpdate();

}


// Cweek11_11View 诊断

#ifdef _DEBUG
void Cweek11_11View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek11_11View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek11_11Doc* Cweek11_11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek11_11Doc)));
	return (Cweek11_11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek11_11View 数据库支持
CRecordset* Cweek11_11View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek11_11View 消息处理程序
