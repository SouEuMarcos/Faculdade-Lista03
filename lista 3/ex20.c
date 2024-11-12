/*
Ler uma sequˆencia de n´umeros inteiros e determinar se eles s˜ao pares ou n˜ao. Dever´a ser
informado o n´umero de dados lidos e o n´umero de valores pares. O processo termina quando for digitado o
n´umero 1000.
*/

#include <stdlib.h>
#include <stdio.h>

int main (){
  int num, quantidade = 0, par = 0;

  do{
    printf("Digite um numero inteiro. Ou 1000 para sair: ");
    scanf("%d", &num);

    if(num != 1000){
      quantidade++;

      if(num  % 2 == 0){
        par++;
      }//Segundo if
    }//Primeiro if
  }while(num != 1000);

  printf("Quantidade: %d\nPares: %d\n", quantidade, par);
  return 0;
}//main
