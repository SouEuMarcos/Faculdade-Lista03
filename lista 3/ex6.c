//Fa¸ca um programa que leia 10 inteiros positivos, ignorando n˜ao positivos, e imprima sua m´edia.

#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 1, numero;
  float soma, media;

  do{
    printf("Digite o %d numero: ", a);
    scanf("%d", &numero);
    if(numero >= 0);
    soma += numero;
    a++;
  } while(a <= 10);

    media = soma / 10;
    printf("A media dos 10 numeros sera: %.2f\n", media);
  return 0;
}
