#ifndef COMMON_H
#define COMMON_H

typedef struct
{
    unsigned int size;
    int* array;
} IntArray;

void random_fill( const IntArray _arr );
void print_array( const IntArray _arr );

#endif // COMMON_H
