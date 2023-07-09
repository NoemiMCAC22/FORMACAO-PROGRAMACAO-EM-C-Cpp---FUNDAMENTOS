#include <stdio.h>

int main ()
{
int cargo;
float sal, reaju;


    printf("Informe o cargo:");
    scanf ("%d", &cargo);
    printf("Salario atual:");
    scanf ("%f", &sal);
    {
        if (cargo == 1);
            reaju = (sal * 7) / 100;
           
        if (cargo == 2);
            reaju = (sal * 9) / 100;
            
        if (cargo == 3);
            reaju = (sal * 5) / 100;
        if(cargo == 4);
            reaju = (sal * 12) / 100;        
    }
    printf("O reajuste e: %f", reaju);
    printf("O novo salario e: %f", sal + reaju);
 return (0);
}