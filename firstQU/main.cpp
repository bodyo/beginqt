#include <QtWidgets/QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>
#include "mywidget.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    myWidget widget;
    widget.show();
//    QWidget window;
//    window.setFixedSize(300, 300);

//    QPushButton *button = new QPushButton("Button", &window);
//    button->setGeometry(10,10,80,30);

//    QFont font("Courier");
//    QIcon icon("/home/bodyo/Documents/unnamed.png");
//    QPushButton button;
//    button.setFont(font);
//    button.setIcon(icon);
//    button.setText("A button");
//    button.setToolTip("A tooltip");
//    QPushButton button1("newButton", &button);

//    window.show();

    return app.exec();
}
