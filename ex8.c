#include <string.h>
#include <stdio.h>

int main(){
    char nome[30];
    int inicio = 0, fim = strlen(nome)-1;

    printf("Digite seu nome: \n ");
    fgets(nome,30,stdin);
    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';
    
    while(nome[inicio] == ' '){
        inicio++;
    }
    while(fim>=inicio && nome[fim]==' '){
        fim--;
    }
    int j = 0;
    for (int i = inicio; i <= fim; i++) {
       nome[j++] = nome[i];
    }
    nome[j] = '\0'; 

    printf("Nome sem espacos em branco: %s", nome);
}

