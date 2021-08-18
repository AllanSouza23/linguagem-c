#include <stdio.h>

int main(void) {
  char pausa, nome[51];

  printf("Informe seu nome: ");
  scanf("%[^\n]", &nome); // De uma forma simples, a formatação %[] indica o que pode ser lido, ou, caso haja um acento circunflexo (^), qual entrada não deve ser lida.
  while ((getchar() != '\n') && (!EOF));
  printf("Olá, %s.\n", nome);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}