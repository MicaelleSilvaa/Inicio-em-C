#include <stdio.h>
#include <string.h>

int main(void) {
  int escolha_filme; //declarando variavel
  char escolha_do_usuario[30]; //declarando variavel
  
  printf("Olá telespectador, seja bem-vindo!\n\n");
  printf("Por favor escolha o ingresso do filme que deseja comprar.\n\n"
    "1: Homem Aranha\n" "2: Cisne Negro\nDeseja qual: ");
  scanf("%d", &escolha_filme);  
  
if (escolha_filme == 1){
    printf("\n\nImprimir ingresso do filme Homem Aranha");
} else  printf("Imprimir ingresso do filme Cisne Negro\n\n");
  
printf("\n\nDeseja comprar outro ingresso?\n");
scanf("%s", escolha_do_usuario); 

if (strcmp(escolha_do_usuario, "Sim") == 0 || strcmp(escolha_do_usuario, "sim") == 0){
  printf("Retornando para o menu de opções.");
  scanf("%d", &escolha_filme);//retornar para a escolha do ingresso
  }else{ printf ("Tenha uma ótima sessão!"); //finalizar 
  }
   
  return 0;
}