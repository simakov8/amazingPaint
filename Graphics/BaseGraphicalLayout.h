#pragma once

#include <QGraphicsScene>
#include <QGraphicsView>
#include "GraphicalLayout.h"

class CBaseGraphicalLayout : public IGraphicalLayout
{
public:
	CBaseGraphicalLayout(QGraphicsView* viewImplementation);

	void AddGraphicalLayoutElement(IGraphicalLayoutElement* element) override;
	// after this operation IGraphicalLayoutElement* invallidjj
	void RemoveGraphicalLayoutElement(IGraphicalLayoutElement* element) override;

	IGraphicalLayoutElement* GetGraphicalLayoutElement(const QPoint& point) const override;
	QList<IGraphicalLayoutElement*> GetGraphicalLayoutElements() const override;

private:
	QGraphicsScene* m_layoutImplementation;
	std::map<CBaseGraphicalElement*, IGraphicalLayoutElement*> m_elementLayoutElementPairs;
};

