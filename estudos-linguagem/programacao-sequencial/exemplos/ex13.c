#include <stdio.h>

int main(void) {
  char pausa;
  int valor, resultado;

  valor = 1;
  resultado = valor++;
  
  printf("%d\n", resultado);
  printf("%d\n", valor);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}