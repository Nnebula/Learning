#include "cellstatus.h"

CellStatus::CellStatus()
{
    status=0;
}

int CellStatus::insideCell()
{
    return status;
}

void CellStatus::putX()
{
    status=1;
}

void CellStatus::putO()
{
    status=2;
}
