/** 
 Construa um programa que calcule a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível, onde são fornecidos a altura e o raio desse cilindro.
Sabendo que:
- a lata de tinta custa R$20,00
- cada lata contém 5 litros
cada litro de tinta pinta 3 metros quadrados.

e  que:
Área do cilindro= 2 vezes a área da base + circunferencia da base vezes a altura

e que raio e altura são dados de entrada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define precoLata 20.00 // Preco de uma lata de tinta
#define volumeLata 5 // Volume de tinta de uma lata 
#define pi 3.14159 // Valor de pi com cinco casas apos o ponto flutuante

int main(void) {
  float altura, raio, area, precoTotalLatas, quantiaLitros; // Declaracao das variáveis para calcular o tamanho do cilindro de combustível
  int quantiaLatas; 
  char pausa;

  // Entrada do valor da altura
  printf("Por favor, entre com a altura do cilindro: ");
  scanf("%f", &altura);
  while ((getchar() != '\n') && (!EOF));

  // Entrada do valor do raio
  printf("Por favor, entre com o raio do cilindro: ");
  scanf("%f", &raio);
  while((getchar() != '\n') && (!EOF));
  
  // Cálculo da área do cilindro
  area = 2 * (pi * pow(raio, 2)) + 2 * (pi * raio * altura); 
 
  // Calculos para quantia de litros, quantia de latas e preco das latas, respectivamente:
  quantiaLitros = area / 3;
  quantiaLatas = quantiaLitros / volumeLata;
  precoTotalLatas = precoLata * quantiaLatas;

  // Exibindo resultados finais
  printf("Serão necessárias %d latas de tinta para pintar o cilindro de %.2f metros, gastando R$ %.2f\n", quantiaLatas, area, precoTotalLatas);

  // Controle para encerrar o programa
  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}