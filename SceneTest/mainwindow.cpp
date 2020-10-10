#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QGraphicsView(parent),
    ui(new Ui::MainWindow)
{

    this->resize(800,600);

//    scene = new MianScene(800,600);
      scene = new MianScene(800,600);
//    scene->setSize(this->width(),this->height());
//    QGraphicsPathItem *pathTtem = new QGraphicsPathItem();
    scene->setSceneRect(this->rect());
    this->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
