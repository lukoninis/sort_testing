#include <stdio.h>
#include "common.h"

void print_array( const IntArray _arr )
{
    for( unsigned int i = 0; i < _arr.size; i++)
    {
        printf( " %d", _arr.array[i] );
    }
    printf( "\n" );
}

