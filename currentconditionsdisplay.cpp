#include "currentconditionsdisplay.h"

currentconditionsdisplay::currentconditionsdisplay( QWidget *parent) : QWidget(parent)
{
    lcdTemp = new QLCDNumber(this);
    lcdTemp->setGeometry(100, 100, 300, 50);
    lcdTemp->show();

}

void currentconditionsdisplay::display()
{
    lcdTemp->display(temperature);
}

void currentconditionsdisplay::update(float t, float h, float p)
{
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
    this->display();
}
