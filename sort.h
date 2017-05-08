#ifndef SORT_H
#define SORT_H

#include "common.h"

void test_sort( const IntArray _arr, void( *sort_func )( const IntArray _arr ) );

void bubble_sort( const IntArray _arr );
void insert_sort( const IntArray _arr );

void test_sort_coord( const CoordArray _arr, void( *sort_func )( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) ), int( *compare_func )( const Coordinate *, const Coordinate * ) );

void bubble_sort_coord( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) );
void insert_sort_coord( const CoordArray _arr, int( *compare_func )( const Coordinate *, const Coordinate * ) );

#endif // SORT_H
