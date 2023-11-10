#include "quilib.h"
#include <QLabel>
#include <QGridLayout>

QuiLib::QuiLib(QWidget* parent) : QDialog(parent)
{
    QGridLayout* gridLayout = new QGridLayout(this);
    setLayout(gridLayout);
    gridLayout->addWidget(new QLabel("Привет из библиотеки", this));
}
