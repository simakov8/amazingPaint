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

	auto fileMenuPtr{ menuBarPtr->addMenu("File") };
	fileMenuPtr->addAction("Save");
	fileMenuPtr->addAction("Open");
	fileMenuPtr->addAction("Create");

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
