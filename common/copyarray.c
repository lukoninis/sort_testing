#include <stdio.h>
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

void copy_array_coord( const CoordArray _source, const CoordArray _dest )
{
    DEBUG

    for( unsigned int i = 0; i < _dest.size; ++i )
    {
        _dest.array[i].x = 0;
        _dest.array[i].y = 0;
    }

    if( _source.size <= _dest.size )
    {
        for( unsigned int i = 0; i < _source.size; ++i )
        {
            _dest.array[i].x = _source.array[i].x;
            _dest.array[i].y = _source.array[i].y;
        }
    }
}
