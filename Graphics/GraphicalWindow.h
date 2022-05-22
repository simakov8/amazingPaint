#pragma once

#include <QRect>
#include <QPolygon>
#include <QPen>
#include <QBrush>
#include "GraphicalLayout.h"

class IGraphicalWindow
{
public:
	virtual ~IGraphicalWindow() = default;

	// TODO:
	// remove raw pointer getting and think of std::shared_ptr
	// ownership conflict with QObject Lifetime management
	virtual void SetGraphicalLayout(IGraphicalLayout* layout) = 0;
	virtual IGraphicalLayout* GetGraphicalLayout() const = 0;

protected:
	virtual void DrawRectangle(const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawEllipse(const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawLine(const QPoint& point1, const QPoint& point2, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawPoligon(const QPolygon& poligon, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;

	// TODO:
	// describe more primitives in which there are oportunity
	// to draw multiplicity of objects
};
