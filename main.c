#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define SIZE 25

int main( int argc, char *argv[] )
{
    DEBUG

    srand( time( NULL ) );

    IntArray arr;
    arr.size = SIZE;
    arr.array = ( int * )calloc( arr.size, sizeof( *( arr.array ) ) );
    random_fill( arr );
    print_array( arr );
    test_sort( arr, bubble_sort );
    test_sort( arr, insert_sort );
    free( arr.array );

    CoordArray coord_arr;
    coord_arr.size = SIZE;
    coord_arr.array = ( Coordinate * )calloc( coord_arr.size, sizeof( *( coord_arr.array ) ) );
    random_fill_coord( coord_arr );
    print_array_coord( coord_arr );
    test_sort_coord( coord_arr, bubble_sort_coord, compare_coord );
    test_sort_coord( coord_arr, insert_sort_coord, compare_coord );
    free( coord_arr.array );

    return 0;
}
