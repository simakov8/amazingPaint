#include "BaseGraphicalWindow.h"
#include "BaseGraphicalLayout.h"

CBaseGraphicalWindow::CBaseGraphicalWindow()
{
	IGraphicalLayout* layoutPtr = new CBaseGraphicalLayout(m_windowImplementation);
	m_documentPtr = new CDocument{ layoutPtr, std::wstring{} };
}

CBaseGraphicalWindow::CBaseGraphicalWindow(CDocument* documentPtr)
	: m_documentPtr(documentPtr)
{
}

void CBaseGraphicalWindow::SetDocument(CDocument* documentPtr)
{
	m_documentPtr = documentPtr;
	m_windowImplementation.setSc
}

CDocument& CBaseGraphicalWindow::GetDocument() const
{
	return *m_documentPtr;
}

void CBaseGraphicalWindow::DrawRectangle(const QPoint& coord, const QRect& rect, const QPen& pen, const QBrush&)
{
	//m_windowImplementation->scene()->addRect()
}
