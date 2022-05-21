#pragma once

#include "LayoutManager.h"

class CDefaultLayoutManager : public ILayoutManager
{
public:
	void InstantiateMainWindow(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;

	void CreateMenuBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;
	void CreateToolBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;
	void CreateStatusBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;
	void CreateDockWidget(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;
	void CreateCentralWidget(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const override;
};
