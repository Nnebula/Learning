#ifndef CELLSTATUS_H
#define CELLSTATUS_H

class CellStatus
{
public:
    CellStatus();
    int insideCell();
    void putX();
    void putO();

private:
    int status;
};

#endif // CELLSTATUS_H
