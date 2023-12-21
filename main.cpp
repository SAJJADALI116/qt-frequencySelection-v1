#include "frequencysettings.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrequencySettings w;
    w.show();
    return a.exec();
}
