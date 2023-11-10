#include "currentconditionsdisplay.h"

currentconditionsdisplay::currentconditionsdisplay(subject *wd, QWidget *parent) : QWidget(parent)
{
    this->weatherdata = wd;
    wd->registerObserver(this);
    lcdTemp = new QLCDNumber(this);
    lcdTemp->setGeometry(100, 100, 300, 50);
    lcdTemp->show();
    lcdHumidity = new QLCDNumber(this);
    lcdHumidity->setGeometry(200, 200, 300, 50);
    lcdHumidity->show();
    lcdPressure = new QLCDNumber(this);
    lcdPressure->setGeometry(50, 50, 300, 50);
    lcdPressure->show();
}

void currentconditionsdisplay::display()
{
    lcdTemp->display(temperature);
    lcdHumidity->display(humidity);
    lcdPressure->display(pressure);
}

void currentconditionsdisplay::update(float t, float h, float p)
{
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
    this->display();
}
