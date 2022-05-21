#pragma once
#include "../AmazingPaint/MainWindow.h"

class ILayoutManager
{
public:
	virtual void InstantiateMainWindow(CMainWindow& mainWindow) const;

	virtual void CreateMenuBar(CMainWindow& mainWindow) const = 0;
	virtual void CreateToolBar(CMainWindow& mainWindos) const = 0;
	virtual void CreateStatusBar(CMainWindow& mainWindos) const = 0;
	virtual void CreateDockWidget(CMainWindow& mainWindos) const = 0;
	virtual void CreateCentralWidget(CMainWindow& mainWindos) const = 0;
};
