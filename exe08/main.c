#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include "functions.h"
#include <string.h>

int main() {
  int a;
  char text[100];
  fgets(text,100,stdin);
  a = palindromo(text);

  if(a == 44){
    printf("nao");
  }else{
    printf("sim");
  }
}