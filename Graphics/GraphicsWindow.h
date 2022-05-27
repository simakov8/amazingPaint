#pragma once

#include <QGraphicsView>
#include <QTimer>
#include "DefaultGraphicsScene.h"

class CGraphicsWindow : public QGraphicsView
{
	Q_OBJECT

public:
	CGraphicsWindow(QWidget* parent, CDefaultGraphicsScene* draphicsScene = new CDefaultGraphicsScene{});
	~CGraphicsWindow();

protected:
	void resizeEvent(QResizeEvent* event) override;

private:
	void connectTimer();

private slots:
	void regulateSceneRect();

private:
	CDefaultGraphicsScene* m_graphicsScene;
	QTimer* m_sceneRectRegulatorTimer;
};
