#ifndef LIVINGWORLD_H
#define LIVINGWORLD_H

#include <QGraphicsItem>
#include "config.h"
#include "lifecell.h"

class LivingWorld : public QGraphicsItem
{
public:
    LivingWorld();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    LifeCell cells[worldWidth][worldHeight];
    void redraw();
};

#endif // LIVINGWORLD_H
