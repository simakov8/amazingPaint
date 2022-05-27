#include "GraphicsWindow.h"

CGraphicsWindow::CGraphicsWindow(QWidget *parent, CDefaultGraphicsScene* draphicsScene = new CDefaultGraphicsScene{})
	: QGraphicsView(parent),
	m_graphicsScene(draphicsScene),
	m_sceneRectRegulatorTimer(new QTimer{})
{
	setScene(m_graphicsScene);

	connectTimer();
	m_sceneRectRegulatorTimer->start(100);
}

CGraphicsWindow::~CGraphicsWindow()
{
}

void CGraphicsWindow::connectTimer()
{
	QObject::connect(m_sceneRectRegulatorTimer, &QTimer::timeout, this, &CGraphicsWindow::regulateSceneRect);
}

void CGraphicsWindow::resizeEvent(QResizeEvent* event)
{
	m_sceneRectRegulatorTimer->start(100);
	QGraphicsView::resizeEvent(event);
}

void CGraphicsWindow::regulateSceneRect()
{
	m_sceneRectRegulatorTimer->stop();
	m_graphicsScene->setSceneRect(0, 0, width(), height());
}
