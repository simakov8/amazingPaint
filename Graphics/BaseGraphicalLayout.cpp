#include "BaseGraphicalLayout.h"

CBaseGraphicalLayout::CBaseGraphicalLayout(QGraphicsView* viewImplementation)
	: m_layoutImplementation{ new QGraphicsScene() }
{
	viewImplementation->setScene(m_layoutImplementation);
}

void CBaseGraphicalLayout::AddGraphicalLayoutElement(IGraphicalLayoutElement* element)
{
	m_layoutImplementation->addItem(element->GetGraphicalElement());
	m_elementLayoutElementPairs.insert({ element->GetGraphicalElement(), element });
}

void CBaseGraphicalLayout::RemoveGraphicalLayoutElement(IGraphicalLayoutElement* element)
{
	m_layoutImplementation->removeItem(element->GetGraphicalElement());
}

IGraphicalLayoutElement* CBaseGraphicalLayout::GetGraphicalLayoutElement(const QPoint& point) const
{
	auto* itemPtr{ m_layoutImplementation->itemAt(point, QTransform{}) };

	if (itemPtr != nullptr)
		return m_elementLayoutElementPairs.at(dynamic_cast<CBaseGraphicalElement*>(itemPtr));
	
	return nullptr;
}

QList<IGraphicalLayoutElement*> CBaseGraphicalLayout::GetGraphicalLayoutElements() const
{
	QList<IGraphicalLayoutElement*> result;

	for (const auto& [graphicalElement, layoutElement] : m_elementLayoutElementPairs)
		result.push_back(layoutElement);
	
	return result;
}
