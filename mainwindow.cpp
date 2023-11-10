#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weatherdata.h"
#include "currentconditionsdisplay.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    weatherdata* weatherData = new weatherdata();
    currentDisplay = new currentconditionsdisplay(weatherData, this);
    currentDisplay->setGeometry(50,50, 600, 800);
    currentDisplay->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

