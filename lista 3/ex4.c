/*
Escreva um programa que declare um inteiro, inicialize-o co 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, at´e que seu valor seja 100000 (cem mil).
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int a, resultado = 0;

  for(a = 0; a <= 100 ; a++){
    resultado = a * 1000;
    printf("%d\n", resultado);
  }
  return 0;
}
