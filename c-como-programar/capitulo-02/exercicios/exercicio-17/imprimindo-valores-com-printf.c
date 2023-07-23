/* Imprimindo valores com printf. Escreva um programa que imprima os números de 1 a 4 na mesma linha. Escreva o programa utilizando os métodos a seguir. */
/* a) Uma instrução printf sem especificadores de conversão. */
/* b) Uma instrução printf com quatro especificadores  */
/* de conversão. */
/* c) Quatro instruções printf. *\/ */


#include <stdio.h>

int main()
{
  printf("1234");
  printf("%d%d%d%d", 1, 2, 3, 4);
  printf("%d", 1);
  printf("%d", 2);
  printf("%d", 3);
  printf("%d",4);
  
  return 0;
}
