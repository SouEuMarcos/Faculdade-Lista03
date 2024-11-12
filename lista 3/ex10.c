//Fa¸ca um programa que calcule e mostre a soma dos 50 primeiros n´umeros pares.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int indice, soma = 0;

    printf("Soma dos 50 primeiros numeros pares:\n");
    for(indice = 2; indice <= 100; indice += 2){
        soma += indice;
        if(indice == 100){
            printf("%d = ", indice);
        }else{
            printf("%d + ", indice);
        }//else
    }//for
    printf("%d\n", soma);
    return 0;
}//main
