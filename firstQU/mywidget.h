#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
//#include <QProgressBar>

QT_FORWARD_DECLARE_CLASS(QProgressBar)
QT_FORWARD_DECLARE_CLASS(QPushButton)
QT_FORWARD_DECLARE_CLASS(QSlider)


class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = 0);

signals:
    void counterRighed();
private slots:
    void setButtonClicked(bool checked);
private:
    QPushButton *button;
    QProgressBar *pbar;
    QSlider *slider;
    int counter;

};

#endif // MYWIDGET_H
