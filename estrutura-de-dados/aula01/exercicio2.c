/* *****************************************************************************
Implemente um TAD ContaBancaria, com os campos número e saldo onde os clientes podem fazer as seguintes operações:

- Iniciar uma conta com um número e saldo inicial
- Depositar um valor
- Sacar um valor
- Imprimir o saldo

Faça um pequeno programa para testar o seu TAD.
***************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ContaBancaria.h"

void Inicializa(ContaBancaria* conta, int numero, double saldo) {
  (*conta).numero = numero;
  (*conta).saldo = saldo;
}

void Deposito(ContaBancaria* conta, double valor) {
  (*conta).saldo += valor;
}

void Saque(ContaBancaria* conta, double valor) {
  (*conta).saldo -= valor;
}

void Imprime(ContaBancaria conta) {
  printf("Número da Conta: %d\n", conta.numero);
  printf("Saldo: %.2f\n", conta.saldo);
}

int main() {
  char pausa;
  ContaBancaria conta1;
  Inicializa(&conta1, 918556, 300);
  printf("\nAntes da Movimentação:\n");
  Imprime(conta1);
  
  Deposito(&conta1, 50.00);
  printf("\nDepois do Depósito:\n");
  Imprime(conta1);

  Saque(&conta1, 70.00);
  printf("\nDepois do Saque:\n");
  Imprime(conta1);

  printf("\n--------------Fim da Movimentação---------------\n");
  printf("\nTecle <Enter> para encerrar...\n");
  pausa = getchar();
  return 0;
}