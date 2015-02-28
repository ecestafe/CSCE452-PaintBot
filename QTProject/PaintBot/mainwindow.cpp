#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "QGraphicsView"
#include<QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //QHBoxLayout *layout = new QHBoxLayout;


    //view = new QGraphicsView(scene);
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QPen pen(Qt::black);
    pen.setWidth(2);


    rectangle = scene->addRect(100,0,80,100, pen, blueBrush);


    ellipse = scene->addEllipse(100,300, 25, 50,pen,greenBrush);

    //text = scene->addText("sites.google.com/site/csce452teamiteam/",QFont("Arial", 20));

    //text->setFlag(QGraphicsItem::ItemIsMovable);

    //QGraphicsRectItem *rect = scene->addRect(QRectF(0,0,100,100));
   // QGraphicsItem *item = scene->itemAt(50,50);

    //ui->pushButton->
    //ui->graphicsView->setInteractive(true);
    //ui->graphicsView->setAlignment(Qt::AlignLeft | Qt::AlignTop);

}

MainWindow::~MainWindow()
{
    delete ui;
}
