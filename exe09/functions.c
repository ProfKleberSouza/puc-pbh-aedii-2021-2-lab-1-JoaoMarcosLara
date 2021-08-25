#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void placas(int m, int n){
  char placar[100];
  placas_rec(placar,m, n,0);
}

void placas_rec(char placar[], int m, int n, int pos){
  if(m == 0 && n == 0){
    placar[pos] = '\0';
    printf(" %s \n",placar);
  }
  else {
    if(m > 0){
      placar[pos] = 'A';
      placas_rec(placar,m-1,n,pos+1);
    }
    if(n > 0){
      placar[pos] = 'B';
      placas_rec(placar,m,n-1,pos+1);
    }
  }
}