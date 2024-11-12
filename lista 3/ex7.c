//Fa¸ca um programa que leia 10 inteiros positivos, ignorando n˜ao positivos, e imprima sua m´edia.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int indice, num;
  float positivos = 0, media;

  for(indice = 1; indice<=10; indice++){
    printf("valor %d: ", indice);
    scanf("%d", &num);
    if(num < 0){
      printf("Numero negativo, encerrando programa!\n");
      return 0;
    }else{
      positivos += num;
      printf("Continue!\n");
    }//else
  }//for
  media = positivos / 10;
  printf("media = %.2f\n", media);
  return 0;
}//main
