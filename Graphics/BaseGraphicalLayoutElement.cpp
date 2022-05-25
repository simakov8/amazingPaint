#include "BaseGraphicalLayoutElement.h"

CBaseGraphicalLayoutElement::CBaseGraphicalLayoutElement(CBaseGraphicalElement& elementPtr, const QPoint& point)
	: m_elementPtr(&elementPtr)
{
	m_elementPtr->setPos(point);
}

QPoint CBaseGraphicalLayoutElement::GetCoordinates() const
{
	return m_elementPtr->pos().toPoint();
}

void CBaseGraphicalLayoutElement::SetCoordinates(const QPoint& coordinates)
{
	m_elementPtr->setPos(coordinates);
}

CBaseGraphicalElement* CBaseGraphicalLayoutElement::GetGraphicalElement() const
{
	return m_elementPtr;
}
