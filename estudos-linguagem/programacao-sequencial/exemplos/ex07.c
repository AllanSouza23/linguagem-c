#include <stdio.h>

int main(void)
{
  char pausa;
  float horasTrabalhadas, valorHora, percentualDesconto, totalDesconto, salarioBruto, salarioLiquido;

  printf("Entre com a quantidade de horas trabalhadas...: ");
  scanf("%f", &horasTrabalhadas);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre com o valor da hora de trabalho.........: ");
  scanf("%f", &valorHora);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre com o valor do percentual de desconto...: ");
  scanf("%f", &percentualDesconto);
  while ((getchar() != '\n') && (!EOF));

  salarioBruto = horasTrabalhadas * valorHora;
  totalDesconto = (percentualDesconto / 100) * salarioBruto;
  salarioLiquido = salarioBruto - totalDesconto;

  printf("\nSalário Bruto.....: %8.2f\n", salarioBruto);
  printf("Desconto..........: %8.2f\n", totalDesconto);
  printf("Salário Líquido...: %8.2f\n", salarioLiquido);

  printf("\nTecle <Enter> para encerrar...");
  pausa = getchar();

  return 0;
}