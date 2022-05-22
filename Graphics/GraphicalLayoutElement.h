#pragma once

#include <QPoint>
#include "GraphicalElement.h"

class IGraphicalLayoutElement
{
public:
	virtual ~IGraphicalLayoutElement() = default;

	virtual QPoint GetCoordinates() const = 0;
	virtual void SetCoordinates(const QPoint& coordinates) = 0;

	// TODO:
	// remove raw pointer returning and think of std::shared_ptr
	// ownership conflict with QObject Lifetime management
	virtual IGraphicalElement* GetGraphicalElement() const = 0;
};
