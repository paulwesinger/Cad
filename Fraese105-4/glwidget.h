#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>

class GlWidget : public QOpenGLWidget
{
public:
    GlWidget(QWidget * parent);
    ~GlWidget();

    void paintGL() override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void setClearColor(QColor col);
    void update();

protected:
    QOpenGLVertexArrayObject  vao;
    QOpenGLBuffer * vbo;

    QMatrix4x4 perspective;
    QMatrix4x4 camera;

    int countVertsIndex;
    bool clearcolorUpdated;

private:
    void initBuffers();


    float _ClearColorRed;
    float _ClearColorBlue;
    float _ClearColorGreen;
    float _ClearColorAlpha;
};

#endif // GLWIDGET_H
