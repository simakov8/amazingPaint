#pragma once

#include <memory>
#include <QPoint>
#include "GraphicalTool.h" 
#include "Painter.h"

class IGraphicalElement : public IGraphicalTool
{
public:
	virtual ~IGraphicalElement() = default;

	virtual std::shared_ptr<IPainter> GetPainter() const = 0;

	// return central point relatively bounding rectangle
	virtual QPoint GetCentralPoint() const = 0;
};
