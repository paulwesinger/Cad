
#include "glwidget.h"

GlWidget::GlWidget(QWidget * parent):
        QOpenGLWidget(parent)
{

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setVersion(4, 5);
    format.setProfile(QSurfaceFormat::CoreProfile);
    this->setFormat(format); // must be called before the widget or its parent window gets shown

    initBuffers();
}

GlWidget::~GlWidget() {
    delete vbo;
}

//-------------------------------------------
// overrides
//-------------------------------------------
void GlWidget::paintGL(){

    if (clearcolorUpdated) {
        glClearColor(_ClearColorRed, _ClearColorGreen, _ClearColorBlue, _ClearColorAlpha);
        clearcolorUpdated = false;
    }
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void GlWidget::initializeGL() {
    QOpenGLWidget::initializeGL();

    _ClearColorRed = 0.0f;
    _ClearColorGreen = 0.2f;
    _ClearColorBlue = 0.2f;
    _ClearColorAlpha = 1.0f;
    glClearColor(_ClearColorRed, _ClearColorGreen, _ClearColorBlue, _ClearColorAlpha);
    clearcolorUpdated  = true;
}

void GlWidget::resizeGL(int w, int h) {
    this->resize(w,h);
    glViewport(0,0,w,h);
    perspective.setToIdentity();
    perspective.perspective(45.0f, w / float(h), 0.01f, 1000.0f);
}


//-------------------------------------------
// init buffers
//-------------------------------------------
void GlWidget::update() {
    glClearColor(_ClearColorRed, _ClearColorGreen, _ClearColorBlue, _ClearColorAlpha);
    QOpenGLWidget::update();
}

void GlWidget::setClearColor(QColor col) {
    _ClearColorRed = col.redF();
    _ClearColorGreen = col.greenF();
    _ClearColorBlue = col.blueF();
    _ClearColorAlpha = col.alphaF();
    clearcolorUpdated  = true;
}

void GlWidget::initBuffers() {
    vao.create();
    if (vao.isCreated() )
        vao.bind();

    float verts[] = {   // test array
        .0f, 1.0f, .0f,
        .0f, .0f, .0f,
        1.0f, 0.0f, 0.0f
    };

    countVertsIndex = sizeof(verts) / sizeof(float);

    vbo = new QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
    vbo->create();
    vbo->bind();
    vbo->allocate(verts,sizeof(verts));  // vertices  !!!

    vbo->release();
    vao.release();
}

