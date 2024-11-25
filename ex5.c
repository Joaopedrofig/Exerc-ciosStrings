#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char maiuscula[30];

    printf("Digite uma frase e eu a deixarei maiuscula: ");
    fgets(maiuscula, 30, stdin);

    int indice = strcspn(maiuscula, "\n");
    maiuscula[indice] = '\0';
    
    for(int i = 0;maiuscula[i]!='\0'; i++){
        maiuscula [i] = toupper(maiuscula[i]);
    }
      printf("%s", maiuscula);
}