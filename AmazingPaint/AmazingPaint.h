#pragma once
#include "MainWindow.h"

class CAmazingPaint
{
public:
	CAmazingPaint();
	
private:
	std::unique_ptr<CMainWindow> m_mainWindowPtr;
};

