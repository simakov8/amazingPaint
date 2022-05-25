#pragma once

#include <QWidget>
#include <QRect>
#include <QPolygon>
#include <QPen>
#include <QBrush>
#include "../AmazingPaint/Document.h"


// interface inheritance for opportunity to display window from GUI
class IGraphicalWindow : public QWidget
{
public:
	virtual ~IGraphicalWindow() = default;

	// TODO:
	// remove raw pointer getting and think of std::shared_ptr
	// ownership conflict with QObject Lifetime management
	virtual CDocument& GetDocument() const = 0;

	virtual void DrawRectangle(const QPoint& coord, const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawEllipse(const QPoint& coord, const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawLine(const QPoint& coord, const QPoint& point1, const QPoint& point2, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawPoligon(const QPoint& coord, const QPolygon& poligon, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;

	// TODO:
	// describe more primitives in which there are oportunity
	// to draw multiplicity of objects
};
