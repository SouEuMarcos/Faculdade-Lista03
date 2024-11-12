/*
Fa¸ca um programa que receba dois n´umeros. Calcule e mostre;
• a soma dos n´umeros pares desse intervalo de n´umeros, incluindo os n´umeros digitados;
• a multiplica¸c˜ao dos n´umeros ´ımpares desse intervalo, incluindo os digitados.
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
  int num1, num2, somaPar = 0, multiplicaImpar = 1;
//Pedindo dois numeros ao usuário.
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
//Vendo se o num1 é menor que o num2 e substituindo caso contrário.
  if(num1 > num2){
      int temp = num1;
      num1 = num2;
      num2 = temp;
    }//if
//Descobrindo a soma dos pares e a multiplicação dos impares.
  for(int indice = num1; indice <= num2; indice++){
    if(indice % 2 == 0){
      somaPar += indice;
    }else{
      multiplicaImpar *= indice;
    }//else
  }//for
  printf("Soma par: %d\nMultiplicacao impar: %d\n", somaPar, multiplicaImpar);
  return 0;
}//main
