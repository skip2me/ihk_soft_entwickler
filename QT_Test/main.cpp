#include "qt_test.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_Test w;

    // hallo leute

    w.show();
    return a.exec();
}
