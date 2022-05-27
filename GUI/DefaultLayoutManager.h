#pragma once

#include "LayoutManager.h"

class CDefaultLayoutManager : public ILayoutManager
{
public:
	CDefaultLayoutManager(std::shared_ptr<CStyleSheetCreator> styleSheetCreator);

	void InstantiateMainWindow(CMainWindow& mainWindow) const override;

	void CreateMenuBar(CMainWindow& mainWindow) const override;
	void CreateToolBar(CMainWindow& mainWindow) const override;
	void CreateStatusBar(CMainWindow& mainWindow) const override;
	void CreateDockWidget(CMainWindow& mainWindow) const override;
	void CreateCentralWidget(CMainWindow& mainWindow) const override;

	virtual void AddDockWidget(CMainWindow& mainWindow, QWidget* dockBody) const override;

private:
	void CreateFileMenu(QMenuBar* menuBar, CMainWindow& mainWindow) const;

private:
	std::shared_ptr<CStyleSheetCreator> m_styleSheetCreator;

};
