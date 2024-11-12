/*
Escreva um programa que escreva na tela, de 1 at´e 100, de 1 em 1, 3 vezes. A primeira deve
usar a estrutura de repeti¸c˜ao for, a segunda while, e a terceira do while.
*/


#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 1;

  do{
    printf("%d\n", a++);
  }while(a <= 100);

  return 0;
}
