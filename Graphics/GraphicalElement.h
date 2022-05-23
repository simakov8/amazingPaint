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

	virtual QRect GetBoundingRect() const = 0;
	virtual void SetBoundingRect(const QRect& boundingRect) = 0;

	virtual	qreal GetTiltAngle() const = 0;
};
