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
    robot = new Robot;
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

void MainWindow::on_pushButton_clicked()
{
    int rot = 0;
    rot = robot->Link1->rotation();
    robot->Link1->setRotation(rot - 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_pushButton_2_clicked()
{
    int rot = 0;
    rot = robot->Link1->rotation();
    robot->Link1->setRotation(rot + 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_pushButton_3_clicked()
{
    int rot = 0;
    rot = robot->Link2->rotation();
    robot->Link2->setRotation(rot - 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_pushButton_5_clicked()
{
    int rot = 0;
    rot = robot->Link2->rotation();
    robot->Link2->setRotation(rot + 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_pushButton_4_clicked()
{
    int rot = 0;
    rot = robot->Link3->rotation();
    robot->Link3->setRotation(rot - 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_pushButton_6_clicked()
{
    int rot = 0;
    rot = robot->Link3->rotation();
    robot->Link3->setRotation(rot + 10);
    scene->addItem(robot);
    ui->graphicsView->setScene(scene);
}
