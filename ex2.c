#include <stdio.h>
#include <string.h>

int main(){
    char nome[60], nome2[30];

    printf("Digite seu nome:\n ");
    fgets(nome,30,stdin);
    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';

    printf("Digite um nome para ser concatenado:\n ");
    fgets(nome2,30,stdin);
    int indice2 = strcspn(nome2, "\n");
    nome2[indice2] = '\0';

    if(strlen(nome)+strlen(nome2)<sizeof(nome)){
        strcat(nome, nome2);
        printf("%s", nome);
    }else{
        printf("O tamanho limite foi atingido");
    }
}