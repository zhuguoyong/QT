#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMouseEvent>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

/*在所有组件的父类QWidget中，定义了很多事件处理的回调函数，
 * 如keyPressEvent()、keyReleaseEvent()、mouseDoubleClickEvent()、
 * mouseMoveEvent()、mousePressEvent()、mouseReleaseEvent()等。
 * 这些函数都是 protected virtual 的，
 * 也就是说，可以在子类中重新实现这些函数。
 */
class EventLabel : public QLabel
{
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};
#endif // MAINWINDOW_H
