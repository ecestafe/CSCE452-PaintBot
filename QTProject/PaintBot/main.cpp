#include "mainwindow.h"
#include <QApplication>

#include <QtWidgets>
#include "coloritem.h"
#include "robot.h"
#include <math.h>

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

//! [0]

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    //! [0]
    //! [1]
        QGraphicsScene scene(-200, -200, 600, 600);

       /* for (int i = 0; i < 10; ++i) {
            ColorItem *item = new ColorItem;
            item->setPos(::sin((i * 6.28) / 10.0) * 150,
                         ::cos((i * 6.28) / 10.0) * 150);

            scene.addItem(item);
        }*/

        Robot *robot = new Robot;
        robot->setTransform(QTransform::fromScale(1.2, 1.2), true);
        robot->setPos(0, -20);



        scene.addItem(robot);
    //! [1]
    //! [2]
        GraphicsView view(&scene); // adds robot to the scene
        view.setRenderHint(QPainter::Antialiasing);
        view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
        view.setBackgroundBrush(QColor(255, 255, 255));
        view.setWindowTitle("PaintBot");
         view.show();


    return a.exec();
}
