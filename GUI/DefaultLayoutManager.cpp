#include "DefaultLayoutManager.h"
#include <QMenuBar>
#include <QToolBar>
#include <QDockWidget>

CDefaultLayoutManager::CDefaultLayoutManager(std::shared_ptr<CStyleSheetCreator> styleSheetCreator)
	: m_styleSheetCreator{ styleSheetCreator }
{
}

void CDefaultLayoutManager::InstantiateMainWindow(CMainWindow& mainWindow) const
{
	mainWindow.setMinimumSize(QSize{ 700, 500 });

	CreateMenuBar(mainWindow);
	CreateToolBar(mainWindow);

	mainWindow.showMaximized();
}

void CDefaultLayoutManager::CreateMenuBar(CMainWindow& mainWindow) const
{
	auto menuBarPtr = new QMenuBar{ &mainWindow };

	CreateFileMenu(menuBarPtr, mainWindow);


	mainWindow.setMenuBar(menuBarPtr);
}

void CDefaultLayoutManager::CreateToolBar(CMainWindow& mainWindow) const
{
	auto toolBarPtr = new QToolBar{ &mainWindow };
	
	toolBarPtr->addAction("Triangle");
	toolBarPtr->addAction("Circle");
	toolBarPtr->addAction("Rectangle");

	mainWindow.addToolBar(toolBarPtr);
}

void CDefaultLayoutManager::CreateStatusBar(CMainWindow& mainWindow) const
{
}

void CDefaultLayoutManager::CreateDockWidget(CMainWindow& mainWindow) const
{
}

void CDefaultLayoutManager::CreateCentralWidget(CMainWindow& mainWindow) const
{
}

void CDefaultLayoutManager::AddDockWidget(CMainWindow& mainWindow, QWidget* dockBody) const
{
	QDockWidget* dock = new QDockWidget("New File", &mainWindow);
	dock->setWidget(dockBody);

	mainWindow.addDockWidget(Qt::LeftDockWidgetArea, dock);

	dock->show();
}

void CDefaultLayoutManager::CreateFileMenu(QMenuBar* menuBar, CMainWindow& mainWindow) const
{
	auto fileMenuPtr{ menuBar->addMenu("File") };

	auto menuAction = fileMenuPtr->addAction("Save");
	QObject::connect(menuAction, &QAction::triggered, &mainWindow, &CMainWindow::onFileSave);

	menuAction = fileMenuPtr->addAction("Open");
	QObject::connect(menuAction, &QAction::triggered, &mainWindow, &CMainWindow::onFileOpen);

	menuAction = fileMenuPtr->addAction("Close");
	QObject::connect(menuAction, &QAction::triggered, &mainWindow, &CMainWindow::onFileClose);

	menuAction = fileMenuPtr->addAction("Create");
	QObject::connect(menuAction, &QAction::triggered, &mainWindow, &CMainWindow::onFileCreate);
}
