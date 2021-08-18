#include <stdio.h>

int main(void) {
  char pausa;
  int numero1, numero2, resultado;

  printf("Informe o valor para o primeiro número: ");
  scanf("%3i", &numero1);
  while((getchar() != '\n') && (!EOF));

  printf("Informe o valor para o segundo número: ");
  scanf("%3d", &numero2);
  while((getchar() != '\n') && (!EOF));

  resultado = numero1 + numero2;

  printf("Resultado = %i\n", resultado);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}