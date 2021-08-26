#include <stdio.h>
#include "functions.h"
#include <string.h>
#include <stdlib.h>

int palindromorec(char text[],int j,int tamanho,int pos){
  if(tamanho % 2 == 0 && j >= tamanho/2){
    if(text[pos] == text[j]){
      palindromorec(text,j-1,tamanho,pos+1);
      return 1;
    }else{
      return 0;
    }
    
  }

}
int palindromo(char text[]){
  int pos = 0;
  int j = strlen(text);
  int tamanho = strlen(text);
  return palindromorec(text,j,tamanho,pos);
  
}