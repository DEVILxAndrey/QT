#ifndef CURENTCONDITIONSDISPLAY_H
#define CURENTCONDITIONSDISPLAY_H

#include <QtWidgets>
#include <QLCDNumber>

class currentconditionsdisplay : public QWidget
{
        Q_OBJECT

private:
    float temperature;
    float humidity;
    float pressure;
    QLCDNumber *lcdTemp;

public:
    explicit currentconditionsdisplay( QWidget *parent = nullptr);
    void display();

private slots:
    void update(float, float, float);
};

#endif // CURENTCONDITIONSDISPLAY_H
