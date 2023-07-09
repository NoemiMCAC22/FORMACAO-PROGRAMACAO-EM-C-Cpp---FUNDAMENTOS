#include <stdio.h>
#include <string.h>

int main()
{
char str1[200], str2[200], str3[200], str4[200];
char str[200*4];
int aux;

printf("\n\n Digite 4 strings, teclando <BACKSPACE> e <ENTER> ao final de cada uma:\n");
gets(str1);
gets(str2);
gets(str3);
gets(str4);

str[0] = '\0';

strcat(str, str1);
strcat(str, str2);
strcat(str, str3);
strcat(str, str4);

printf("\n\n Resultado: %s\n",str);

return ( 0 );
}