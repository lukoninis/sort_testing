#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define SIZE 5

int main( int argc, char *argv[] )
{
    IntArray arr;
    arr.size = SIZE;
    arr.array = ( int * )calloc( SIZE, sizeof(int) );
    random_fill( arr );
    print_array( arr );
    free( arr.array );
    return 0;
}
