
// week13_1Doc.h : Cweek13_1Doc ��Ľӿ�
//


#pragma once
#include "week13_1Set.h"


class Cweek13_1Doc : public CDocument
{
protected: // �������л�����
	Cweek13_1Doc();
	DECLARE_DYNCREATE(Cweek13_1Doc)

// ����
public:
	Cweek13_1Set m_week13_1Set;

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
	virtual ~Cweek13_1Doc();
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
