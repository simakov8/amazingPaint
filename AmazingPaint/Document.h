#pragma once

#include "../Graphics/GraphicalLayout.h"

class CDocument
{
public:
	CDocument(IGraphicalLayout* layoutPtr, const std::wstring& docPath);

	IGraphicalLayout& GetGraphicalLayout() const;
	std::wstring GetPath() const;
private:
	// IGraphicalWindow responsible for graphicalLayout lifetime
	IGraphicalLayout* m_graphicalLayoutPtr = nullptr;

	std::wstring m_documentPath;
};


