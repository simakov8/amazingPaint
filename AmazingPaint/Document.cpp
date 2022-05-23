#include "Document.h"

CDocument::CDocument(IGraphicalLayout* layoutPtr, const std::wstring& docPath)
	: m_graphicalLayoutPtr(layoutPtr),
		m_documentPath(docPath)
{
}

IGraphicalLayout& CDocument::GetGraphicalLayout() const
{
	return *m_graphicalLayoutPtr;
}

std::wstring CDocument::GetPath() const
{
	return m_documentPath;
}
