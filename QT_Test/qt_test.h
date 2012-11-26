#ifndef QT_TEST_H
#define QT_TEST_H

#include <QtGui/QWidget>
#include "ui_qt_test.h"

class QT_Test : public QWidget
{
    Q_OBJECT

public:
    QT_Test(QWidget *parent = 0);
    ~QT_Test();

private:
    Ui::QT_TestClass ui;
};

#endif // QT_TEST_H
