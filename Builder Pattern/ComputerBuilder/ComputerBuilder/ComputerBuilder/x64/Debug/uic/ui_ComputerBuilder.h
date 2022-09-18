/********************************************************************************
** Form generated from reading UI file 'ComputerBuilder.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERBUILDER_H
#define UI_COMPUTERBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComputerBuilderClass
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *pinpai;
    QComboBox *CPU;
    QComboBox *neicun;
    QComboBox *yingpan;
    QComboBox *xianka;
    QComboBox *xianshiqi;
    QComboBox *caozuoxitong;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *zuzhuang;
    QSpacerItem *horizontalSpacer;
    QPushButton *chongxinlai;

    void setupUi(QWidget *ComputerBuilderClass)
    {
        if (ComputerBuilderClass->objectName().isEmpty())
            ComputerBuilderClass->setObjectName(QString::fromUtf8("ComputerBuilderClass"));
        ComputerBuilderClass->resize(600, 263);
        widget = new QWidget(ComputerBuilderClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 601, 201));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 6, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 5, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        pinpai = new QComboBox(widget);
        pinpai->setObjectName(QString::fromUtf8("pinpai"));

        gridLayout_3->addWidget(pinpai, 0, 1, 1, 2);

        CPU = new QComboBox(widget);
        CPU->setObjectName(QString::fromUtf8("CPU"));

        gridLayout_3->addWidget(CPU, 1, 1, 1, 2);

        neicun = new QComboBox(widget);
        neicun->setObjectName(QString::fromUtf8("neicun"));

        gridLayout_3->addWidget(neicun, 2, 1, 1, 2);

        yingpan = new QComboBox(widget);
        yingpan->setObjectName(QString::fromUtf8("yingpan"));

        gridLayout_3->addWidget(yingpan, 3, 1, 1, 2);

        xianka = new QComboBox(widget);
        xianka->setObjectName(QString::fromUtf8("xianka"));

        gridLayout_3->addWidget(xianka, 4, 1, 1, 2);

        xianshiqi = new QComboBox(widget);
        xianshiqi->setObjectName(QString::fromUtf8("xianshiqi"));

        gridLayout_3->addWidget(xianshiqi, 5, 1, 1, 2);

        caozuoxitong = new QComboBox(widget);
        caozuoxitong->setObjectName(QString::fromUtf8("caozuoxitong"));

        gridLayout_3->addWidget(caozuoxitong, 6, 1, 1, 2);

        horizontalLayoutWidget = new QWidget(ComputerBuilderClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 200, 301, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        zuzhuang = new QPushButton(horizontalLayoutWidget);
        zuzhuang->setObjectName(QString::fromUtf8("zuzhuang"));

        horizontalLayout->addWidget(zuzhuang);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chongxinlai = new QPushButton(horizontalLayoutWidget);
        chongxinlai->setObjectName(QString::fromUtf8("chongxinlai"));

        horizontalLayout->addWidget(chongxinlai);


        retranslateUi(ComputerBuilderClass);

        QMetaObject::connectSlotsByName(ComputerBuilderClass);
    } // setupUi

    void retranslateUi(QWidget *ComputerBuilderClass)
    {
        ComputerBuilderClass->setWindowTitle(QCoreApplication::translate("ComputerBuilderClass", "ComputerBuilder", nullptr));
        label_3->setText(QCoreApplication::translate("ComputerBuilderClass", "\347\241\254\347\233\230", nullptr));
        label_5->setText(QCoreApplication::translate("ComputerBuilderClass", "\345\206\205\345\255\230", nullptr));
        label_7->setText(QCoreApplication::translate("ComputerBuilderClass", "\346\223\215\344\275\234\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("ComputerBuilderClass", "\345\223\201\347\211\214", nullptr));
        label_2->setText(QCoreApplication::translate("ComputerBuilderClass", "CPU", nullptr));
        label_4->setText(QCoreApplication::translate("ComputerBuilderClass", "\346\230\276\347\244\272\345\231\250", nullptr));
        label_6->setText(QCoreApplication::translate("ComputerBuilderClass", "\346\230\276\345\215\241", nullptr));
        zuzhuang->setText(QCoreApplication::translate("ComputerBuilderClass", "\345\260\261\350\277\231\344\271\210\347\232\204\345\220\247\357\274\214\347\273\204\350\243\205", nullptr));
        chongxinlai->setText(QCoreApplication::translate("ComputerBuilderClass", "\351\207\215\346\226\260\346\235\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComputerBuilderClass: public Ui_ComputerBuilderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERBUILDER_H
