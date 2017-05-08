#ifndef SORT_H
#define SORT_H

#include "common.h"

void test_sort( const IntArray _arr, void( *sort_func )( const IntArray _arr ) );

void bubble_sort( const IntArray _arr );
void insert_sort( const IntArray _arr );

#endif // SORT_H
