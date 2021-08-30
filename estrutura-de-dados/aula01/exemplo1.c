/* *********************************************************************************************************************
Proposto: Calcula a raiz quadrada de um número real positivo maior que 1.0 com precisão PREC (0.00001).
********************************************************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100      // Número máximo de iterações
#define PREC 0.00001 // Precisão da raiz

main()
{
  // Inicia o programa principal
  int I; // Contador
  float NUM;  //Número do qual se quer saber a raiz quadrada
  float RAIZ; // Aproximação para a raiz de NUM
  float INF, SUP; // Intervalo que contem a raiz procurada

  do {
    printf("\nDigite um número real positivo: ");
    scanf("%f", &NUM);
    } while (NUM <= 1.0); // Aceita somente NUM > 1.0
    
  INF = 0.0; // Inicializa o intervalo inicial de busca
  SUP = NUM;  
  I = 0;
  do {
    // Faça
    I++; // Incrementa o contador
    RAIZ = 0.5 * (INF + SUP); // Faz estimativa de raiz
    
    if (RAIZ * RAIZ > NUM) {
      // Se o chute for alto
      SUP = RAIZ; // Baixa o limite superior
    } else {
      // Senão
      INF = RAIZ; // Sobe o limite inferior
    } 
  } while((SUP - INF) > PREC && I < MAX); // Enquanto o intervalo existir

  RAIZ = 0.5 * (INF + SUP); // Estima a raiz
  printf("Raiz de %f é: %f +-%f\n", NUM, RAIZ, PREC); // Imprime o valor da raiz
} // Fim do programa
