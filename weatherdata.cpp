#include "weatherdata.h"

weatherdata::weatherdata()
{
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();

    connect (timer, SIGNAL(timeout()), this, SLOT(on_timer()));
}

void weatherdata::on_timer()
{
    temperature = std::rand() % 60 - 30;
    emit update(temperature, 0, 0);
}
