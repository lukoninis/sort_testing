#include <stdlib.h>
#include "common.h"

void random_fill(const IntArray _arr )
{
    DEBUG

    for( unsigned int i = 0; i < _arr.size; i++ )
    {
        _arr.array[i] = rand() % 20;
    }
}
