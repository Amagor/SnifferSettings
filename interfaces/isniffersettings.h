#ifndef ISNIFFERSETTINGS_H
#define ISNIFFERSETTINGS_H

#include <QtCore>

class ISnifferSettings{
public:
    virtual QWidget* getWidget() = 0;
    virtual void setCurrentSettings() = 0;
    virtual void setDefaultSettings() = 0;
    virtual void applySettings() = 0;
};

QT_BEGIN_NAMESPACE
Q_DECLARE_INTERFACE(ISnifferSettings, "Posprocessor.IsnifferSettings")
QT_END_NAMESPACE



#endif // ISNIFFERSETTINGS_H
