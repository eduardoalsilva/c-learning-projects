//Aritmética. Escreva um programa que peça ao usuário que digite dois números, obtenha esses números e 
//imprima a soma, o produto, a diferença, o quociente e o 
//módulo (resto da divisão).

#include <stdio.h>

int main()
{
  int valor1, valor2;
  printf("Entre com 2 valores: \n");
  scanf("%d%d", &valor1, &valor2);

  printf("%d + %d = %d\n", valor1, valor2, valor1 + valor2);
  printf("%d x %d = %d\n", valor1, valor2, valor1 * valor2);
  printf("%d - %d = %d\n", valor1, valor2, valor1 - valor2);
  printf("%d / %d = %d\n", valor1, valor2, valor1 / valor2);
  printf("%d módulo de %d = %d\n", valor1, valor2, valor1 % valor2);

  return 0;
}
