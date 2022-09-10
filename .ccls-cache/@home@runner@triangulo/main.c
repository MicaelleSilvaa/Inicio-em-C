#include <stdio.h>

int main(void) {
  float lado1;
  float lado2;
  float lado3;

  printf("Digite um lado: ");
  scanf("%f", &lado1);

  printf("Digite outro lado: ");
  scanf("%f", &lado2);

  printf("Digite um terceiro lado: ");
  scanf("%f", &lado3);

  if(lado1+lado2>lado3 || lado2+lado3>lado1 || lado1+lado3>lado2)
    printf("Parabéns, você formou um triângulo");
  else
    printf("Erro");

  if((lado1==lado2)&&(lado1==lado3)&&(lado2==lado3)){
    printf("equilátero");
  }else if (lado1==lado2 || lado2==lado3 || lado3==lado1){
    printf("isósceles");
  }else if (lado1!=lado2!=lado3){
        printf("escaleno");
    }
  
  return 0;
}