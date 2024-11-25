#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], nome2[30];

    printf("Digite seu nome:\n ");
    fgets(nome,30,stdin);
    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';

    printf("Digite um nome:\n ");
    fgets(nome2,30,stdin);
    int indice2 = strcspn(nome2, "\n");
    nome2[indice2] = '\0';

    if(strcmp(nome,nome2)==0){
        printf("As strings sao iguais!");
    }else{
        printf("As strings nao sao iguais!");
    }
}