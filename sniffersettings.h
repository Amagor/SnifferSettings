#ifndef SNIFFERSETTINGS_H
#define SNIFFERSETTINGS_H

#include <QWidget>
#include "interfaces/isniffersettings.h"
#include <QSettings>
#include <QCoreApplication>

namespace Ui {
class SnifferSettings;
}

class SnifferSettings : public QWidget, ISnifferSettings
{
    Q_OBJECT
    Q_INTERFACES(ISnifferSettings)
    
public:
    explicit SnifferSettings(QWidget *parent = 0);
    ~SnifferSettings();
    QWidget* getWidget();
    void setCurrentSettings();
    void setDefaultSettings();
    void applySettings();
    void setSettingsName(QString name);

    
private:
    Ui::SnifferSettings *ui;

    void setSettings(QSettings &settings);
};

#endif // SNIFFERSETTINGS_H
