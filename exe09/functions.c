#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void placas(char placar[], int m, int n, int pos){
  if(m == 0 && n == 0){
    placar[pos] = '\0';
    printf(" %s \n",placar);
  }
  else {
    if(m > 0){
      placar[pos] = 'A';
      placas(placar,m-1,n,pos+1);
    }
    if(n > 0){
      placar[pos] = 'B';
      placas(placar,m,n-1,pos+1);
    }
  }
}