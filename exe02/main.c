#include <stdio.h>
#include "functions.h"
#define MAX 10

int main() {
int t=0;
int vet[MAX];
int menor;
printf("digite o tamanho do vetor <=10\n");
scanf("%d",&t);
printf("digite um numero para preencher o vetor\n");
for(int i=0;i<t;i++){
  printf("digite um numero vetor na posicao[%d]\n",i);
  scanf("%d",&vet[i]);
}
menor = menor_num(vet[],t);
  return(0);
}