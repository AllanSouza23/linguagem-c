#include <stdio.h>

int main(void) {
  char pausa;

  printf("%s\n", "Hello World!");
  printf("Tecle <Enter> para encerrar...");
  pausa = getchar();
  
  return 0;
}