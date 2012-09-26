#include "sniffersettings.h"
#include "ui_sniffersettings.h"

SnifferSettings::SnifferSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SnifferSettings)
{
    ui->setupUi(this);
}

SnifferSettings::~SnifferSettings()
{
    delete ui;
}

QWidget* SnifferSettings::getWidget(){

}
void SnifferSettings::setCurrentSettings(){

}
void SnifferSettings::setDefaultSettings(){

}
void SnifferSettings::applySettings(){

}

QT_BEGIN_NAMESPACE
Q_EXPORT_PLUGIN2(sniffersettings, SnifferSettings)
QT_END_NAMESPACE
