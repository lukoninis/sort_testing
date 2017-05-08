#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define SIZE 15

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
    return 0;
}
