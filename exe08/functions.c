#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "functions.h"
#include <string.h>

int palindromorec(char text[],int j,int pos){
    if(text[pos] == text[j]){
       if(j >= pos){
            pos++;
            j--;
            palindromorec(text,j,pos);
        }
        else{
            return 33;
        }
    }else{
    return  44;
    }
}
int palindromo(char text[]){
  int pos = 0;
  int s;
  int j = strlen(text) - 2;
  s = palindromorec(text,j,pos);
  printf("%d",s);

  return s;

}