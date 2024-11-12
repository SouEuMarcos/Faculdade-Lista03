//Escreva um programa que leia 10 n´umeros e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int indice;
  float num, maior = 0, menor = 0;

  printf("Valor 1: ");
  scanf("%f", &num);

  menor = num;
  maior = num;

  for(indice = 2; indice <=10; indice++){
    printf("Valor %d: ", indice);
    scanf("%f", &num);

    if(num < menor){
      menor = num;
    }if(num > maior){
      maior = num;
    }//if
  }//for
  printf("Maior numero: %.2f\nMenor numero: %.2f\n", maior, menor);
  return 0;
}//main
