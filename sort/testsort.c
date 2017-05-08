#include "sort.h"

void test_sort( const IntArray _arr, void( *sort_func )( const IntArray _arr ) )
{
    IntArray arr;
    arr.size = _arr.size;
    arr.array = (int *)calloc( arr.size, sizeof( *( arr.array ) ) );
    copy_array( _arr, arr );
    sort_func( arr );
    print_array( arr );
    free( arr.array );
}
