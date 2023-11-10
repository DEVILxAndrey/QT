#include "weatherdata.h"

weatherdata::weatherdata()
{
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();

    connect (timer, SIGNAL(timeout()), this, SLOT(on_timer()));
}

void weatherdata::registerObserver(Observer *o)
{
    observers.append(o);
}

void weatherdata::removeObserver(Observer *o)
{
    auto iter = observers.begin();
    while (iter != observers.end()) {
        if (*iter == o) {
            iter = observers.erase(iter);
        }
        else {
            iter++;
        }
    }
}

void weatherdata::notifyObservers()
{
    for (auto iter : observers) {
        ((Observer*)iter)->update(temperature,humidity, pressure);
    }
}

void weatherdata::measurmentsChanged() {
    notifyObservers();
}
void weatherdata::setMeasurments(float,float,float) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurmentsChanged();
}
void weatherdata::on_timer()
{
    temperature = std::rand() % -30;
    measurmentsChanged();
}
