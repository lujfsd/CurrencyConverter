/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri Jan 3 13:02:27 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox_src;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox_dst;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_result;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_convert;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(331, 153);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        comboBox_src = new QComboBox(Dialog);
        comboBox_src->setObjectName(QString::fromUtf8("comboBox_src"));

        horizontalLayout_2->addWidget(comboBox_src);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBox_dst = new QComboBox(Dialog);
        comboBox_dst->setObjectName(QString::fromUtf8("comboBox_dst"));

        horizontalLayout->addWidget(comboBox_dst);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_result = new QLineEdit(Dialog);
        lineEdit_result->setObjectName(QString::fromUtf8("lineEdit_result"));
        lineEdit_result->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_result->setMouseTracking(true);
        lineEdit_result->setFocusPolicy(Qt::NoFocus);
        lineEdit_result->setLayoutDirection(Qt::LeftToRight);
        lineEdit_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_result);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_convert = new QPushButton(Dialog);
        pushButton_convert->setObjectName(QString::fromUtf8("pushButton_convert"));

        horizontalLayout_4->addWidget(pushButton_convert);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_exit = new QPushButton(Dialog);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        horizontalLayout_4->addWidget(pushButton_exit);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Dialog);
        QObject::connect(pushButton_exit, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(pushButton_convert, SIGNAL(clicked()), Dialog, SLOT(convert()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Currency Converter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\345\216\237\345\247\213\350\264\247\345\270\201", 0, QApplication::UnicodeUTF8));
        comboBox_src->clear();
        comboBox_src->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\344\272\272\346\260\221\345\270\201(CNY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\270\257\345\270\201(HKD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\260\345\270\201(TWD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\276\263\351\227\250\345\205\203(MOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\276\216\345\205\203(USD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\213\261\351\225\221(GBP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\254\247\345\205\203(EUR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\221\236\345\243\253\346\263\225\351\203\216(CHF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\227\245\345\205\203(JPY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\237\251\345\234\206(KRW)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\263\260\351\223\242(THB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\266\212\345\215\227\347\233\276(VND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\234\235\351\262\234\345\234\206(KPW)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\350\201\224\351\205\213\350\277\252\346\213\211\345\247\206(AED)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\207\221\344\273\267\347\233\216\345\217\270(XAU)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\231\275\351\207\221\347\233\216\345\217\270(XPT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\223\266\344\273\267\347\233\216\345\217\270 (XAG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\222\257\347\233\216\345\217\270(XPD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\276\263\345\244\247\345\210\251\344\272\232\345\205\203(AUD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\212\240\346\213\277\345\244\247\345\205\203(CAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\221\236\345\205\270\345\205\213\346\234\227(SEK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\260\345\212\240\345\235\241\345\205\203(SGD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\260\350\245\277\345\205\260\345\205\203(NZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\231\272\345\210\251\346\257\224\347\264\242(CLP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\230\202(SLL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\217\262\345\276\213\345\256\276\346\257\224\347\264\242(PHP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\245\344\274\246\346\257\224\344\272\232\346\257\224\347\264\242(COP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\244\345\267\264\346\257\224\347\264\242(CUP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\260\345\272\246\345\215\242\346\257\224(INR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\277\204\347\275\227\346\226\257\345\215\242\345\270\203(RUB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\260\345\272\246\345\260\274\350\245\277\344\272\232\345\215\242\346\257\224(IDR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\213\277\351\251\254\345\267\264\345\260\224\345\215\232\344\272\232(PAB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\270\203\344\272\232\347\272\275\345\207\240\345\206\205\344\272\232\345\237\272\351\202\243(PGK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\346\235\245\350\245\277\344\272\232\346\236\227\345\220\211\347\211\271(MYR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\274\212\346\213\211\345\205\213\347\254\254\347\272\263\345\260\224(IQD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\211\200\347\275\227\351\227\250\347\276\244\345\262\233\345\205\203(SBD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\264\242\351\251\254\345\210\251\344\272\232\345\205\210\344\273\244(SOS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\227\351\235\236\345\205\260\347\211\271(ZAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\257\351\207\214\345\205\260\345\215\241\345\215\242\346\257\224(LKR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\243\350\265\253\345\213\222\346\213\277\347\276\244\345\262\233\347\243\205(SHP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\257\345\250\201\345\243\253\345\205\260\351\207\214\345\205\260\345\220\211\345\260\274(SZL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\242\250\350\245\277\345\223\245\346\257\224\347\264\242(MXN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\273\245\350\211\262\345\210\227\351\225\221(ILS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\211\231\344\271\260\345\212\240\345\205\203(JMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\232\346\230\216\345\260\274\345\212\240\346\257\224\347\264\242(DOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\252\345\271\263\346\264\213\346\263\225\351\203\216(XPF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\271\351\272\246\345\205\213\346\234\227(DKK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\215\267\345\205\213\345\205\213\346\234\227(CZK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\214\252\345\250\201\345\205\213\346\234\227(NOK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\346\233\274\351\207\214\344\272\232\345\260\224(OMR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\345\271\262\350\276\276\345\205\210\344\273\244(UGX)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\345\205\213\345\205\260\350\265\253\345\244\253\347\261\263(UAH)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\346\213\211\345\234\255\346\226\260\346\257\224\347\264\242(UYU)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\223\246\345\212\252\351\230\277\345\233\276\347\223\246\345\233\276(VUV)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\213\211\345\234\255\347\223\234\346\213\211\345\260\274(PYG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\230\351\262\201\346\226\260\347\264\242\345\260\224(PEN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\270\203\351\232\206\350\277\252\346\263\225\351\203\216(BIF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\221\346\221\251\347\275\227\346\263\225\351\203\216(KMF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\220\211\345\270\203\346\217\220\346\263\225\351\203\216(DJF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\207\240\345\206\205\344\272\232\346\263\225\351\203\216(GNF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\231\276\346\205\225\345\244\247\345\205\203(BMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\274\205\347\224\270\345\205\203(MMK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\272\263\347\261\263\346\257\224\344\272\232\345\205\203(NAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\260\274\346\263\212\345\260\224\345\215\242\346\257\224(NPR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\237\272\346\226\257\345\235\246\345\215\242\346\257\224(PKR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\227\346\226\257\350\215\267\345\205\260\347\233\276(ANG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\345\260\224\344\273\243\345\244\253\345\215\242\351\235\236\344\272\232(MVR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\255\344\272\232\351\202\243\345\205\203(GYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\260\274\345\212\240\346\213\211\347\223\234\347\247\221\345\244\232\345\267\264(NIO)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\245\210\345\217\212\345\210\251\344\272\232\345\245\210\346\213\211(NGN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\265\267\345\234\260\345\217\244\345\276\267(HTG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\264\252\351\203\275\346\213\211\346\226\257\344\274\246\347\232\256\346\213\211(HNL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\214\210\347\211\231\345\210\251\347\246\217\346\236\227(HUF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\206\260\345\262\233\345\205\213\351\203\216(ISK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\215\344\270\271\345\215\242\346\257\224(BTN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\223\210\351\251\254\345\205\203(BSD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\236\227\347\254\254\347\272\263\345\260\224(BHD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\255\237\345\212\240\346\213\211\345\241\224\345\215\241(BDT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\267\264\345\244\232\346\226\257\345\205\203(BBD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\264\235\351\207\214\346\226\257\345\270\201(BZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\222\231\345\217\244\345\233\276\346\240\274\351\207\214\345\205\213(MNT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\221\251\346\264\233\345\223\245\351\201\223\346\213\211\345\247\206(MAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\345\260\224\345\267\264\345\260\274\344\272\232\345\210\227\345\205\213(ALL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\345\260\224\345\217\212\345\210\251\344\272\232\347\254\254\347\272\263\345\260\224(DZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\346\240\271\345\273\267\346\257\224\347\264\242(ARS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\205\271\347\275\227\346\217\220(PLN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\241\345\241\224\345\260\224\345\210\251\345\260\224(QAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\351\262\201\345\267\264\345\262\233\345\274\227\347\275\227\346\236\227(AWG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\216\273\345\210\251\347\273\264\344\272\232\345\270\201(BOB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\232\350\214\250\347\223\246\347\272\263\346\231\256\346\213\211(BWP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\221\345\250\201\347\211\271\347\254\254\347\272\263\345\260\224(KWD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\257\256\345\233\275\345\237\272\346\231\256(LAK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\231\345\210\251\344\272\232\351\225\221(SYP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\235\246\346\241\221\345\260\274\344\272\232\345\205\210\344\273\244(TZS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\213\211\350\204\261\347\273\264\344\272\232\346\213\211\347\211\271(LVL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\273\216\345\267\264\345\253\251\351\225\221(LBP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\216\261\347\264\242\346\211\230\346\264\233\346\217\220(LSL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\257\224\351\207\214\344\272\232\345\205\203(LRD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\257\224\344\272\232\347\254\254\347\272\263\345\260\224(LYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\253\213\351\231\266\345\256\233\347\253\213\347\211\271(LTL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\350\245\277\351\233\267\344\272\232\345\260\224(BRL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\275\230\345\212\240(TOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\211\271\347\253\213\345\260\274\350\276\276\345\222\214\345\244\232\345\267\264\345\223\245(TTD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\254\254\347\272\263\345\260\224(TND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\221\251\345\260\224\345\244\232\347\223\246\345\210\227\344\274\212(MDL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\261\266\350\216\261\345\205\203(BND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\232\345\223\245\351\235\236\346\264\262\345\205\261\345\220\214\344\275\223\346\263\225\351\203\216(XOF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\232\346\236\234\344\270\255\351\235\236\345\205\261\345\220\214\344\275\223\346\263\225\351\203\216(XAF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\237\254\345\237\224\345\257\250\345\210\251\345\260\224\346\226\257(KHR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\275\233\345\276\227\350\247\222\345\237\203\346\226\257\345\272\223\345\244\232(CVE)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\345\205\266\351\241\277\347\254\254\347\272\263\345\260\224(MKD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\346\213\211\347\273\264\345\205\213\347\223\246\346\237\245(MWK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\274\200\346\233\274\347\276\244\345\262\233\345\205\203(KYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\245\346\226\257\350\276\276\351\273\216\345\212\240\347\247\221\346\234\227(CRC)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\205\213\347\275\227\345\234\260\344\272\232\345\272\223\347\272\263(HRK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\234\345\212\240\345\213\222\346\257\224\345\205\203(XCD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\237\203\345\217\212\351\225\221(EGP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\237\350\200\263\345\205\266\351\207\214\346\213\211(TRY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\220\250\345\260\224\347\223\246\345\244\232\347\247\221\346\234\227(SVC)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\237\203\345\241\236\344\277\204\346\257\224\344\272\232\346\257\224\345\260\224(ETB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\246\217\345\205\213\345\205\260\347\276\244\345\262\233\351\225\221(FKP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\206\210\346\257\224\344\272\232\350\276\276\346\213\211\350\245\277(GMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\257\233\351\207\214\345\241\224\345\260\274\344\272\232\344\271\214\345\220\211\344\272\232(MRO)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\257\233\351\207\214\346\261\202\346\226\257\345\215\242\346\257\224(MUR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\220\250\346\221\251\344\272\232\345\241\224\346\213\211(WST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\243\345\244\232\347\276\216\345\244\232\345\270\203\346\213\211(STD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\272\232\345\260\224(SAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\237\351\227\250\351\207\214\344\272\232\345\260\224(YER)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\241\236\350\210\214\345\260\224\345\215\242\346\257\224(SCR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\233\264\345\270\203\347\275\227\351\231\200\351\225\221(GIP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\261\345\234\260\351\251\254\346\213\211\346\240\274\346\237\245\345\260\224(GTQ)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\272\246\346\227\246\347\254\254\347\272\263\345\260\224(JOD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\210\350\220\250\345\205\213\346\226\257\345\235\246\350\205\276\346\240\274(KZT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\202\257\344\272\232\345\205\210\344\273\244(KES)", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Dialog", "\347\233\256\346\240\207\350\264\247\345\270\201", 0, QApplication::UnicodeUTF8));
        comboBox_dst->clear();
        comboBox_dst->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\344\272\272\346\260\221\345\270\201(CNY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\270\257\345\270\201(HKD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\260\345\270\201(TWD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\276\263\351\227\250\345\205\203(MOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\276\216\345\205\203(USD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\213\261\351\225\221(GBP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\254\247\345\205\203(EUR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\221\236\345\243\253\346\263\225\351\203\216(CHF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\227\245\345\205\203(JPY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\237\251\345\234\206(KRW)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\263\260\351\223\242(THB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\266\212\345\215\227\347\233\276(VND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\234\235\351\262\234\345\234\206(KPW)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\350\201\224\351\205\213\350\277\252\346\213\211\345\247\206(AED)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\207\221\344\273\267\347\233\216\345\217\270(XAU)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\231\275\351\207\221\347\233\216\345\217\270(XPT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\223\266\344\273\267\347\233\216\345\217\270 (XAG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\222\257\347\233\216\345\217\270(XPD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\276\263\345\244\247\345\210\251\344\272\232\345\205\203(AUD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\212\240\346\213\277\345\244\247\345\205\203(CAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\221\236\345\205\270\345\205\213\346\234\227(SEK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\260\345\212\240\345\235\241\345\205\203(SGD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\260\350\245\277\345\205\260\345\205\203(NZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\231\272\345\210\251\346\257\224\347\264\242(CLP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\230\202(SLL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\217\262\345\276\213\345\256\276\346\257\224\347\264\242(PHP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\245\344\274\246\346\257\224\344\272\232\346\257\224\347\264\242(COP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\244\345\267\264\346\257\224\347\264\242(CUP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\260\345\272\246\345\215\242\346\257\224(INR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\277\204\347\275\227\346\226\257\345\215\242\345\270\203(RUB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\260\345\272\246\345\260\274\350\245\277\344\272\232\345\215\242\346\257\224(IDR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\213\277\351\251\254\345\267\264\345\260\224\345\215\232\344\272\232(PAB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\270\203\344\272\232\347\272\275\345\207\240\345\206\205\344\272\232\345\237\272\351\202\243(PGK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\346\235\245\350\245\277\344\272\232\346\236\227\345\220\211\347\211\271(MYR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\274\212\346\213\211\345\205\213\347\254\254\347\272\263\345\260\224(IQD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\211\200\347\275\227\351\227\250\347\276\244\345\262\233\345\205\203(SBD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\264\242\351\251\254\345\210\251\344\272\232\345\205\210\344\273\244(SOS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\227\351\235\236\345\205\260\347\211\271(ZAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\257\351\207\214\345\205\260\345\215\241\345\215\242\346\257\224(LKR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\243\350\265\253\345\213\222\346\213\277\347\276\244\345\262\233\347\243\205(SHP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\226\257\345\250\201\345\243\253\345\205\260\351\207\214\345\205\260\345\220\211\345\260\274(SZL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\242\250\350\245\277\345\223\245\346\257\224\347\264\242(MXN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\273\245\350\211\262\345\210\227\351\225\221(ILS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\211\231\344\271\260\345\212\240\345\205\203(JMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\232\346\230\216\345\260\274\345\212\240\346\257\224\347\264\242(DOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\252\345\271\263\346\264\213\346\263\225\351\203\216(XPF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\271\351\272\246\345\205\213\346\234\227(DKK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\215\267\345\205\213\345\205\213\346\234\227(CZK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\214\252\345\250\201\345\205\213\346\234\227(NOK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\346\233\274\351\207\214\344\272\232\345\260\224(OMR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\345\271\262\350\276\276\345\205\210\344\273\244(UGX)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\345\205\213\345\205\260\350\265\253\345\244\253\347\261\263(UAH)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\214\346\213\211\345\234\255\346\226\260\346\257\224\347\264\242(UYU)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\223\246\345\212\252\351\230\277\345\233\276\347\223\246\345\233\276(VUV)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\213\211\345\234\255\347\223\234\346\213\211\345\260\274(PYG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\230\351\262\201\346\226\260\347\264\242\345\260\224(PEN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\270\203\351\232\206\350\277\252\346\263\225\351\203\216(BIF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\221\346\221\251\347\275\227\346\263\225\351\203\216(KMF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\220\211\345\270\203\346\217\220\346\263\225\351\203\216(DJF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\207\240\345\206\205\344\272\232\346\263\225\351\203\216(GNF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\231\276\346\205\225\345\244\247\345\205\203(BMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\274\205\347\224\270\345\205\203(MMK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\272\263\347\261\263\346\257\224\344\272\232\345\205\203(NAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\260\274\346\263\212\345\260\224\345\215\242\346\257\224(NPR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\237\272\346\226\257\345\235\246\345\215\242\346\257\224(PKR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\227\346\226\257\350\215\267\345\205\260\347\233\276(ANG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\345\260\224\344\273\243\345\244\253\345\215\242\351\235\236\344\272\232(MVR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\255\344\272\232\351\202\243\345\205\203(GYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\260\274\345\212\240\346\213\211\347\223\234\347\247\221\345\244\232\345\267\264(NIO)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\245\210\345\217\212\345\210\251\344\272\232\345\245\210\346\213\211(NGN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\265\267\345\234\260\345\217\244\345\276\267(HTG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\264\252\351\203\275\346\213\211\346\226\257\344\274\246\347\232\256\346\213\211(HNL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\214\210\347\211\231\345\210\251\347\246\217\346\236\227(HUF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\206\260\345\262\233\345\205\213\351\203\216(ISK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\215\344\270\271\345\215\242\346\257\224(BTN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\223\210\351\251\254\345\205\203(BSD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\346\236\227\347\254\254\347\272\263\345\260\224(BHD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\255\237\345\212\240\346\213\211\345\241\224\345\215\241(BDT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\345\267\264\345\244\232\346\226\257\345\205\203(BBD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\264\235\351\207\214\346\226\257\345\270\201(BZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\222\231\345\217\244\345\233\276\346\240\274\351\207\214\345\205\213(MNT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\221\251\346\264\233\345\223\245\351\201\223\346\213\211\345\247\206(MAD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\345\260\224\345\267\264\345\260\274\344\272\232\345\210\227\345\205\213(ALL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\345\260\224\345\217\212\345\210\251\344\272\232\347\254\254\347\272\263\345\260\224(DZD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\346\240\271\345\273\267\346\257\224\347\264\242(ARS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\205\271\347\275\227\346\217\220(PLN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\241\345\241\224\345\260\224\345\210\251\345\260\224(QAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\230\277\351\262\201\345\267\264\345\262\233\345\274\227\347\275\227\346\236\227(AWG)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\216\273\345\210\251\347\273\264\344\272\232\345\270\201(BOB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\232\350\214\250\347\223\246\347\272\263\346\231\256\346\213\211(BWP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\247\221\345\250\201\347\211\271\347\254\254\347\272\263\345\260\224(KWD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\257\256\345\233\275\345\237\272\346\231\256(LAK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\231\345\210\251\344\272\232\351\225\221(SYP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\235\246\346\241\221\345\260\274\344\272\232\345\205\210\344\273\244(TZS)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\213\211\350\204\261\347\273\264\344\272\232\346\213\211\347\211\271(LVL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\273\216\345\267\264\345\253\251\351\225\221(LBP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\216\261\347\264\242\346\211\230\346\264\233\346\217\220(LSL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\257\224\351\207\214\344\272\232\345\205\203(LRD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\251\346\257\224\344\272\232\347\254\254\347\272\263\345\260\224(LYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\253\213\351\231\266\345\256\233\347\253\213\347\211\271(LTL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\267\264\350\245\277\351\233\267\344\272\232\345\260\224(BRL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\275\230\345\212\240(TOP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\211\271\347\253\213\345\260\274\350\276\276\345\222\214\345\244\232\345\267\264\345\223\245(TTD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\254\254\347\272\263\345\260\224(TND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\221\251\345\260\224\345\244\232\347\223\246\345\210\227\344\274\212(MDL)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\261\266\350\216\261\345\205\203(BND)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\244\232\345\223\245\351\235\236\346\264\262\345\205\261\345\220\214\344\275\223\346\263\225\351\203\216(XOF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\210\232\346\236\234\344\270\255\351\235\236\345\205\261\345\220\214\344\275\223\346\263\225\351\203\216(XAF)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\237\254\345\237\224\345\257\250\345\210\251\345\260\224\346\226\257(KHR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\275\233\345\276\227\350\247\222\345\237\203\346\226\257\345\272\223\345\244\232(CVE)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\345\205\266\351\241\277\347\254\254\347\272\263\345\260\224(MKD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\351\251\254\346\213\211\347\273\264\345\205\213\347\223\246\346\237\245(MWK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\274\200\346\233\274\347\276\244\345\262\233\345\205\203(KYD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\245\346\226\257\350\276\276\351\273\216\345\212\240\347\247\221\346\234\227(CRC)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\205\213\347\275\227\345\234\260\344\272\232\345\272\223\347\272\263(HRK)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\270\234\345\212\240\345\213\222\346\257\224\345\205\203(XCD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\237\203\345\217\212\351\225\221(EGP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\237\350\200\263\345\205\266\351\207\214\346\213\211(TRY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\220\250\345\260\224\347\223\246\345\244\232\347\247\221\346\234\227(SVC)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\237\203\345\241\236\344\277\204\346\257\224\344\272\232\346\257\224\345\260\224(ETB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\246\217\345\205\213\345\205\260\347\276\244\345\262\233\351\225\221(FKP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\206\210\346\257\224\344\272\232\350\276\276\346\213\211\350\245\277(GMD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\257\233\351\207\214\345\241\224\345\260\274\344\272\232\344\271\214\345\220\211\344\272\232(MRO)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\257\233\351\207\214\346\261\202\346\226\257\345\215\242\346\257\224(MUR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\220\250\346\221\251\344\272\232\345\241\224\346\213\211(WST)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\234\243\345\244\232\347\276\216\345\244\232\345\270\203\346\213\211(STD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\272\232\345\260\224(SAR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\344\271\237\351\227\250\351\207\214\344\272\232\345\260\224(YER)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\241\236\350\210\214\345\260\224\345\215\242\346\257\224(SCR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\233\264\345\270\203\347\275\227\351\231\200\351\225\221(GIP)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\215\261\345\234\260\351\251\254\346\213\211\346\240\274\346\237\245\345\260\224(GTQ)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\272\246\346\227\246\347\254\254\347\272\263\345\260\224(JOD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\223\210\350\220\250\345\205\213\346\226\257\345\235\246\350\205\276\346\240\274(KZT)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\350\202\257\344\272\232\345\205\210\344\273\244(KES)", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\346\261\207\347\216\207", 0, QApplication::UnicodeUTF8));
        pushButton_convert->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
