#include <stdio.h>

int main ()
{
    int count;

    for ( count = 100; count >= 1; count = count - 1 ) 
        printf ("%d ",count);
    printf( "\n" );

    return( 0 );
}