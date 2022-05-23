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
	virtual void SetDocument(CDocument* document) = 0;
	virtual CDocument& GetDocument() const = 0;

protected:
	virtual void DrawRectangle(const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawEllipse(const QRect& rect, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawLine(const QPoint& point1, const QPoint& point2, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;
	virtual void DrawPoligon(const QPolygon& poligon, const QPen& pen = QPen(), const QBrush& = QBrush()) = 0;

	// TODO:
	// describe more primitives in which there are oportunity
	// to draw multiplicity of objects
};
