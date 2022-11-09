/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRect;
    QAction *actionLine;
    QAction *actionExit;
    QAction *actionEinstellungen;
    QWidget *centralwidget;
    QWidget *drawingwidget;
    QToolBox *toolBox;
    QWidget *page;
    QToolButton *tbLine;
    QPushButton *pbRect;
    QWidget *page_2;
    QTextEdit *textEdit;
    QGroupBox *gbLayer;
    QTableWidget *tableWidget;
    QToolButton *tbAddLayer;
    QToolButton *tbRemoveLayer;
    QMenuBar *menubar;
    QMenu *menuBearbeiten;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1744, 972);
        QPalette palette;
        QBrush brush(QColor(53, 53, 53, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(55, 55, 55, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        actionRect = new QAction(MainWindow);
        actionRect->setObjectName(QString::fromUtf8("actionRect"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionEinstellungen = new QAction(MainWindow);
        actionEinstellungen->setObjectName(QString::fromUtf8("actionEinstellungen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        drawingwidget = new QWidget(centralwidget);
        drawingwidget->setObjectName(QString::fromUtf8("drawingwidget"));
        drawingwidget->setGeometry(QRect(320, 90, 1421, 841));
        drawingwidget->setAutoFillBackground(false);
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 353, 311, 311));
        toolBox->setFrameShape(QFrame::Panel);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 309, 243));
        tbLine = new QToolButton(page);
        tbLine->setObjectName(QString::fromUtf8("tbLine"));
        tbLine->setGeometry(QRect(10, 40, 81, 26));
        tbLine->setIconSize(QSize(32, 32));
        pbRect = new QPushButton(page);
        pbRect->setObjectName(QString::fromUtf8("pbRect"));
        pbRect->setGeometry(QRect(10, 0, 87, 27));
        toolBox->addItem(page, QString::fromUtf8("Primitives"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 309, 243));
        toolBox->addItem(page_2, QString::fromUtf8("tools"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 670, 311, 251));
        gbLayer = new QGroupBox(centralwidget);
        gbLayer->setObjectName(QString::fromUtf8("gbLayer"));
        gbLayer->setGeometry(QRect(0, 50, 311, 291));
        tableWidget = new QTableWidget(gbLayer);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 291, 201));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(4);
        tbAddLayer = new QToolButton(gbLayer);
        tbAddLayer->setObjectName(QString::fromUtf8("tbAddLayer"));
        tbAddLayer->setGeometry(QRect(10, 240, 26, 26));
        tbAddLayer->setIconSize(QSize(16, 16));
        tbRemoveLayer = new QToolButton(gbLayer);
        tbRemoveLayer->setObjectName(QString::fromUtf8("tbRemoveLayer"));
        tbRemoveLayer->setGeometry(QRect(50, 240, 26, 26));
        tbRemoveLayer->setIconSize(QSize(16, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1744, 24));
        menuBearbeiten = new QMenu(menubar);
        menuBearbeiten->setObjectName(QString::fromUtf8("menuBearbeiten"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBearbeiten->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuBearbeiten->addAction(actionExit);
        menuTools->addAction(actionEinstellungen);
        menuTools->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt5", nullptr));
        actionRect->setText(QCoreApplication::translate("MainWindow", "Rect", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionEinstellungen->setText(QCoreApplication::translate("MainWindow", "Einstellungen...", nullptr));
        tbLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        pbRect->setText(QCoreApplication::translate("MainWindow", "Rect", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "Primitives", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "tools", nullptr));
        gbLayer->setTitle(QCoreApplication::translate("MainWindow", "Layer", nullptr));
        tbAddLayer->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbRemoveLayer->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menuBearbeiten->setTitle(QCoreApplication::translate("MainWindow", "Datei", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Bearbeiten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
