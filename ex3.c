#include <stdio.h>
#include <string.h>
#define TAMANHO 30
int main(){
    char nome[TAMANHO];
    int contador = 0;

    printf("Digite seu nome: ");
    fgets(nome, TAMANHO, stdin);

    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';

    for(int i=0;i<TAMANHO;i++){
        if(nome[i]!='\0'){
            contador++;
        }else{
            break;
        }
    }
    printf("Tamanho da string: %d", contador);
}