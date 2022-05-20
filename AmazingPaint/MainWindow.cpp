#include "MainWindow.h"
#include <QToolBar>

CMainWindow::CMainWindow(QWidget* parent)
{
	CreateMenuBar();
	CreateManipulatorsToolBar();
}

void CMainWindow::CreateMenuBar()
{
	m_mainWindowMenuBar = new QMenuBar{ this };

	auto fileMenuPtr{ m_mainWindowMenuBar->addMenu("File") };
	fileMenuPtr->addAction("Save");
	fileMenuPtr->addAction("Open");
	fileMenuPtr->addAction("Create");

	setMenuBar(m_mainWindowMenuBar);
}

void CMainWindow::CreateManipulatorsToolBar()
{
	m_sceneManipulatorsToolBar = new QToolBar{this};
	
	m_sceneManipulatorsToolBar->addAction("Triangle");
	m_sceneManipulatorsToolBar->addAction("Circle");
	m_sceneManipulatorsToolBar->addAction("Rectangle");

	addToolBar(m_sceneManipulatorsToolBar);
}
