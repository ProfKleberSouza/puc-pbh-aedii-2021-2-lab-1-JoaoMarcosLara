#include <stdio.h>
#include "functions.h"
#define MAX 50
//defini no maximo 50 numeros para o vetor
//*

int main() {
int t=0;
int vet[MAX];
int a;
int b;
scanf("%d",&t);
for(int i=0;i<t;i++){
  scanf("%d",&vet[i]);
}
maior_menor(vet, t, &a, &b);
printf("menor = %d\n",a);
printf("maior = %d",b);
  return(0);
}