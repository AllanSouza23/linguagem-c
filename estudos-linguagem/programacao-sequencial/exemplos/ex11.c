#include <stdio.h>

int main(void) {
  char pausa;
  int quociente, dividendo, divisor, resto;

  printf("Entre com o valor do dividendo: ");
  scanf("%i", &dividendo);
  while((getchar() != '\n') && (!EOF));

  printf("Entre com o valor do divisor: ");
  scanf("%i", &divisor);
  while((getchar() != '\n') && (!EOF));

  quociente = dividendo / divisor;
  resto = dividendo % divisor;

  printf("Quociente = %8i\n", quociente);
  printf("Resto     = %8i\n", resto);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}