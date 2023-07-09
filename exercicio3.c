#include <stdio.h>

int main ()
{
int num, result;

    printf ("Digite um numero: ");
    scanf ("%d",&num);
   
        if ( num > 20 ) 
            result = num * 2;
                
        if (num < 20) 
            result = num * 4;
           
    
    printf ("\n\nResultado: %d\n", result);        

 return (0);
}