
// MFCApplication0_3Doc.h : CMFCApplication0_3Doc ��Ľӿ�
//


#pragma once


class CMFCApplication0_3Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication0_3Doc();
	DECLARE_DYNCREATE(CMFCApplication0_3Doc)

// ����
public:

// ����
public:CString s2;

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
	virtual ~CMFCApplication0_3Doc();
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
