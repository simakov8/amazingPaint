#include "LayoutManager.h"

void ILayoutManager::InstantiateMainWindow(CMainWindow& mainWindow) const
{
	CreateMenuBar(mainWindow);
	CreateToolBar(mainWindow);
	CreateStatusBar(mainWindow);
	CreateDockWidget(mainWindow);
	CreateCentralWidget(mainWindow);
}
