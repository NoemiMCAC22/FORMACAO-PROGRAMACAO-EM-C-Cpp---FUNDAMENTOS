#include <stdio.h>

int main ()
{
    char string[100];  
    int i, cont;

    printf("Digite uma frase: ");
    gets(string); 
    printf("Frase digitada:%s\n", string);
    
    cont = 0;
    
    for( i = 0; string[i] != '\0'; i = i + 1 )
        {
            if ( string[i] == 'a' ) 
            { 
                cont = cont + 1; 
              ( string[i] = 'b' ); 
            }    
        }
    printf( "Numero de caracteres = %d\nNova String = %s", cont, string );
            
    return( 0 );
}