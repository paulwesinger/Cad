#include <QMessageBox>

#include "mainwindow.h"
#include "ui_einstellungendialog.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
    initConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete einstellungen;
}

void MainWindow::init() {

    //------------------------------------------
    // setup Mainwindow
    //------------------------------------------

//#62a0ea                         "background-color: yellow;"
  //  "selection-color: yellow;"
  //  "selection-background-color: blue;");


    //------------------------------------------
    // add dialogs
    //------------------------------------------
    einstellungen = new Einstellungen(this);

    initLayerWidget();
    setDarkColorShem();
}

void MainWindow::initLayerWidget() {
    //------------------------------------------
    // resize colums
    //------------------------------------------
    ui->tableWidget->horizontalHeader()->resizeSection(0,60);
    ui->tableWidget->horizontalHeader()->resizeSection(1,60);
    ui->tableWidget->horizontalHeader()->resizeSection(2,100);
    ui->tableWidget->horizontalHeader()->resizeSection(3,50);
    ui->tableWidget->horizontalHeader()->stretchSectionCount();

    QPixmap pxAdd("../../resources/Add32x32.png");
    QIcon iconAdd(pxAdd);
    ui->tbAddLayer->setIcon(iconAdd);

    QPixmap pxRemove("../../resources/Minus32x32.png");
    QIcon iconRemove(pxRemove);
    ui->tbRemoveLayer->setIcon(iconRemove);




    QStringList list;
    list.push_back("Visible");
    list.push_back("Locked");
    list.push_back("Name");
    list.push_back("Farbe");

    ui->tableWidget->setHorizontalHeaderLabels(list);
    layerwidget = new LayerWidget(ui->tableWidget);

    connect(ui->tableWidget,&QTableWidget::cellChanged,this,&MainWindow::LayerCellChanged);



}

void MainWindow::setDarkColorShem(){
    setStyleSheet("background-color:#373737");
    ui->toolBox->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;");
    ui->textEdit->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;selection-color:blue;selection-background-color:yellow");
    ui->gbLayer->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;background-color:#373737;");
    ui->drawingwidget->setStyleSheet("background-color:lightcyan;");
}

void MainWindow::setLightColorShem() {
    setStyleSheet("background-color:#8cbcf7");
    ui->toolBox->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;");
    ui->textEdit->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;selection-color:blue;selection-background-color:yellow");
    ui->gbLayer->setStyleSheet("color:blue;border-color:blue;foreground-color:blue;selection-color:yellow;");
    ui->drawingwidget->setStyleSheet("background-color:lightcyan;");
}

void MainWindow::initConnections(){

    //------------------------------------------
    // Menubar actions
    //------------------------------------------
    connect(ui->actionEinstellungen,&QAction::triggered,this,&MainWindow::menuEinstellungen);


    //------------------------------------------
    // Toolbar clicks
    //------------------------------------------
    connect(ui->pbRect ,&QPushButton::clicked,this ,&MainWindow::tbRectangleClick);
    connect(ui->tbLine ,&QToolButton::clicked,this ,&MainWindow::tbLineClick);


    //------------------------------------------
    // Layer clicks
    //------------------------------------------
    connect(ui->tbAddLayer,&QToolButton::clicked,this,&MainWindow::addLayer);
    connect(ui->tbRemoveLayer,&QToolButton::clicked,this,&MainWindow::RemoveLayer);
}



//------------------------------------------
// Slots
//------------------------------------------
void MainWindow::menuEinstellungen(){


    if (einstellungen) {
        if (einstellungen ->exec()== QDialog::Accepted) {

            if (einstellungen->getColorSchem() == ColorShem::DARK)
                setDarkColorShem();
             else
                setLightColorShem();
        }
    }
}

void MainWindow::addLayer(){
    layerwidget->addRow("<>");
}

void MainWindow::RemoveLayer(){

}

void MainWindow::LayerCellChanged(int row, int col) {
    if (col == 2) {  // name
        QString name = ui->tableWidget->item(row,col)->text();
        layerwidget->updateName(row,name);
    }
}






void MainWindow::tbRectangleClick() {
    ui->textEdit->append("Rect");
  //  graphicsScene->addRect(QRectF(0, 0, 200, 620));
//    graphicsScene->invalidate();
}

void MainWindow::tbLineClick() {
     ui->textEdit->append("Line");
   //  graphicsScene->addLine(200, 200, 420, 420);
//     graphicsScene->invalidate();
}





//------------------------------------------
// class for adjustment(Einstellungen)
//------------------------------------------

Einstellungen::Einstellungen(QWidget * parent):
    QDialog(parent)
{
    ui_Einstellungen = new Ui::EinstellungenDialog();
    ui_Einstellungen->setupUi(this);
}


ColorShem Einstellungen::getColorSchem(){
    if (ui_Einstellungen->rbColorScheme_Dark->isChecked())
        return ColorShem::DARK;
    return ColorShem::LIGHT;
}
