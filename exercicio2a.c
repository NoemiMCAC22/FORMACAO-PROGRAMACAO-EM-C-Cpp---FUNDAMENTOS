#include <stdio.h>
#include <string.h>
#include<assert.h> 
int main() { 
    
char str[100];
printf("\n\nEntre com Nome: ");
gets(str);
    
    char temp; 
    int i, j; 
    i = 0; 
    j = strlen(str) - 1; 
    while (i < j) 
    { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
        i++; j--;
        } 
    
        printf("\n\nString Invertida: %s\n", str);
    
    return (0); 
}
