#include <stdio.h>

int main(){

  int contador, notas, nota, media;
  contador = 1;
  int total_notas = 0;
  
  while (contador <= 10){
    printf("Entre com a nota %d:\n", contador);
    scanf("%d", &nota);

    total_notas = total_notas + nota;
    contador++;

  }

  media = total_notas/10;

  printf("A média é %d.", media);
  return 0;
}
