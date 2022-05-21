#include "DefaultLayoutManager.h"
#include <QMenuBar>
#include <QToolBar>

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

	auto fileMenuPtr{ menuBarPtr->addMenu("File") };
	fileMenuPtr->addAction("Save");
	fileMenuPtr->addAction("Open");
	fileMenuPtr->addAction("Create");

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
