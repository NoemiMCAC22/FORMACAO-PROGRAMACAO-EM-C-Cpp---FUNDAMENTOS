#include <stdio.h>

int main ()
{
    float matrx[10][10];
    float *p;
    int count;

    p = matrx[0];
    for (count = 0; count < 25; count++ )
    {
        *p = 0 + count;
        p++;
    }

    for ( int i=0; i<5; i++ )
        {
            for ( int j=0; j<5; j++ )
               printf( " %4.0lf", matrx[i][j] );
            printf( "\n" );
        }

    return( 0 );
}