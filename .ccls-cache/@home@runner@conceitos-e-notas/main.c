#include <stdio.h>

int main(void) {
  float nota1;
  float nota2;
  float media;

  printf("Digite sua primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite sua segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1+nota2)/2;

  printf("Sua média é: %2f", media);

  if(media>=9)
    printf("\n A - Aprovado \n");
  else
    if (media>=7.5)
      printf("\n B - Aprovado\n");
  else
      if (media>=6)
        printf("\n C - Aprovado");
  else
        if (media>=4)
          printf("\n D - Reprovado");
  else
          if (media>=0)
            printf("\n E - Reprovado");

  return 0;
}
