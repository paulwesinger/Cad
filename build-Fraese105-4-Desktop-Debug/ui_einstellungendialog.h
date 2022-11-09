/********************************************************************************
** Form generated from reading UI file 'einstellungendialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EINSTELLUNGENDIALOG_H
#define UI_EINSTELLUNGENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_EinstellungenDialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QRadioButton *rbColorScheme_Dark;
    QRadioButton *rbColorSchem_Light;

    void setupUi(QDialog *EinstellungenDialog)
    {
        if (EinstellungenDialog->objectName().isEmpty())
            EinstellungenDialog->setObjectName(QString::fromUtf8("EinstellungenDialog"));
        EinstellungenDialog->resize(849, 499);
        buttonBox = new QDialogButtonBox(EinstellungenDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(500, 460, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(EinstellungenDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 181, 91));
        rbColorScheme_Dark = new QRadioButton(groupBox);
        rbColorScheme_Dark->setObjectName(QString::fromUtf8("rbColorScheme_Dark"));
        rbColorScheme_Dark->setGeometry(QRect(0, 30, 109, 25));
        rbColorScheme_Dark->setChecked(true);
        rbColorSchem_Light = new QRadioButton(groupBox);
        rbColorSchem_Light->setObjectName(QString::fromUtf8("rbColorSchem_Light"));
        rbColorSchem_Light->setGeometry(QRect(0, 60, 109, 25));

        retranslateUi(EinstellungenDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EinstellungenDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EinstellungenDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EinstellungenDialog);
    } // setupUi

    void retranslateUi(QDialog *EinstellungenDialog)
    {
        EinstellungenDialog->setWindowTitle(QCoreApplication::translate("EinstellungenDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EinstellungenDialog", "Farbschema", nullptr));
        rbColorScheme_Dark->setText(QCoreApplication::translate("EinstellungenDialog", "Dunkel", nullptr));
        rbColorSchem_Light->setText(QCoreApplication::translate("EinstellungenDialog", "Hell", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EinstellungenDialog: public Ui_EinstellungenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EINSTELLUNGENDIALOG_H
