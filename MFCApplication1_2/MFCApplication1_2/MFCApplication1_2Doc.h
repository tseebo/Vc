
// MFCApplication1_2Doc.h : CMFCApplication1_2Doc ��Ľӿ�
//


#pragma once


class CMFCApplication1_2Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication1_2Doc();
	DECLARE_DYNCREATE(CMFCApplication1_2Doc)

// ����
public:

// ����
public:CString S;
	   int A;

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
	virtual ~CMFCApplication1_2Doc();
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
