
// week11_2.3Doc.h : Cweek11_23Doc 类的接口
//


#pragma once
#include "week11_2.3Set.h"


class Cweek11_23Doc : public CDocument
{
protected: // 仅从序列化创建
	Cweek11_23Doc();
	DECLARE_DYNCREATE(Cweek11_23Doc)

// 特性
public:
	Cweek11_23Set m_week11_23Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Cweek11_23Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
