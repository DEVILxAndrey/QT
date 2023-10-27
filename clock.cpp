#include "clock.h"
#include <QMessageBox>
#include <QTimer>

Clock::Clock(QWidget *parent) : QLCDNumber(parent)
{
    second = 0;
    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(on_timer()));

    QTimer* messageTimer = new QTimer(this);
    connect(messageTimer, SIGNAL(timeout()), this, SLOT(on_timer()));
    messageTimer->start(10000);
}

void Clock::showMessage()
{
    QMessageBox::information(this, "Сообщение", "дзинь-дзинь");
}

void Clock::start()
{
    if (!timer->isActive()) timer->start();
}

void Clock::stop()
{
    if (timer->isActive()) timer->stop();
}

void Clock::reset()
{
    second = 0;
}

void Clock::on_timer()
{
    display(++second);
    if (second >= 5) {
        //this->showMessage();
        emit alarm();
        this->stop();
    }
}
