#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "functions.h"
#include <string.h>

int palindromorec(char text[],int j,int pos){
    int v;
    if(text[pos] == text[j]){
       if(j >= pos){
            pos++;
            j--;
            palindromorec(text,j,pos);
        }
        else{
            return 1;
        }
    }else{
    return  0;
    }
}
int palindromo(char text[]){
  int pos = 0;
  int s;
  int j = strlen(text) - 2;
  s = palindromorec(text,j,pos);

  return s;

}