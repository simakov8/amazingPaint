#pragma once

#include "GraphicalLayoutElement.h"

class IGraphicalLayout
{
public:
	virtual ~IGraphicalLayout() = default;

	// TODO:
	// remove raw pointer getting and think of std::shared_ptr
	// ownership conflict with QObject Lifetime management
	virtual void AddGraphicalLayoutElement(IGraphicalLayoutElement* element) = 0;
	virtual void RemoveGraphicalLayoutElement(IGraphicalLayoutElement* element) = 0;

	virtual IGraphicalLayoutElement& GetGraphicalLayoutElement(const QPoint& point) const = 0;
	virtual QList<IGraphicalLayoutElement*> GetGraphicalLayoutElements() const = 0;

	// virtual XMLrepresentation GetXmlRepresentation() const = 0;
};
