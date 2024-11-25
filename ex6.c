#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];

    printf("Digite seu nome para eu escreve-lo em ordem inversa\n ");
    fgets(nome,30,stdin);
    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';

  printf("Nome inverso: \n");
  for(int i = indice - 1; i>=0;i--){
    printf("%c", nome[i]);
  }
  printf("\n");
}