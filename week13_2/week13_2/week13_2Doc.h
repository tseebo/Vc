
// week13_2Doc.h : Cweek13_2Doc ��Ľӿ�
//


#pragma once
#include "week13_2Set.h"


class Cweek13_2Doc : public CDocument
{
protected: // �������л�����
	Cweek13_2Doc();
	DECLARE_DYNCREATE(Cweek13_2Doc)

// ����
public:
	Cweek13_2Set m_week13_2Set;

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
	virtual ~Cweek13_2Doc();
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
