#include <memory>
#include "AmazingPaint.h"

CAmazingPaint::CAmazingPaint()
	: m_mainWindowPtr{ std::make_unique<CMainWindow>() }
{
	m_mainWindowPtr->show();
}
