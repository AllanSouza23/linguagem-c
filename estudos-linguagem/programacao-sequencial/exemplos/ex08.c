#include <stdio.h>

int main(void) {
  char pausa;
  int numeroInteiro, numeroOctal, numeroHexadecimal;

  printf("Informe um número inteiro na base decimal: ");
  scanf("%i", &numeroInteiro);
  while((getchar() != '\n') && (!EOF));

  printf("O valor decimal %d é igual a %o na base octal.\n", numeroInteiro, numeroInteiro);
  printf("O valor decimal %d é igual a %x na base hexadecimal minúsculo.\n", numeroInteiro, numeroInteiro);
  printf("O valor decimal %d é igual a %X na base hexadecimal maiúscula.\n", numeroInteiro, numeroInteiro);

  printf("\nInforme um valor inteiro octal: ");
  scanf("%o", &numeroOctal);
  while((getchar() != '\n') && (!EOF));

  printf("O valor octal %o é igual a %i inteiro decimal.\n", numeroOctal, numeroOctal);
  printf("O valor octal %o é igual a %x na base hexadecimal minúscula.\n", numeroOctal, numeroOctal);
  printf("O valor octal %o é igual a %X na base hexadecimal maiúscula.\n", numeroOctal, numeroOctal);

  printf("\nInforme um valor inteiro hexadecimal: ");
  scanf("%x", &numeroHexadecimal);
  while((getchar() != '\n') && (!EOF));

  printf("O valor hexadecimal %x é igual a %i inteiro na base decimal.\n", numeroHexadecimal, numeroHexadecimal);
  printf("O valor hexadecimal %X é igual a %o na base octal.\n", numeroHexadecimal,numeroHexadecimal);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}