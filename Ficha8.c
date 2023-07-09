#include <stdio.h>

int main ()
{
    int matrx[10][10];
    int *p;
    int count;

    p = matrx[0];
    for (count = 0; count < 100; count++ )
    {
        *p = 0 + count;
        p++;
    }

    for ( int i=0; i < 10; i++ )
        {
            for ( int j=0; j < 10; j++ )
               printf( " %4d", matrx[i][j] );
            printf( "\n" );
        }

    return( 0 );
}