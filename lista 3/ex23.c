// Fa¸ca um algoritmo que leia um n´umero positivo e imprima seus divisores.

#include <stdlib.h>
#include <stdio.h>

int main(){
  int num, indice;
//forçando a digitar um numero positivo
  do{
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
  }while(num < 0);
//imprimindo os divisores
  printf("Os divisores sao:\n");
  for(indice = 1; indice <= num; ++indice){
    if(num % indice == 0){
      printf("%d ", indice);
      printf("\n");
    }//if
  }//for
  return 0;
}//main
