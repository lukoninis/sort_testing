#include <stdio.h>
#include "sort.h"

void bubble_sort( const IntArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size - 1; ++i )
    {
        int flag = 0;
        for( unsigned int j = 0; j < _arr.size - i - 1; ++j )
        {
           if( _arr.array[j] > _arr.array[j+1] )
           {
               ++flag;
               int tmp = _arr.array[j+1];
               _arr.array[j+1] = _arr.array[j];
               _arr.array[j] = tmp;
           }
        }

        if( 0 == flag )
            break;
    }
}

void bubble_sort_coord( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size - 1; ++i )
    {
        int flag = 0;
        for( unsigned int j = 0; j < _arr.size - i - 1; ++j )
        {
           if( 0 <= compare_func( &( _arr.array[j] ), &( _arr.array[j+1] ) ) )
           {
               ++flag;
               swap_coord( &( _arr.array[j+1] ), &( _arr.array[j] ) );
           }
        }

        if( 0 == flag )
            break;
    }
}
