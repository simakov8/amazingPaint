#pragma once

#include <QGraphicsView>
#include "GraphicalWindow.h"

class CBaseGraphicalWindow : public IGraphicalWindow
{
public:
	CBaseGraphicalWindow();
	CBaseGraphicalWindow(CDocument* documentPtr);

	CDocument& GetDocument() const override;

	void DrawRectangle(const QPoint& coord, const QRect& rect, const QPen& pen = QPen(), const QBrush & = QBrush()) override;
	void DrawEllipse(const QPoint& coord, const QRect& rect, const QPen& pen = QPen(), const QBrush & = QBrush()) override;
	void DrawLine(const QPoint& coord, const QPoint& point1, const QPoint& point2, const QPen& pen = QPen(), const QBrush & = QBrush()) override;
	void DrawPoligon(const QPoint& coord, const QPolygon& poligon, const QPen& pen = QPen(), const QBrush & = QBrush()) override;

private:
	CDocument* m_documentPtr = nullptr;
	QGraphicsView* m_windowImplementation = new QGraphicsView(this);
};
