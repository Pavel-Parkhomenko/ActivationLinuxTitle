#ifndef TOPWIG_H
#define TOPWIG_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

class TopWig : public QWidget
{
  Q_OBJECT

public:
  explicit TopWig(QWidget *parent = nullptr);

protected:
  void mousePressEvent(QMouseEvent *event) override {
    event->ignore();
  }

  void mouseMoveEvent(QMouseEvent *event) override {
    return;
    event->ignore();
  }

};

#endif // TOPWIG_H
