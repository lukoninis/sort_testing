#include <stdio.h>
#include "common.h"

// сравнение по расстоянию от центра координат, например:
int compare_coord( const Coordinate *_left, const Coordinate *_right )
{
    return ( ( _left->x )*( _left->x ) + ( _left->y )*( _left->y ) ) - ( ( _right->x )*( _right->x ) + ( _right->y )*( _right->y ) );
}
