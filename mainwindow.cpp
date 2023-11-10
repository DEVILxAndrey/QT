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
    currentDisplay = new CurrentConditionsDisplay(weatherData, this);
    currentDisplay->setGeometry(50,50, 600, 800);
    currentDisplay->show();

    connect(weatherData, SIGNAL(update(float,float,float)), currentDisplay, SLOT(on_update(float,float,float000)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

