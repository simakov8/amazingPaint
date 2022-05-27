#include "DefaultLayoutManager.h"
#include <QMenuBar>
#include <QToolBar>

void CDefaultLayoutManager::InstantiateMainWindow(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
	mainWindow.setMinimumSize(QSize{ 700, 500 });

	CreateMenuBar(mainWindow, styleSheetCreator);
	CreateToolBar(mainWindow, styleSheetCreator);

	mainWindow.showMaximized();
}

void CDefaultLayoutManager::CreateMenuBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
	auto menuBarPtr = new QMenuBar{ &mainWindow };

	CreateFileMenu(menuBarPtr, mainWindow);


	mainWindow.setMenuBar(menuBarPtr);
}

void CDefaultLayoutManager::CreateToolBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
	auto toolBarPtr = new QToolBar{ &mainWindow };
	
	toolBarPtr->addAction("Triangle");
	toolBarPtr->addAction("Circle");
	toolBarPtr->addAction("Rectangle");

	mainWindow.addToolBar(toolBarPtr);
}

void CDefaultLayoutManager::CreateStatusBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
}

void CDefaultLayoutManager::CreateDockWidget(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
}

void CDefaultLayoutManager::CreateCentralWidget(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
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
