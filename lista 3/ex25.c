
/*
Fa¸ca um programa que some todos os n´umeros naturais abaixo de 1000 que s˜ao m´ultiplos
de 3 ou 5.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int indice, soma = 0;

  for(indice = 0; indice <= 1000; indice++){
    if(indice % 3 == 0 || indice % 5 == 0){
      soma += indice;
    }//if
  }//for
  printf("A soma dos numeros  naturais abaixo de 1000 multiplo de 3 ou 5 e: %d\n", soma);
  return 0;
}//main
