/*
Escreva um programa que leia um n´umero inteiro e calcule a soma de todos os divisores
desse n´umero, com exce¸c˜ao dele pr´oprio. Exemplo: a soma dos divisores do n´umero 66 ´e 1+ 2 +3 + 6 + 11
+ 22 + 33 = 78.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int num, indice, soma = 0;
//forçando a digitar um numero positivo
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

//imprimindo os divisores
  printf("Os divisores sao:\n");
  for(indice = 1; indice <= num; ++indice){
    if(num % indice == 0){
      printf("%d ", indice);
      soma += indice;
    }//if
  }//for
  printf("\n");
  printf("A soma dos divisores e: %d\n", soma);
  return 0;
}//main
