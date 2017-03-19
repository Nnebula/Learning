#ifndef LIFECELL_H
#define LIFECELL_H

#include "config.h"

class LifeCell
{
public:
    LifeCell();
    bool isAlive();
    void giveLife();
    void kill();
    void birth();
    void death();
    void age();

private:
    bool living;
    bool futureLife;
    bool futureDeath;

};

#endif // LIFECELL_H
