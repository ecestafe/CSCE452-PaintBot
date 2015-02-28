// ROBOT_H

#ifndef ROBOT_H
#define ROBOT_H

#include <QGraphicsItem>

QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QParallelAnimationGroup;
QT_END_NAMESPACE

//! [0]
class RobotPart : public QGraphicsObject
{
public:
    RobotPart(QGraphicsItem *parent = 0);

protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event) Q_DECL_OVERRIDE;
    void dragLeaveEvent(QGraphicsSceneDragDropEvent *event) Q_DECL_OVERRIDE;
    void dropEvent(QGraphicsSceneDragDropEvent *event) Q_DECL_OVERRIDE;

    QColor color;
    bool dragOver;
};
//! [0]

//! [1]
class RobotHead : public RobotPart
{
public:
    RobotHead(QGraphicsItem *parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;

protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event) Q_DECL_OVERRIDE;
    void dropEvent(QGraphicsSceneDragDropEvent *event) Q_DECL_OVERRIDE;

private:
    QPixmap pixmap;
};
//! [1]

//! [2]
class RobotTorso : public RobotPart
{
public:
    RobotTorso(QGraphicsItem *parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;
};
//! [2]

//! [3]
class RobotLimb : public RobotPart
{
public:
    RobotLimb(QGraphicsItem *parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;
};
//! [3]

//! [4]
class Robot : public RobotPart
{
public:
    Robot(QGraphicsItem *parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;
};
//! [4]

#endif
