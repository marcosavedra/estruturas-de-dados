#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

                //struct define a estrutura
typedef struct{ //typedef define um nome para estrutura
  int peso;     //variáveis
  int altura;
} PesoAltura;

int main(void) {

 /* forma de alocação na variável
  PesoAltura pessoal;
  pessoal.peso = 80;
  pessoal.altura = 180;
  printf("Peso: %d\nAltura: %d\n ", pessoa.peso, pessoa.altura);
  
  //condicional if
  if (pessoa.altura > alturaMaxima) printf("Altura acima da máxima.\n");
  else printf("Altura abaixo da máxima");
*/
//forma de alocação dinamica na variaval PesoAltura
  PesoAltura* pessoa = (PesoAltura*) malloc(sizeof(PesoAltura));
  pessoa->peso = 80;
  pessoa->altura = 185;
  printf("Peso: %d\n Altura: %d", pessoa->peso, pessoa->altura);
 
  if (pessoa->altura > alturaMaxima) printf("Altura acima da máxima.\n");
  else printf("Altura abaixo da máxima");

/*
  //condicional if
  if (pessoa.altura > alturaMaxima) printf("Altura acima da máxima.\n");
  else printf("Altura abaixo da máxima");
*/
  /*
  //Ponteiros Relembrando
  int x = 25;
  int* y = &x;
  *y = 30;
  printf("Valor atual de x: %d\n", x);
  */
  
  /*alocação de memória (Função malloc)
  int* y = (int*) malloc(sizeof(int));
  *y = 20;
  int z = sizeof(int);
  printf("*y=%d z=%d\n", *y, z);
  */
  return 0;
}