// Definição do tipo

typedef struct
{
  int numero;
  double saldo;
} ContaBancaria;

// Cabeçalho das funções
void Inicializa(ContaBancaria* conta, int numero, double saldo);
void Deposito(ContaBancaria* conta, double valor);
void Saque(ContaBancaria* conta, double valor);
void Imprime(ContaBancaria conta);
