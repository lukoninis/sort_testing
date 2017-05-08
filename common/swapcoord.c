#include <stdio.h>
#include "common.h"

void swap_coord( Coordinate * _source, Coordinate * _dest )
{
    Coordinate tmp;
    tmp.x = _source->x;
    tmp.y = _source->y;

    _source->x = _dest->x;
    _source->y = _dest->y;

    _dest->x = tmp.x;
    _dest->y = tmp.y;
}
