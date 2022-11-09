#ifndef EINSTELLUNGENDIALOG_H
#define EINSTELLUNGENDIALOG_H

#include <QDialog>

namespace Ui {
class EinstellungenDialog;
}


enum ColorShem {
    DARK = 0,
    LIGHT
};


class EinstellungenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EinstellungenDialog(QWidget *parent = nullptr);
    ~EinstellungenDialog();



private:
    Ui::EinstellungenDialog *ui;
};

#endif // EINSTELLUNGENDIALOG_H
