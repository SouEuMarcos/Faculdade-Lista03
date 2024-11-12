/*
Fa¸ca um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” ap´os a contagem.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
  int a;

  for(a = 10; a >= 0; a--){
    printf("%d\n", a);
  }
  printf("FIM!\n");
  return 0;
}
