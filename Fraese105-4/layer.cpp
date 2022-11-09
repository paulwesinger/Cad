#include "layer.h"
#include <QTableWidgetItem>
#include <QCheckBox>



//----------------------------------------------------------
// One LayerItem
//----------------------------------------------------------
Layer::Layer()
{
    _Index = 0;
    _Color = Qt::lightGray;
    _Name = "<Layer>";
    _Locked = false;
    _Visible = true;
}

Layer::~Layer() {}

//----------------------------------------------------------
// setings
//----------------------------------------------------------
void Layer::setLayerActive()    { _Active = true;    }
void Layer::setLayerInActive()  { _Active = false;    }


void Layer::setLayerLocked()    { _Locked = true; }
void Layer::UnLockLayer()       { _Locked = false; }

void Layer::setLayerInVisible() { _Visible = false; }
void Layer::setLayerVisible()   { _Visible = true; }

void Layer::setLayerName(QString name)  { _Name = name; }
void Layer::setLayerIndex(uint index)   { _Index = index; }
void Layer::setLayerColor(QColor col)   { _Color = col; }

//----------------------------------------------------------
// gettings
//----------------------------------------------------------
QColor Layer::getLayerColor()   { return _Color; }
QString Layer::getLayerName()   { return _Name;  }
uint Layer::getLayerIndex()     { return _Index; }

bool Layer::IsLocked()          { return _Locked; }
bool Layer::IsVisible()         { return _Visible;}
bool Layer::IsActive()          { return _Active; }





//----------------------------------------------------------
// LayerWidget himself
//----------------------------------------------------------
LayerWidget::LayerWidget()
{
    _ActiveLayer = 0;
    _SelectedLayer = 0;
    addRow("Test1");
    update(0);
}

LayerWidget::LayerWidget(QTableWidget * tbw)

{
    tableWidget = tbw;

    _ActiveLayer = 0;
    _SelectedLayer = 0;
    addRow("Test");
    update(0);
}

LayerWidget::~LayerWidget() {
    layers.clear();
}

void LayerWidget::addRow(QString name){

    if (tableWidget) {

        Layer l;
        l.setLayerActive();
        l.setLayerIndex(layers.size());
        l.UnLockLayer();
        l.setLayerColor(QColor(Qt::lightGray));
        l.setLayerVisible();
        l.setLayerName(name);
        layers.append(l);

        int row = tableWidget->rowCount();
        QCheckBox * cbVis = new QCheckBox();
        QCheckBox * cbLocked = new QCheckBox();
        QTableWidgetItem * wiName = new QTableWidgetItem(name);

        cbVis->setChecked(true);
        cbLocked->setChecked(false);

        tableWidget->insertRow(row);
        tableWidget->setCellWidget(row,0,cbVis);
        tableWidget->setCellWidget(row,1,cbLocked);
        tableWidget->setItem(row,2,wiName);
    }
}

void LayerWidget::update(int i) {
    if (tableWidget) {
        for (int i = 0; i < layers.size(); i++ )   {

        }

    }
}
