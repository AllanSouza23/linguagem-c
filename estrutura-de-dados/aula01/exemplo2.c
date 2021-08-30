/* *********************************************************************************************************************
Proposto: Programa que recebe 3 notas e calcula a média aritmética delas
********************************************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
  // Definição de variáveis
  float N1, N2, N3, MEDIA;

  // Variável de pausa
  char PAUSA;

  // Entrada de Dados
  printf("Digite a nota 1: ");
  scanf("%f", &N1);
  while ((getchar() != '\n') && (!EOF))
    ;

  printf("Digite a nota 2: ");
  scanf("%f", &N2);
  while ((getchar() != '\n') && (!EOF))
    ;

  printf("Digite a nota 3: ");
  scanf("%f", &N3);
  while ((getchar() != '\n') && (!EOF))
    ;

  // Operação
  MEDIA = (N1 + N2 + N3) / 3;

  // Saída de Dados
  printf("\n************************* Resultados ***********************");
  printf("\nNota 1: %2.2f\n", N1);
  printf("Nota 2: %2.2f\n", N2);
  printf("Nota 3: %2.2f\n", N3);
  printf("Média final: %2.2f\n", MEDIA);

  printf("Tecle <Enter> para encerrar...");
  PAUSA = getchar();
}