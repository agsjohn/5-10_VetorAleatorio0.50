#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define MAX 51

main() {
  int vet[TAM], x, cont, sair;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    do{
      sair = 0;
      vet[x] = rand() % MAX;
      for(cont = 0; cont <= x; cont++){
        if(vet[x] == vet[cont]){
          sair++;
        }
      }
    }while(sair > 1);
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  getchar();
}