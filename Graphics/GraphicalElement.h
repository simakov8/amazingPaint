#pragma once

#include <memory>
#include <QPoint>
#include "Manipulator.h"
#include "Painter.h"

class IGraphicalElement
{
public:
	virtual ~IGraphicalElement() = default;

	virtual std::shared_ptr<IManipulator> GetManipulator() const = 0;
	virtual std::shared_ptr<IPainter> GetPainter() const = 0;

	// return central point relatively bounding rectangle
	virtual QPoint GetCentralPoint() const = 0;
};
