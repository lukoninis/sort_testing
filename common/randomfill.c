#include <stdio.h>
#include <stdlib.h>
#include "common.h"

void random_fill(const IntArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size; i++ )
    {
        _arr.array[i] = rand() % 20;
    }
}

void random_fill_coord( const CoordArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size; i++ )
    {
        _arr.array[i].x = rand() % 20;
        _arr.array[i].y = rand() % 20;
    }
}
