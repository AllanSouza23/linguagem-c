#include <stdio.h>
#include <math.h>

const double pi = 3.14159;

int main(void)
{
  char pausa;
  float altura, raio, volume;

  printf("Entre a altura...: ");
  scanf("%f", &altura);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o raio.....: ");
  scanf("%f", &raio);
  while ((getchar() != '\n') && (!EOF));

  volume = altura * pi * pow(raio, 2);
  printf("Volume do Cilindro.: %.2f\n", volume);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}