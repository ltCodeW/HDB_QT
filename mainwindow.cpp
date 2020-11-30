#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QLabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("气动加热数据库");
    QLabel *stateLable = new QLabel("未连接");
    this->statusBar()->addWidget(stateLable);
}

MainWindow::~MainWindow()
{
    delete ui;
}
