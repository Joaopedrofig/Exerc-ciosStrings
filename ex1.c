#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], nome2[30];
    printf("Digite seu nome: ");
    fgets(nome,30,stdin);

    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';
    printf("Nome %s\n", nome);
   
   printf("Digite outro nome: ");
   fgets(nome2,30,stdin);

   int indice2 = strcspn(nome2, "\n");
   nome2[indice2] = '\0';
   printf("Nome 2 : %s", nome2);
}