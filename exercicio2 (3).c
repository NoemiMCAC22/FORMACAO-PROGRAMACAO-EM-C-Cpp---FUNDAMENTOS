#include <stdio.h>
#include <string.h>


int main()

{
char string1[100], string2[100];
int i = 0, dim;

printf("\n\nEntre com um nome: ");
gets(string1);



for(dim=0; string1[dim]; dim++);

do
    {
    string2[i] = string1[dim-i-1]; 
    i++;
    } 

while (string1[i] != '\0' );
    {
        string2[i] = '\0';
                                        
        printf("\n\nNome Invertido: %s\n", string2);
    }

return ( 0 );
}
