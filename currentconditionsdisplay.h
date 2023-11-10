#ifndef CURENTCONDITIONSDISPLAY_H
#define CURENTCONDITIONSDISPLAY_H

#include <QtWidgets>
#include <QLCDNumber>
#include "observer.h"
#include "displayelement.h"
#include "subject.h"

class currentconditionsdisplay : public QWidget, public Observer, public DisplayElement
{
    Q_OBJECT

private:
    float temperature;
    float humidity;
    float pressure;
    subject *weatherdata;
    QLCDNumber *lcdTemp;
    QLCDNumber *lcdHumidity;
    QLCDNumber *lcdPressure;

public:
    explicit currentconditionsdisplay(subject*, QWidget *parent = nullptr);
    void display();
    void update(float, float, float);

signals:

};

#endif // CURENTCONDITIONSDISPLAY_H
