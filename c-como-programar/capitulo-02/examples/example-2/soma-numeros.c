#include <stdio.h>

int main()
{
  int numero1;
  int numero2;
  int soma;

  printf("Digite o primeiro número: \n");
  scanf("%d",&numero1);

  printf("Digite o segundo número: \n");
  scanf("%d", &numero2);

  soma = numero1 + numero2;

  printf("%d + %d = %d\n", numero1, numero2, soma);
  return 0;
}
