#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>
#include "observer.h"

class subject : public QObject
{
    Q_OBJECT
public:
    virtual void registerObserver(Observer*) = 0;
    virtual void removeObserver(Observer*) = 0;
    virtual void notifyObservers() = 0;
public slots:
    virtual void on_timer() = 0;
};

#endif // SUBJECT_H
