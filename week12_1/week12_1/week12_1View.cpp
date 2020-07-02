
// week12_1View.cpp : Cweek12_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week12_1.h"
#endif

#include "week12_1Set.h"
#include "week12_1Doc.h"
#include "week12_1View.h"
#include "mydig.h"
#include "ADD_DIG.h"
#include "UPDATE_DIG.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek12_1View

IMPLEMENT_DYNCREATE(Cweek12_1View, CRecordView)

BEGIN_MESSAGE_MAP(Cweek12_1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cweek12_1View::OnRecordFirst)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_PREV, &Cweek12_1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cweek12_1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cweek12_1View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &Cweek12_1View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cweek12_1View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Cweek12_1View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cweek12_1View::OnBnClickedButton4)
END_MESSAGE_MAP()

// Cweek12_1View 构造/析构

Cweek12_1View::Cweek12_1View()
	: CRecordView(IDD_WEEK12_1_FORM)
	, name(_T(""))
	, number(0)
	, major(_T(""))
	, birthday(0)
	, phonenumber(0)
	, address(_T(""))
	, addr(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cweek12_1View::~Cweek12_1View()
{
}

void Cweek12_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL Cweek12_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cweek12_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_week12_1Set;
	CRecordView::OnInitialUpdate();

}


// Cweek12_1View 诊断

#ifdef _DEBUG
void Cweek12_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cweek12_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cweek12_1Doc* Cweek12_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek12_1Doc)));
	return (Cweek12_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek12_1View 数据库支持
CRecordset* Cweek12_1View::OnGetRecordset()
{
	return m_pSet;
}



// Cweek12_1View 消息处理程序


void Cweek12_1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString filename;
	
	filename = m_pSet->column7;
	CImage img;
	img.Load(filename);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;

	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}


void Cweek12_1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);

	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}



void Cweek12_1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT7, s);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
}


void Cweek12_1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	mydig dig;
	int t = dig.DoModal();

}


void Cweek12_1View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DIG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		int addid = adddlg.addid;
		CString addna = adddlg.addname;
		long addnu = adddlg.addnumber;
		CString addma = adddlg.addmajor;
		m_pSet->AddNew();
		m_pSet->column1 = addna;
		m_pSet->column2 = addnu;
		m_pSet->column3 = addma;
		m_pSet->Update();
		UpdateData(false);
	}

}


void Cweek12_1View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MovePrev();
	UpdateData(false);
}


void Cweek12_1View::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UPDATE_DIG updig;
	int r = updig.DoModal();
	CString s;
	GetDlgItemText(IDC_EDIT1, s);
	if (r == IDOK) {
		int idd = updig.updateid;
		CString name = updig.updatename;
		long number = updig.updatenumber;
		CString upmajor = updig.updatemajor;
		m_pSet->Edit();
		m_pSet->m_ID= idd;
		m_pSet->column1 = name;
		m_pSet->column2 = number;
		m_pSet->column3 = upmajor;
		m_pSet->Update();
		UpdateData(false);

	}
}
