#pragma once

#include <QPen>
#include <QBrush>

class IGraphicalLayoutElement;
class IGraphicalWindow;

class IPainter
{
public:
	virtual ~IPainter() = default;

	virtual void DrawGrahpicalLayoutElement(const IGraphicalLayoutElement& element, IGraphicalWindow& window) const = 0;

	virtual void SetPen(const QPen& pen) = 0;
	virtual QPen& GetPen() const = 0;

	virtual void SetBrush(const QBrush& brush) = 0;
	virtual QBrush& GetBrush() const = 0;
};
