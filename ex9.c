#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];

    printf("Digite uma palavra e direi se ela eh um palindromo: ");
    fgets(palavra,30,stdin);

    int indice = strcspn(palavra, "\n");
    palavra[indice] = '\0';

    int i = 0;
    int j = strlen(palavra) - 1;
    int palindromo = 1;

    while(i<j){
        if(palavra[i]!=palavra[j]){
            palindromo = 0;
            break;
        }
        i++;
        j--;
    }
    if(palindromo){
        printf("A palavra eh um palindromo");
    }else{
        printf("A palavra nao eh um palindromo");
    }
}