/*
Escreva um algoritmo que leia um n´umero inteiro entre 100 e 999 e imprima na sa´ıda cada
um dos algarismos que comp˜oem o n´umero.
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
  int num, centena, dezena, unidade;

  do{
    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", &num);

  }while(num < 100 || num > 999);

  centena = num / 100;
  dezena = (num % 100) / 10;
  unidade = (num % 100) % 10;

  printf("Centena: %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);
  return 0;
}//main
