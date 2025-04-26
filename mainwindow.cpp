#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QDesktopWidget>
#include "topwig.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  setWindowIcon(QIcon(":/icons/icon_act.png"));

  this->setFixedSize(300, 100);

  QRect screenGeometry = QDesktopWidget().screenGeometry();
  int screenWidth = screenGeometry.width();
  int screenHeight = screenGeometry.height();

  // Получаем размеры окна
  int windowWidth = this->width();
  int windowHeight = this->height();

  this->move(screenWidth - windowWidth, screenHeight - windowHeight);

  setAttribute(Qt::WA_TranslucentBackground);
  setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

  TopWig *widget = new TopWig(this);

  this->setCentralWidget(widget);

}

MainWindow::~MainWindow()
{
  delete ui;
}

//Активация Linux
//Чтобы активировать Linux, перейдите в раздел "Параметры".
