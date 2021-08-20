
#include "functions.h"

int menor_num(int vet[], int n){
int menor = vet[0];
for(int i = 0;i<n;i++){
  if(menor > vet[i])
  menor = vet[i];
}
return menor;
}
