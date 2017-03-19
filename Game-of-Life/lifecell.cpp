#include "LifeCell.h"
#include <QtGui>

LifeCell::LifeCell()
{
    living = qrand() % 3 == 0;
    futureLife= false;
    futureDeath= false;
}

bool LifeCell::isAlive()
{
    return living;
}

void LifeCell::giveLife()
{
    living= true;
}

void LifeCell::kill()
{
    living = false;
}


void LifeCell::birth()
{
    futureLife= true;
}

void LifeCell::death()
{
    futureDeath=true;
}

void LifeCell::age()
{
    if(futureLife){
        giveLife();
        futureLife = false;
    }

    if(futureDeath) {
        kill();
        futureDeath = false;
    }
}
