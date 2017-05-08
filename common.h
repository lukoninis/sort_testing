#ifndef COMMON_H
#define COMMON_H

typedef struct
{
    unsigned int size;
    int* array;
} IntArray;

void random_fill( const IntArray _arr );
void print_array( const IntArray _arr );
void copy_array( const IntArray _source, const IntArray _dest );

#endif // COMMON_H
