#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {
  int num;
  char text[100];
  fgets(text,100,stdin);
  num = palindromo(text);
  if(num == 0){
    printf("nao");
  }else{
    printf("sim");
  }
}