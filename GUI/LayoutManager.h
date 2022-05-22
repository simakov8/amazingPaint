#pragma once
#include "../AmazingPaint/MainWindow.h"
#include "StyleSheetCreator.h"

class ILayoutManager
{
public:
	virtual ~ILayoutManager() = default;

	virtual void InstantiateMainWindow(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const;

	virtual void CreateMenuBar(CMainWindow& mainWindow, const CStyleSheetCreator& styleSheetCreator) const = 0;
	virtual void CreateToolBar(CMainWindow& mainWindos, const CStyleSheetCreator& styleSheetCreator) const = 0;
	virtual void CreateStatusBar(CMainWindow& mainWindos, const CStyleSheetCreator& styleSheetCreator) const = 0;
	virtual void CreateDockWidget(CMainWindow& mainWindos, const CStyleSheetCreator& styleSheetCreator) const = 0;
	virtual void CreateCentralWidget(CMainWindow& mainWindos, const CStyleSheetCreator& styleSheetCreator) const = 0;
};
