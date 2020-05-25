
// week13_2View.cpp : Cweek13_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week13_2.h"
#endif

#include "week13_2Set.h"
#include "week13_2Doc.h"
#include "week13_2View.h"
#include "ADD_DLG.h"
#include "UPDATE_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek13_2View

IMPLEMENT_DYNCREATE(Cweek13_2View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek13_2View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &Cweek13_2View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek13_2View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cweek13_2View::OnBnClickedButton2)
END_MESSAGE_MAP()

// Cweek13_2View 构造/析构

Cweek13_2View::Cweek13_2View()
	: CRecordView(IDD_WEEK13_2_FORM)
	, id(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek13_2View::~Cweek13_2View()
{
}

void Cweek13_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Cweek13_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek13_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week13_2Set;
	CRecordView::OnInitialUpdate();

}


// Cweek13_2View 诊断

#ifdef _DEBUG
void Cweek13_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek13_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek13_2Doc* Cweek13_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek13_2Doc)));
	return (Cweek13_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek13_2View 数据库支持
CRecordset* Cweek13_2View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek13_2View 消息处理程序


void Cweek13_2View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MovePrev();
	UpdateData(false);
}


void Cweek13_2View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		long ll = adddlg.l;
		m_pSet->AddNew();
		m_pSet->m_1 = ll;
		m_pSet->Update();
		UpdateData(false);

	}

}


void Cweek13_2View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UPDATE_DLG updlg;
	int r = updlg.DoModal();
	    CString s;
		GetDlgItemText(IDC_EDIT1, s);
	if (r == IDOK) {
		long ii = updlg.i;
		m_pSet->Edit();
		m_pSet->m_1 = ii;
		m_pSet->Update();
		UpdateData(false);
		
	}
}
