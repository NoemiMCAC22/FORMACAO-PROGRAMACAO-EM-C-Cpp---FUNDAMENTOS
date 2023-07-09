#include <stdio.h>

int main() 
{
  int n1, n2, n3;
  
    printf( "\nInsira o primeiro valor: ", n1 ); 
    scanf( "%d", &n1 );

    printf( "\nInsira o segundo valor: ", n2 ); 
    scanf( "%d", &n2 );

    printf( "\nInsira o terceiro valor: ", n3 ); 
    scanf( "%d", &n3 );

  if (n1 > n2 && n1 > n3) 
    {
       printf("Maior numero digitado: %d \n", n1);
    } 
    
    else if (n2 > n1 && n2 > n3) 
    {
        printf("Maior numero digitado: %d \n", n2);
    } 
    
    else 
    {
    printf("Maior numero digitado: %d \n", n3);

    }
  return 0;
}