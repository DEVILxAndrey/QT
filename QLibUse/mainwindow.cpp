#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QuiLib/include/quilib.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QuiLib libWidget(this);
        libWidget.exec();
}

