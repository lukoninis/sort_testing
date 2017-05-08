#include <stdio.h>
#include "common.h"

void print_array( const IntArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size; i++)
    {
        printf( " %d", _arr.array[i] );
    }
    printf( "\n" );
}

void print_array_coord( const CoordArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size; i++)
    {
        printf( "%2d, %2d, %d\n",
                _arr.array[i].x,
                _arr.array[i].y,
                ( ( _arr.array[i].x )*( _arr.array[i].x ) + ( _arr.array[i].y )*( _arr.array[i].y ) ) );
    }
    printf( "\n" );
}
