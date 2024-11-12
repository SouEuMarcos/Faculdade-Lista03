/*
Fa¸ca um programa que leia um n´umero inteiro positivo ´ımpar N e imprima todos os n´umeros
´ımpares de 1 at´e N em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, impar;
    //forçando usuário a digitar um número positivo.
    do{
        printf("Digite um numero inteiro POSITIVO impar: ");
        scanf("%d", &num);
    }while(num < 0 || num % 2 != 1);
    printf("Numero impar em ordem decrescente ate %d: \n", num);
    //mostrando em ordem decrescente.
    for(impar = num; impar >= 0; impar -= 2){
        printf("%d\n", impar);
    }//for
    return 0;
}//main
