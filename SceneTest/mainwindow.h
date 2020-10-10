#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsView>
#include <QMouseEvent>
#include "MianScene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QGraphicsView
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    MianScene *scene;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
