#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void inverter(char text[]){
  int tamanho = strlen(text)-1;
  for(int i = tamanho; i >= 0;i--){
    printf("%c",text[i]);
  }
}
