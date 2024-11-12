/*
Fa¸ca um programa que leia um n´umero inteiro positivo N e imprima todos os n´umeros
naturais de 0 at´e N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, crescente;
//forçando usuário a digitar um número positivo.
  do{
    printf("Digite um numero inteiro POSITIVO: ");
    scanf("%d", &num);
  }while(num < 0);
    printf("Ordem crecente ate %d: \n", num);

//mostrando em ordem crescente.
  for(crescente = 0; crescente <= num; crescente++){
    printf("%d\n", crescente);
  }//for
  return 0;
}//main
