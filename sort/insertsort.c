#include <stdio.h>
#include "sort.h"

void insert_sort( const IntArray _arr )
{
    printf( __FUNCTION__ );

    for( unsigned int i = 1; i < _arr.size; ++i )
    {
        unsigned int j = i;
        while(  j > 0 && _arr.array[j-1] > _arr.array[j] )
        {
            int tmp = _arr.array[j-1];
            _arr.array[j-1] = _arr.array[j];
            _arr.array[j] = tmp;
            --j;
        }
    }
}
