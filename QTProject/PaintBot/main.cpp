#include "mainwindow.h"

<<<<<<< HEAD
#include <QGraphicsItem>
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

=======
>>>>>>> parent of c0843e6... arm
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QGraphicsScene scene;
    //QGraphicsView view(&scene);
    //view.setBackgroundBrush(Qt::yellow);
    //Qgraphics


    MainWindow m;
   //view.show();
    m.show();


    return a.exec();
}
