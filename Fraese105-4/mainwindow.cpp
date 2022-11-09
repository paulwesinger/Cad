#include <QMessageBox>

#include "mainwindow.h"
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
}

void MainWindow::init() {

    //------------------------------------------
    // setup Mainwindow
    //------------------------------------------

//#62a0ea                         "background-color: yellow;"
  //  "selection-color: yellow;"
  //  "selection-background-color: blue;");

    //------------------------------------------
    // resize colums
    //------------------------------------------
    ui->tableWidget->horizontalHeader()->resizeSection(0,60);
    ui->tableWidget->horizontalHeader()->resizeSection(1,60);
    ui->tableWidget->horizontalHeader()->resizeSection(2,80);
    ui->tableWidget->horizontalHeader()->stretchSectionCount();

    QStringList list;
    list.push_back("Visible");
    list.push_back("Locked");
    list.push_back("Name");


    ui->tableWidget->setHorizontalHeaderLabels(list);
    layerwidget = new LayerWidget(ui->tableWidget);

    ui->toolBox->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;");
    ui->textEdit->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;selection-color:blue;selection-background-color:yellow");
    ui->gbLayer->setStyleSheet("color:#62a0ea;border-color:lightblue;foreground-color:lightblue;");
}

void MainWindow::initConnections(){

    //------------------------------------------
    // Menubar actions
    //------------------------------------------
    connect(ui->actionEinstellungen,&QAction::triggered,this,&MainWindow::menuEinstellungen);


    //------------------------------------------
    // Menubar actions
    //------------------------------------------
    connect(ui->pbRect ,&QPushButton::clicked,this ,&MainWindow::tbRectangleClick);
    connect(ui->tbLine ,&QToolButton::clicked,this ,&MainWindow::tbLineClick);
}



//------------------------------------------
// Slots
//------------------------------------------
void MainWindow::menuEinstellungen(){

    if (QMessageBox::information(this,"Info","Einstellungen") == QMessageBox::Ok) {

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

