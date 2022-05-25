#include "MainWindow.h"
#include "../GUI/DefaultLayoutManager.h"

CMainWindow::CMainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	CDefaultLayoutManager layoutManager;
	CStyleSheetCreator styleSheetCreator;
	layoutManager.InstantiateMainWindow(*this, styleSheetCreator);
}

void CMainWindow::OnFileCreate()
{
		
}
