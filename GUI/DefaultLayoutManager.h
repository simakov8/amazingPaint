#pragma once

#include "LayoutManager.h"

class CDefaultLayoutManager : public ILayoutManager
{
public:
	void InstantiateMainWindow(CMainWindow& mainWindow) const override;

	void CreateMenuBar(CMainWindow& mainWindow) const override;
	void CreateToolBar(CMainWindow& mainWindow) const override;
	void CreateStatusBar(CMainWindow& mainWindow) const override;
	void CreateDockWidget(CMainWindow& mainWindow) const override;
	void CreateCentralWidget(CMainWindow& mainWindow) const override;
};
