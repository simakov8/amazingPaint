#include "MainWindow.h"
#include "../GUI/DefaultLayoutManager.h"

CMainWindow::CMainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	CDefaultLayoutManager layoutManager;
	layoutManager.InstantiateMainWindow(*this);
}
