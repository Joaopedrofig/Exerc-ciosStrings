#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char *palavras[20];
    int i = 0;

    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    
    int indice = strcspn(frase, "\n");
    frase[indice] = '\0';
    char *token = strtok(frase, " ");
    

    while (token != NULL) {
        palavras[i++] = token; 
        token = strtok(NULL, " "); 
    }

   
    printf("As palavras da frase sao:\n");
    for (int j = 0; j < i; j++) {
        printf("Palavra %d: %s\n", j + 1, palavras[j]);
    }

    return 0;
}