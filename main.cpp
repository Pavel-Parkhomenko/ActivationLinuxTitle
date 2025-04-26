#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QIcon appIcon(":/icons/icon-act.png"); // Путь из ресурсов

  MainWindow w;
  w.setWindowIcon(appIcon);
  w.show();
  return a.exec();
}
