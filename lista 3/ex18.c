/*
Escreva um algoritmo que leia certa quantidade de n´umeros e imprima o maio deles e quantas
vezes o maior n´umero foi lido. A quantidade de n´umeros a serem lidos deve ser fornecida pelo usu´ario.
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
  int quantidade, num, maior = 0, leitura = 0, indice;

  printf("Digite uma quantidade de numero a ser lido: ");
  scanf("%d", &quantidade);

  for(indice = 1; indice <= quantidade; indice++){
    printf("%d numero: ", indice);
    scanf("%d", &num);

    if(num > maior){
      maior =  num;
      leitura = 1;
    }else if(num == maior){
      leitura ++;
    }//else if
  }//for
  printf("Maior numero: %d\nFoi lido %d vez(es).\n", maior, leitura);
  return 0;
}//main
