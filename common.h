#ifndef COMMON_H
#define COMMON_H

#define DEBUG printf( __FUNCTION__ ); \
    printf( "\n" );

typedef struct
{
    unsigned int size;
    int* array;
} IntArray;

typedef struct
{
    int x;
    int y;
} Coordinate;

typedef struct
{
    unsigned int size;
    Coordinate * array;
} CoordArray;

void random_fill( const IntArray _arr );
void print_array( const IntArray _arr );
void copy_array( const IntArray _source, const IntArray _dest );

void random_fill_coord( const CoordArray _arr );
void print_array_coord( const CoordArray _arr );
void copy_array_coord( const CoordArray _source, const CoordArray _dest );
void swap_coord( Coordinate *_source, Coordinate *_dest );
int compare_coord( const Coordinate *_left, const Coordinate *_right );

#endif // COMMON_H
