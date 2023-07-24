#include <stdio.h>

int main(){
  int nota, total = 0, contador;
  float media;
  contador = 0;

  printf("Entre com a nota: \tDigite -1 para encerrar e gerar a média\n");
  scanf("%d", &nota);

  while (nota != -1){
    contador++;
    total = total + nota;

    printf("Entre com a nota:\n");
    scanf("%d", &nota);

  }

  if (contador > 0){
    media = (float) total/contador;
    printf("A média é: %.2f\n", media);
  }
  else{
    printf("Não houve notas digitadas!\n");
  }
  return 0;
}
