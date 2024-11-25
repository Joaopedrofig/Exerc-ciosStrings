#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30], carac,substituto;

    printf("Digite uma palavra: ");
    fgets(palavra,30,stdin);
    
    int indice = strcspn(palavra,"\n");
    palavra[indice] = '\0';

    printf("Digite um unico caractere dessa palavra: ");
    scanf(" %c", &carac);

    printf("Digite um caractere para substituir o caractere digitado anteriormente na palavra: ");
    scanf(" %c", &substituto);

    for(int i = 0;palavra[i]!='\0';i++){
        if(palavra[i]==carac){
            palavra[i] = substituto;
        }
    }
    printf("Palavra com o caractere substituto: %s", palavra);
}