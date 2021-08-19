#include <stdio.h>

int main(void) {
  char pausa;
  int x, y;

  x = 10;
  y = ++x;
  printf("\nx = %d y = %d\n", x, y);

  x = 10;
  y = x++;
  printf("\nx = %d y = %d\n", x, y);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}