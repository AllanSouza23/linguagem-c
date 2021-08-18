#include <stdio.h>

int main(void) {
  char pausa, nome[51];

  printf("Informe seu nome: ");
  scanf("%s", &nome);
  printf("Olá, %s.\n", nome);
  // Para limpar o buffer e evitar que algum dado indesejado seja processado, temos algumas formas:
  // getchar(); // Apenas pega o valor excedente sem alocá-lo em memória
  // fflush(stdin); // Limpa os dados de buffer de entrada no sistema Windows
  __fpurge(stdin); // Limpa os dados de buffer de entrada nos sistemas UNIX

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}