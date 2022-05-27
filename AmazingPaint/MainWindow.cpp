#include "MainWindow.h"
#include "../GUI/DefaultLayoutManager.h"
#include "../Graphics/GraphicsWindow.h"

CMainWindow::CMainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	CDefaultLayoutManager layoutManager{ std::make_shared<CStyleSheetCreator>() };

	layoutManager.InstantiateMainWindow(*this);
}

void CMainWindow::onFileCreate()
{
	CDefaultLayoutManager layoutManager{ std::make_shared<CStyleSheetCreator>() };

	layoutManager.AddDockWidget(*this, new CGraphicsWindow{});
}

void CMainWindow::onFileSave()
{
}

void CMainWindow::onFileOpen()
{

}

void CMainWindow::onFileClose()
{

}
