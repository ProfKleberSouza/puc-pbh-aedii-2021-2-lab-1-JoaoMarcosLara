#include <stdio.h>
#include "functions.h"
#define MAX 10

int main() {
int t=0;
int vet[MAX];
int a;
scanf("%d",&t);
for(int i=0;i<t;i++){
  scanf("%d",&vet[i]);
}
a = menor(vet,t);
printf("menor = %d",a);
  return(0);
}