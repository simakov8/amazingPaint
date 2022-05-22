#pragma once

class IManipulator
{
public:
	virtual ~IManipulator() = default;

	virtual void HandleMouseDown(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseMove(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseUp(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseDoubleClick(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
};

