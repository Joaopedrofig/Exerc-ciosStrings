#include <stdio.h>
#include <string.h>

int main(){
  char nome[30],  carac;
  int contador = 0;
    
   printf("Digite seu nome: ");
   fgets(nome,30,stdin);

   int indice = strcspn(nome, "\n");
   nome[indice] = '\0';

   printf("Digite um caractere e direi quantas vezes ele aparece: ");
   scanf("%c", &carac);

   for(int i = 0;nome[i]!='\0';i++){
    if(nome[i]==carac){
        contador++;
   }
   }
   printf("Esse caractere apareceu %d vezes", contador);
}
