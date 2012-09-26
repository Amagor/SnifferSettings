#include <QtGui/QApplication>
#include "sniffersettings.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SnifferSettings w;
    w.show();
    
    return a.exec();
}
