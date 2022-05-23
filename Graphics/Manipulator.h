#pragma once

class IGraphicalLayout;

class IManipulator
{
public:
	virtual ~IManipulator() = default;

	// think of returning set of affected IGraphicalLayoutElement`s
	virtual void HandleMouseDown(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseMove(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseUp(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
	virtual void HandleMouseDoubleClick(IGraphicalLayout& canvas, const QPoint& coord) const = 0;
};

