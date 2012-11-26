/********************************************************************************
** Form generated from reading UI file 'qt_test.ui'
**
** Created: Mon 26. Nov 18:54:56 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_TEST_H
#define UI_QT_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_TestClass
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *QT_TestClass)
    {
        if (QT_TestClass->objectName().isEmpty())
            QT_TestClass->setObjectName(QString::fromUtf8("QT_TestClass"));
        QT_TestClass->resize(499, 495);
        pushButton = new QPushButton(QT_TestClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 210, 75, 23));

        retranslateUi(QT_TestClass);

        QMetaObject::connectSlotsByName(QT_TestClass);
    } // setupUi

    void retranslateUi(QWidget *QT_TestClass)
    {
        QT_TestClass->setWindowTitle(QApplication::translate("QT_TestClass", "QT_Test", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("QT_TestClass", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QT_TestClass: public Ui_QT_TestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_TEST_H
