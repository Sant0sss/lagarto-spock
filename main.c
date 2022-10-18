#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int jogador, computador, resp;

  do {
    printf("1 = Pedra\n");
    printf("2 = Papel\n");
    printf("3 = Teoura\n");
    printf("Escolha uma alternativa: ");
    scanf("%d", &jogador);
    switch (jogador) {
    case 1:
      printf("\nJogador escolheu Pedra\n");
      break;

    case 2:
      printf("\nJogador escolheu Papel\n");
      break;

    case 3:
      printf("\nJogador escolheu Tesoura\n");
      break;

    default:
      printf("Alternativa inválida\n");
    }
    srand(time(NULL));
    computador = ("%d", rand() % 3 + 1);
    switch (computador) {
    case 1:
      printf("\nComputador escolheu Pedra\n");
      break;

    case 2:
      printf("\nComputador escolheu Papel\n");
      break;

    case 3:
      printf("\nComputador escolheu Tesoura\n");
      break;
    }
    if (jogador == computador) {
      printf("\nEMPATE\n");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
      printf("\nJogador Venceu!\n");
    } else {
      printf("\nComputador Venceu!\n");
    }
    printf("\nDigite 1 para continuar ou 2 para sair: \n");
    scanf("%d", &resp);
  } while (resp == 1);
  return 0;
}