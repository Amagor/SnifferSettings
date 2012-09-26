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
    return this;
}

void SnifferSettings::setCurrentSettings(){

}
void SnifferSettings::setDefaultSettings(){

}
void SnifferSettings::applySettings(){

}

void SnifferSettings::setSettingsName(QString name)
{
    ui->settingsName->setText(name);
}

QT_BEGIN_NAMESPACE
Q_EXPORT_PLUGIN2(sniffersettings, SnifferSettings)
QT_END_NAMESPACE
