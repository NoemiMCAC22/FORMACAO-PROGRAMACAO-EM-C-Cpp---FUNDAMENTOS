#include <stdio.h>

int main()
{
char string1[100], string2[100];
int i, k;

printf("\n\nEntre com uma string: ");
gets(string1);



for(k=0; string1[k]; k++);
 

for(i=0; string1[i]; i++)
{
   string2[i] = string1[k-i-1];   
}
string2[i] = '\0';                                         
printf("\n\nString Invertida: %s\n", string2);
return ( 0 );
}