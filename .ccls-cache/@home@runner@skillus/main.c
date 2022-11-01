#include <stdio.h>

int main(void) {
  int quantidade;
  int escolha;
  int pessoas;
  float nota[5] = {1,2,3,4,5};
  int notas;

  printf("Olá senhores!");
  printf("\nEstamos com um novo combo: rodízio de massas e bebidas à vontade por apenas R$ 44,99. Para ofertá-lo precisamos que todos da mesa concordem.");

  printf("\n\nTemos quantas pessoas na mesa hoje? ");
  scanf("%i", &quantidade);

  printf("\nVocê aceita participar do rodízio?\n");

  for (pessoas = 1; pessoas <= quantidade; pessoas++) {
    printf("Digite 1: sim e 2: não: ");
    scanf("%i", &escolha);
    if (escolha == 2) {
      printf("\nVamos seguir com o rodízio padrão.");
      break;
    }
  }

  if (escolha == 1) {
    printf("\nParabéns, desfrutem do nosso rodízio de massas e bebidas à vontade!");
  }

  printf("\n\nPor favor avalie o nosso sistema com uma nota de 1 a 5");
  printf("\nQual a sua avaliação? ");
  scanf("%i", &notas);
  
  if (nota[notas-1]<=3){
    printf("Nos esforçaremos para melhorar.");
  }else if(nota[notas-1]>3){
    printf("Obrigado, volte sempre!");
  }

  return 0;
}


/*Fui ao restaurante Skillus recentemente e observei que o sistema de rodízio é
 * bem arcaíco. Caso as pessoas desejem o rodízio completo eles anotam na
 * comanda, decidi automatizar para simplificar mais o processo e evitar
 * prejuízos ao restaurante.*/

/*O programa deve perguntar quantas pessoas tem na mesa, em seguida fazer a
 * pergunta para essa quantidade de pessoas, se entre o grupo de pessoas alguém
 * optar por não, o sistema para de perguntar. Por fim, deve mostrar se o
 * rodízio completo (massas + bebidas) foi aceito ou se irá seguir para o
 * rodízio padrão e uma nota pelo sistema deve ser dada.*/