#include <stdio.h>

int main(void) {
  char pausa;
  int x1 = 1;
  int x2 = 10;
  int x3 = 100;
  int x4 = 1000;
  int x5 = 10000;
  int x6 = 2;
  int x7 = -2;

  printf("%d\n", x1);
  printf("%d\n", x2);
  printf("%d\n", x3);
  printf("%d\n", x4);
  printf("%d\n", x5);

  printf("\n");
  printf("%5d\n", x1);
  printf("%5d\n", x2);
  printf("%5d\n", x3);
  printf("%5d\n", x4);
  printf("%5d\n", x5);

  printf("\n");
  printf("%05d\n", x1);
  printf("%05d\n", x2);
  printf("%05d\n", x3);
  printf("%05d\n", x4);
  printf("%05d\n", x5);

  printf("\n");
  printf("%-5d\n", x1);
  printf("%-5d\n", x2);
  printf("%-5d\n", x3);
  printf("%-5d\n", x4);
  printf("%-5d\n", x5);

  printf("\n");
  printf("%+d\n", x6);
  printf("%+d\n", x7);

  printf("\n");
  printf("% d\n", x6);
  printf("% d\n", x7);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();
  
  return 0;
}