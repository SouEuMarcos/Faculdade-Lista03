//Fa¸ca um programa que leia um n´umero inteiro N e depois imprima os N primeiros n´umeros naturais ´ımpares

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, impar;
//forçando usuário a digitar um número positivo.
  do{
    printf("Digite um numero inteiro POSITIVO: ");
    scanf("%d", &num);
  }while(num < 0);
  printf("Numero naturais impares ate %d: \n", num);

//descobrindo os primeiros numeros impares.
for(impar = 1; impar <= num; impar++) {
    if(impar % 2 != 0) {
        printf("%d\n", impar);
    }
    if(impar >= num * 2 - 1) {
  return 0;
    }//if
  }//for
}//main
