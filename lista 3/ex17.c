/*
Fa¸ca um programa que leia um n´umero inteiro positivo N e calcule a soma dos N primeiros
n´umeros naturais
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, indice, soma = 0;
//forçando usuário a digitar um número positivo e inteiro
    do{
      printf("Digite um numero inteiro POSITIVO: ");
      scanf("%d", &num);
    }while(num < 0);
//fazendo a contagem até o número declarado pelo usuário
    for(indice = 1; indice <= num; indice++){
        soma += indice;
        if(indice == num ){
            printf("%d = ", indice);
        }else{
            printf("%d + ", indice);
        }//else
    }//for
    printf("%d\n", soma);
    return 0;
}//main
