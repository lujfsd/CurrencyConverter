/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu Jan 2 15:52:55 2014
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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_src;
    QHBoxLayout *horizontalLayout_2;
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
        Dialog->resize(266, 153);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox_src = new QComboBox(Dialog);
        comboBox_src->setObjectName(QString::fromUtf8("comboBox_src"));

        horizontalLayout->addWidget(comboBox_src);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comboBox_dst = new QComboBox(Dialog);
        comboBox_dst->setObjectName(QString::fromUtf8("comboBox_dst"));

        horizontalLayout_2->addWidget(comboBox_dst);


        verticalLayout->addLayout(horizontalLayout_2);

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
         << QApplication::translate("Dialog", "\347\276\216\345\205\203(USD)", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Dialog", "\347\233\256\346\240\207\350\264\247\345\270\201", 0, QApplication::UnicodeUTF8));
        comboBox_dst->clear();
        comboBox_dst->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\344\272\272\346\260\221\345\270\201(CNY)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\346\270\257\345\270\201(HKD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\345\217\260\345\270\201(TWD)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "\347\276\216\345\205\203(USD)", 0, QApplication::UnicodeUTF8)
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
