/**
  O programa a seguir demonstra o uso de linhas de comentários dentro de um programa escrito na linguagem de programacao C. O programa apresenta a quantidade de bits de cada tipo de dado suportado em C.
*/
/*
Programa .......: ex17.c
Autor(es) ......: Allan Souza 
Data ...........: 20/08/2021 
Versao .........: 1.0 
Revisao.........: 20/08/2021
*/

#include <stdio.h>

int main(void) {
  char pausa;

  unsigned short int unsignedShortInt;
  short shortType; 
  short int	shortInt; 
  signed short int	signedShortInt; 
  signed int	signedInt; 
  unsigned int	unsignedInt; 
  unsigned long int unsignedLongInt; 
  int	intType; 
  long	longType; 
  signed long int	signedLongInt; 
  long int	longInt; 
  char	charType; 
  signed char	signedChar; 
  unsigned char	unsignedChar; 
  float	floatType; 
  double	doubleType; 
  long double	longDouble;

  printf("Tipos de dados e seus tamanhos em bits.\n\n");
  
  printf("unsigned short int = %3i\n", sizeof(unsignedShortInt) * 8);
  printf("short = %3i\n", sizeof(shortType) * 8);
  printf("short int = %3i\n", sizeof(shortInt) * 8);
  printf("signed short int = %3i\n", sizeof(signedShortInt) * 8);
  printf("signed int = %3i\n", sizeof(signedInt) * 8);

  printf("unsigned int = %3i\n", sizeof(unsignedInt) * 8);
  printf("unsigned long int = %3i\n", sizeof(unsignedLongInt) * 8);
  printf("int = %3i\n", sizeof(intType) * 8);
  printf("long = %3i\n", sizeof(longType) * 8);
  printf("long int = %3i\n", sizeof(longInt) * 8);
  printf("signed long int = %3i\n", sizeof(signedLongInt) * 8);
  printf("char = %3i\n", sizeof(charType) * 8);
  printf("signed char = %3i\n", sizeof(signedChar) * 8);
  printf("unsigned char = %3i\n", sizeof(unsignedChar) * 8);
  printf("float = %3i\n", sizeof(floatType) * 8);
  printf("double = %3i\n", sizeof(doubleType) * 8);
  printf("long double = %3i\n", sizeof(longDouble) * 8);

  printf("\n"); 
  printf("Tecle <Enter> para encerrar...");
  scanf("%c", &pausa);
  
  return 0;
}