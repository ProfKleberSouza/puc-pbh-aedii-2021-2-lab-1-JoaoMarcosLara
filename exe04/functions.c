#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void contador(char text[]){
  int tamanho;
  int A=0;
  int E=0;
  int I=0;
  int O=0;
  int U=0;
  tamanho = strlen(text);
  for(int i = 0; i<=tamanho ;i++){
    if(text[i] == 'a' ||text[i] == 'A'){
      A++;
    }
    else if(text[i] == 'e' ||text[i] == 'E'){
      E++;
    }
    else if(text[i] == 'i' ||text[i] == 'I'){
      I++;
    }
    else if(text[i] == 'o' ||text[i] == 'O'){
      O++;
    }
    else if(text[i] == 'u' ||text[i] == 'U'){
      U++;
    }
  }
  printf("A = %d\n",A);
  printf("E = %d\n",E);
  printf("I = %d\n",I);
  printf("O = %d\n",O);
  printf("U = %d\n",U);
}
