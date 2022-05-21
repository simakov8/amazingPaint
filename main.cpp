#include <QtWidgets/QApplication>
#include "AmazingPaint/AmazingPaint.h"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  CAmazingPaint paint;

  return a.exec();
}
