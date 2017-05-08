#include <stdio.h>
#include "sort.h"

void insert_sort( const IntArray _arr )
{
    DEBUG

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

void insert_sort_coord( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) )
{
    DEBUG

    for( unsigned int i = 1; i < _arr.size; ++i )
    {
        unsigned int j = i;
        while(  j > 0 && 0 < compare_func( &( _arr.array[j-1] ), &( _arr.array[j] ) ) )
        {
            swap_coord( &( _arr.array[j-1] ), &( _arr.array[j] ) );
            --j;
        }
    }
}
