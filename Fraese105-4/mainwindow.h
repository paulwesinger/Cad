#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "layer.h"
#include "einstellungendialog.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class Einstellungen;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void menuEinstellungen();
    void addLayer();
    void RemoveLayer();
    void LayerCellChanged(int row, int col);
    void LayerCellClicked(int row, int col);

    void tbRectangleClick();
    void tbLineClick();


private:
    Ui::MainWindow *ui;

    LayerWidget * layerwidget;
    Einstellungen * einstellungen;

    QColor newLayerColor;

    void init();
    void initConnections();
    void initLayerWidget();
    void setDarkColorShem();
    void setLightColorShem();

};



class Einstellungen : public QDialog
{
public:
    Einstellungen(QWidget * parent = NULL);
    ColorShem getColorSchem();
private:
    Ui::EinstellungenDialog * ui_Einstellungen;
};

#endif // MAINWINDOW_H
