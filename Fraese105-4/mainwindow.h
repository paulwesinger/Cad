#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "layer.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void menuEinstellungen();
    void tbRectangleClick();
    void tbLineClick();

private:
    Ui::MainWindow *ui;
    LayerWidget * layerwidget;

    //  QGraphicsScene * graphicsScene;
  //  QGraphicsView * graphicsView;

    void init();
    void initConnections();

};
#endif // MAINWINDOW_H
