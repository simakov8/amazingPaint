#pragma once

#include <QGraphicsScene>

class CDefaultGraphicsScene : public QGraphicsScene
{
	Q_OBJECT

public:
	CDefaultGraphicsScene(/*xmlReprt*/);
	~CDefaultGraphicsScene();

	//xmlRepr toXmlRepr() const;

protected:
	void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
	void mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
	void mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
};
