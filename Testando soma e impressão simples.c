#include <stdio.h>

int main(void) {
  int numero1;
  int numero2;
  int soma;

  printf("Oi, me chamo Micaelle!\n");
    printf("Estou testando meus conhecimentos em linguagem C.\n\n");

  printf("Por favor digite um número:");
  scanf("%i", &numero1 );

  printf("Por favor digite outro número:");
  scanf("%i", &numero2 );

  soma=numero1+numero2;

  printf("A soma dos números é: %2i", soma);



  return 0;
}