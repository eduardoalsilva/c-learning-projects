// Escreva uma instrução (ou comentário) para realizar 
//cada um dos seguintes:
//a) Indicar que um programa calculará o produto de
//três inteiros.
//b) Declarar as variáveis x, y, z e resultado para que 
//tenham o tipo int.
//c) Pedir ao usuário que digite três inteiros.
//d) Ler três inteiros do teclado e armazená-los nas variáveis x, y e z.
//e) Calcular o produto dos três inteiros contidos nas variáveis 
//x, y e z, e atribuir o resultado à variável resultado.
//    f) Exibir “O produto é” seguido pelo valor da variável inteira resultado.

#include <stdio.h>

int main()
{
  int num1, num2, num3, produto;
  printf("Digite os 3 números que deseja multiplicar: \n");
  scanf("%d%d%d", &num1, &num2, &num3);

  produto = num1 * num2 * num3;

  printf("%d x %d x %d = %d", num1, num2, num3, produto);
  return 0;
  
}
