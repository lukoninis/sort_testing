#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void test_sort( const IntArray _arr, void( *sort_func )( const IntArray _arr ) )
{
    DEBUG

    IntArray arr;
    arr.size = _arr.size;
    arr.array = (int *)calloc( arr.size, sizeof( *( arr.array ) ) );
    copy_array( _arr, arr );

    sort_func( arr );

    print_array( arr );

    free( arr.array );
}

void test_sort_coord( const CoordArray _arr, void( *sort_func )( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) ), int( *compare_func )( const Coordinate *, const Coordinate * ) )
{
    DEBUG

    CoordArray arr;
    arr.size = _arr.size;
    arr.array = ( Coordinate * )calloc( arr.size, sizeof( *( arr.array ) ) );
    copy_array_coord( _arr, arr );

    sort_func( arr, compare_func );

    print_array_coord( arr );

    free( arr.array );
}
