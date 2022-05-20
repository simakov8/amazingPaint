#pragma once

#include <QtWidgets/QMainWindow>
#include <QMenuBar>

class CMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	CMainWindow(QWidget* parent = Q_NULLPTR);

private:
	void CreateMenuBar();
	void CreateManipulatorsToolBar();

private:
	QToolBar* m_sceneManipulatorsToolBar;
	QMenuBar* m_mainWindowMenuBar;

};
