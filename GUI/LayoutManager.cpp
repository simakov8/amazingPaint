#include "LayoutManager.h"

void ILayoutManager::InstantiateMainWindow(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const
{
	CreateMenuBar(mainWindow, styleSheetCreator);
	CreateToolBar(mainWindow, styleSheetCreator);
	CreateStatusBar(mainWindow, styleSheetCreator);
	CreateDockWidget(mainWindow, styleSheetCreator);
	CreateCentralWidget(mainWindow, styleSheetCreator);
}
