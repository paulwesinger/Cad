#include "einstellungendialog.h"
#include "ui_einstellungendialog.h"

EinstellungenDialog::EinstellungenDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EinstellungenDialog)
{
    ui->setupUi(this);
}

EinstellungenDialog::~EinstellungenDialog()
{
    delete ui;
}

