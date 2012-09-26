#ifndef SNIFFERSETTINGS_H
#define SNIFFERSETTINGS_H

#include <QWidget>
#include "interfaces/isniffersettings.h"
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

    
private:
    Ui::SnifferSettings *ui;
};

#endif // SNIFFERSETTINGS_H
