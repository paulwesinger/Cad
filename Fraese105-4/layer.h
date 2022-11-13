#ifndef LAYER_H
#define LAYER_H

#include <QWidget>
#include <QString>
#include <QColor>
#include <QTableWidget>



//----------------------------------------------------
// class for manageing one item
//----------------------------------------------------
class Layer
{
public:
    Layer();
    ~Layer();

    void setLayerActive();
    void setLayerInActive();

    void setLayerVisible();
    void setLayerInVisible();

    void setLayerLocked();
    void UnLockLayer();

    void setLayerName(QString name);
    void setLayerIndex(uint index);
    void setLayerColor(QColor col);

    uint getLayerIndex();
    QString getLayerName();
    QColor getLayerColor();

    bool IsLocked();
    bool IsVisible();
    bool IsActive();


private:
    uint        _Index;
    QString     _Name;
    QColor      _Color;
    bool        _Locked;
    bool        _Visible;
    bool        _Active;
};


//----------------------------------------------------
// class for the layerwidget ui
//----------------------------------------------------
class LayerWidget
{

public:
    LayerWidget();
    LayerWidget(QTableWidget * tbw);
    ~LayerWidget();
    void addRow(QString name);
    void updateName(int row, QString name);
    void updateColor(int row, QColor col);
    void setActiveLayer(uint l);
    uint getActiveLayer();
    QColor getCurrentColor();

private:

    void initConnections();

    QColor currentColor;
    QVector<Layer> layers;

    uint _ActiveLayer;

    QTableWidget * tableWidget = NULL;

};





#endif // LAYER_H
