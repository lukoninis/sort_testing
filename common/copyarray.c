#include "common.h"

void copy_array( const IntArray _source, const IntArray _dest )
{
    DEBUG

    for( unsigned int i = 0; i < _dest.size; ++i )
    {
        _dest.array[i] = 0;
    }

    if( _source.size <= _dest.size )
    {
        for( unsigned int i = 0; i < _source.size; ++i )
        {
            _dest.array[i] = _source.array[i];
        }
    }
}
