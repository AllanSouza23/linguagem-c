#include <stdio.h>

int main(void) {
  char pausa;
  float numeroFlutuanteSimples = 0.0F;
  double numeroFlutuanteDuplo = 0.0;
  float numeroExponencial = 0.0F;

  printf("Informe um valor de ponto flutuante simples: ");
  scanf("%f", &numeroFlutuanteSimples);
  while((getchar() != '\n') && (!EOF));

  printf("O valor %.20f é igual a %e em exponencial.\n", numeroFlutuanteSimples, numeroFlutuanteSimples);
  printf("O valor %2.20f é igual a %E em exponencial.\n", numeroFlutuanteSimples, numeroFlutuanteSimples);

  printf("\nInforme um valor de ponto flutuante duplo: ");
  scanf("%lf", &numeroFlutuanteDuplo);
  while((getchar() != '\n') && (!EOF));

  printf("O valor %.20f é igual a %e em exponencial.\n", numeroFlutuanteDuplo, numeroFlutuanteDuplo);
  printf("O valor %.20f é igual a %E em exponencial.\n", numeroFlutuanteDuplo, numeroFlutuanteDuplo);

  printf("\nInforme um valor em exponencial: ");
  scanf("%e", &numeroExponencial);
  while((getchar() != '\n') && (!EOF));

  printf("O valor %e é igual a %1f em ponto flutuante.\n", numeroExponencial, numeroExponencial);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}