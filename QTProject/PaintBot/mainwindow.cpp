#include "mainwindow.h"
#include "ui_mainwindow.h"



class GraphicsView : public QGraphicsView
{
public:
    GraphicsView(QGraphicsScene *scene) : QGraphicsView(scene)
    {
    }

protected:
    virtual void resizeEvent(QResizeEvent *) Q_DECL_OVERRIDE
    {
    }
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
//! [0]
//! [1]
    Robot *robot = new Robot;
    robot->setTransform(QTransform::fromScale(1.2, 1.2), true);
    robot->setPos(0, -20);


    scene = new QGraphicsScene(this);
    GraphicsView view(scene); // adds robot to the scene
    view.setRenderHint(QPainter::Antialiasing);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view.setBackgroundBrush(QColor(255, 255, 255));
    view.setWindowTitle("PaintBot");
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);

   /* for (int i = 0; i < 10; ++i) {
        ColorItem *item = new ColorItem;
        item->setPos(::sin((i * 6.28) / 10.0) * 150,
                     ::cos((i * 6.28) / 10.0) * 150);

        scene.addItem(item);
    }*/




//! [1]
//! [2]


    // view.show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
