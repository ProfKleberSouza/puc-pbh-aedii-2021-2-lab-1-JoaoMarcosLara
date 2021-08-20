
#include "functions.h"

int menor(int vet[], int t){
  int num = vet[0];
  for(int i = 0;i<t;i++){
    if(num > vet[i]){
    num = vet[i];}
  }
return num;
}
