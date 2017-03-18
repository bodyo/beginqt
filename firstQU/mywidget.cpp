#include "mywidget.h"
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

#include <QtWidgets/QApplication>

myWidget::myWidget(QWidget *parent)
    : QWidget(parent),
      button(new QPushButton("Button", this))
//      pbar(new QProgressBar(this)),
//      slider(new QSlider(this))
{
    counter = 0;
    setFixedSize(300, 400);
    button->setGeometry(10,10,180,40);
    button->setCheckable(true);
//    pbar->setRange(0, 100);
//    pbar->setValue(0);
//    pbar->set
//    pbar->setGeometry(20,20,100,40);
//    slider->setRange(0, 100);
//    slider->setOrientation(Qt::Horizontal);
//    slider->setGeometry(20, 20, 100, 40);
//    slider->setValue(0);
//    QObject::connect(slider, SIGNAL(valueChanged(int)), pbar, SLOT(setValue(int)));
    connect(button, SIGNAL(clicked(bool)), this, SLOT(setButtonClicked(bool)));
    connect(this, SIGNAL(counterRighed()), QApplication::instance(), SLOT(quit()));
}

void myWidget::setButtonClicked(bool checked)
{
    if(checked)
        button->setText("CLICKED");
    else
        button->setText("not YET");
    counter++;
    if(counter == 10)
        emit counterRighed();
}

//void myWidget::counterRighed();
