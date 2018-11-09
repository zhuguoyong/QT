#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    EventLabel *label = new EventLabel;
    label->setAttribute(Qt::WA_DeleteOnClose);
    label->setWindowTitle("MouseEvent Demo");
    label->resize(300, 200);
    label->show();
}

MainWindow::~MainWindow()
{

}

void EventLabel::mouseMoveEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h3>Move: (%1, %2)</h3></center>")//QLabel是支持HTML，因此使用HTML格式化文字
                  .arg(QString::number(event->x()), QString::number(event->y())));
}

void EventLabel::mousePressEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Press: (%1, %2)</h1></center>")
                  .arg(QString::number(event->x()), QString::number(event->y())));
}

void EventLabel::mouseReleaseEvent(QMouseEvent *event)
{
    QString msg;
    msg.sprintf("<center><h1>Release: (%d, %d)</h1></center>",
                event->x(), event->y());
    this->setText(msg);
}

