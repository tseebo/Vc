
// MFCApplication20200316_4Doc.h : CMFCApplication20200316_4Doc ��Ľӿ�
//


#pragma once


class CMFCApplication20200316_4Doc : public CDocument
{
protected: // �������л�����
	CMFCApplication20200316_4Doc();
	DECLARE_DYNCREATE(CMFCApplication20200316_4Doc)

// ����
public:

// ����
public:CRect cr;
	   bool set;

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
	virtual ~CMFCApplication20200316_4Doc();
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
