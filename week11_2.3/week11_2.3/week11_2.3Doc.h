
// week11_2.3Doc.h : Cweek11_23Doc ��Ľӿ�
//


#pragma once
#include "week11_2.3Set.h"


class Cweek11_23Doc : public CDocument
{
protected: // �������л�����
	Cweek11_23Doc();
	DECLARE_DYNCREATE(Cweek11_23Doc)

// ����
public:
	Cweek11_23Set m_week11_23Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cweek11_23Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
