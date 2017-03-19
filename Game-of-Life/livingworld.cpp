#include "livingworld.h"

#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>

LivingWorld::LivingWorld()
{
}

QRectF LivingWorld::boundingRect() const
{
    return QRectF(0, 0, worldWidth * cellSize, worldHeight * cellSize);
}

void LivingWorld::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setPen(Qt::gray);
    for (int y = 0; y < worldHeight; y++) {
        for (int x = 0; x < worldWidth; x++) {
            painter->setBrush(cells[x][y].isAlive() ? Qt::blue : Qt::white);
            painter->drawRect(x * cellSize, y*cellSize, cellSize, cellSize);
        }
    }

}

void LivingWorld::redraw()
{
    this->update(this->boundingRect());
}

