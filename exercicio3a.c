#include <stdio.h>

int main ()
{
    int t, i;
    char tabuleiro[3][3];

    for (t=0; t<3; ++t)
        for (i=0; i<4; ++i)
         
            tabuleiro[t][i]= '*';

 for (t=0; t<3; ++t)
    {
        tabuleiro[0][0] = 'X';
        tabuleiro[1][1] = 'O';
        for (i=0; i<3; ++i)
        printf ("%3c ", tabuleiro[t][i]);
        printf ("\n");
    }
    return( 0 );
}