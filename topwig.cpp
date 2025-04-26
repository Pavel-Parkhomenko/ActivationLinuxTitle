#include "topwig.h"
#include <QLabel>
#include <QVBoxLayout>

TopWig::TopWig(QWidget *parent)
    : QWidget{parent}
{
  this->setStyleSheet("QLabel { color: #DCDCDC; }");

  QLabel *text1 = new QLabel("Активация Linux");
  QFont font = text1->font();
  font.setPointSize(14);
  text1->setFont(font);

  QLabel *text2 = new QLabel("Чтобы активировать Linux, перейдите в раздел \"Параметры\".");
  text2->setWordWrap(true);
  QFont font2 = text2->font();
  font2.setPointSize(10);
  text2->setFont(font2);

  QVBoxLayout *vl = new QVBoxLayout;
  vl->addWidget(text1);
  vl->addWidget(text2);

  this->setLayout(vl);
}
