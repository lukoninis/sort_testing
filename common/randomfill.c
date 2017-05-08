#include "common.h"

void random_fill(const IntArray _arr )
{
    for( unsigned int i = 0; i < _arr.size; i++ )
    {
        _arr.array[i] = i;
    }
}
