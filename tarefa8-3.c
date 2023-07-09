#include <stdio.h>



void mostrar(int *mtrz){ 

    printf("\n Matriz[10][10]:\n");
    for(int i = 0; i < 100; i++) {
        if (i%10 == 0) printf("\n");
        printf("%3d ", *mtrz++);
    }

}


void inicializar(int *mtrz){

     for(int i = 0; i < 100; i++){

        *mtrz = 0;
        mtrz++;
    }

}


void preencher(int *mtrz){

    for(int i = 1; i <= 100; i++){
        *mtrz = i;
        mtrz++;
    }

}


int main(){

    int matriz[10][10];
    int *p;


    p = matriz[0];

    inicializar(p);
    mostrar(p);
    printf("\n");
    preencher(p);
    mostrar(p);

}