/*
Fa¸ca um programa que leia um n´umero inteiro positivo N e imprima todos os n´umeros
naturais de 0 at´e N em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, decrescente;
//forçando usuário a digitar um número positivo.
  do{
    printf("Digite um numero inteiro POSITIVO: ");
    scanf("%d", &num);
  }while(num < 0);
    printf("Ordem decrecente ate %d: \n", num);

//mostrando em ordem decrescente.
  for(decrescente = num; decrescente >= 0; decrescente--){
    printf("%d\n", decrescente);
  }//for
  return 0;
}//main
