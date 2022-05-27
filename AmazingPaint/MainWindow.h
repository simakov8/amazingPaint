#pragma once

#include <QtWidgets/QMainWindow>

class CMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	CMainWindow(QWidget* parent = Q_NULLPTR);

public slots:
	void onFileCreate();
	void onFileSave();
	void onFileOpen();
	void onFileClose();
};
