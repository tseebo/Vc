
// week12_2Doc.h : Cweek12_2Doc ��Ľӿ�
//


#pragma once
#include "week12_2Set.h"


class Cweek12_2Doc : public CDocument
{
protected: // �������л�����
	Cweek12_2Doc();
	DECLARE_DYNCREATE(Cweek12_2Doc)

// ����
public:
	Cweek12_2Set m_week12_2Set;

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
	virtual ~Cweek12_2Doc();
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
