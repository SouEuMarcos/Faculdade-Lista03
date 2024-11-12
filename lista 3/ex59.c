/*
Fa¸ca um programa que leia v´arios n´umeros, calcule e mostre:
• a soma dos n´umeros digitados;
• a quantidade de n´umeros digitados;
• a m´edia dos n´umeros digitados;
• o maior n´umero digitado;
• o menor n´umero digitado;
• a m´edia dos n´umeros pares;
Finalize a entrada dos dados caso o usu´ario informe o valor 0.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int num, soma = 0, media, quantidade = 0, maior, menor, mediaPar, somaPar = 0, quantidadePar = 0;

  printf("Digite 0 para finalizar.\n\n");
//pedindo numero ao usuário diferente de 0, se for = 0 ele encerra o loop.
  while(num != 0){
    printf("Digite um numero: ");
    scanf("%d", &num);
//fazendo soma dos numeros e acrescentando a quantidade pra descobrir a media futuramente. E descobrindo < e > numero.
    if(num != 0){
      soma += num;
      quantidade++;
    }if(num > maior){
      maior = num;
    }if(num < menor){
      menor = num;
    }if(num  % 2 == 0){
      somaPar += num;
      quantidadePar++;
    }//if
  }//while
  media = soma / quantidade;
  mediaPar = somaPar / quantidadePar;
  printf("Soma: %d\nQuantidade: %d\nMedia: %d\nMaior: %d\nMenor: %d\nMedia par: %d\n", soma, quantidade, media, maior, menor, mediaPar);
  return 0;
}//main
