#include <stdio.h>

int main()
{ 
    int Id=0;

    printf("Digite sua idade:");
    scanf("%d",&Id);

    if(Id >= 18 && Id <= 65)
	{
        printf("Voce ja e maior de idade\n");
    }
    else if( Id < 18 )
	{
        printf("Voce ainda e menor de idade\n");
    }
    else
    {
        printf("Voce ja e idoso\n");
    }
    
    return 0;
    
}
