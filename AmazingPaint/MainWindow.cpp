#include "MainWindow.h"
#include <QToolBar>

CMainWindow::CMainWindow(QWidget* parent)
{
	sceneManipulatorButtons = new QToolBar{this};
	addToolBar(sceneManipulatorButtons);
}
