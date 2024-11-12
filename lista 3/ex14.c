/*
Fa¸ca um programa que leia um n´umero inteiro positivo par N e imprima todos os n´umeros
pares de 0 at´e N em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, par;
    //forçando usuário a digitar um número positivo.
    do{
        printf("Digite um numero inteiro POSITIVO par: ");
        scanf("%d", &num);
    }while(num < 0 || num % 2 != 0);
    printf("Numeros pares em ordem decrescente ate %d: \n", num);
    //mostrando em ordem decrescente.
    for(par = num; par >= 0; par -= 2){
        printf("%d\n", par);
    }//for
    return 0;
}//main
