/*
Fa¸ca um programa que determina o mostre os cinco primeiros m´ultiplos de 3, considerando
n´umero maiores que 0.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int a, resultado;

  for(a = 1; a <= 5; a++){
    resultado = a * 3;
    printf("%d", resultado);
  }
  return 0;
}
