#include <stdio.h>

int main() {
  float temperatura , umidade;
  unsigned int estoque ,  estoqueMinimo = 1000;

  // Variaveis 
  prinf("Entre com a temperatura\n");
  scanf("%f", &temperatura);
  printf("Entre com a umidade \n");
  scanf("%f", &umidade);
  prinf("Entre com o estoque\n");
  scanf("%u", &temperatura);

  //Dados

  if (temperatura > 30){
    printf("Temperatura está alta\n");
  } else {
    printf("temperatura está dentro dos parametros\n");
  }
    if (umidade > 50){
     printf("Umidade elevada\n");
  } else {
    printf("Umidade está dentro dos parametros\n");
  }
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo!\n");
    } else {
        printf("Estoque normal!\n");
    }
    



}