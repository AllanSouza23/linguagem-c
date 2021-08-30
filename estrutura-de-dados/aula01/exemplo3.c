/* *********************************************************************************************************************
Proposto: Construa um programa que tendo como entrada dois pontos quaisquer do plano P(x1, y1) e Q(x2, y2), imprima a distancia entre eles. A formula da distancia é: sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))
********************************************************************************************************************* */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
  float X1, Y1, X2, Y2;
  float DISTANCIA;
  char PAUSA;

  printf("\nDigite o valor de X1: ");
  scanf("%f", &X1);
  while((getchar() != '\n') && (!EOF));

  printf("\nDigite o valor de Y1: ");
  scanf("%f", &Y1);
  while((getchar() != '\n') && (!EOF));
  
  printf("\nDigite o valor de X2: ");
  scanf("%f", &X2);
  while((getchar() != '\n') && (!EOF));
  
  printf("\nDigite o valor de Y2: ");
  scanf("%f", &Y2);
  while((getchar() != '\n') && (!EOF));
  
  DISTANCIA = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
  printf("A distância entre os pontos P1 e P2 é %.2f\n", DISTANCIA);

  printf("\nTecle <Enter> para encerrar...");
  PAUSA = getchar();
}