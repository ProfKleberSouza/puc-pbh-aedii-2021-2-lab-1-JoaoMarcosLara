#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void inverter(char text[]){
  int tamanho = strlen(text);
  for(int i = tamanho-1; i > 0;i--){
    printf("%s",text[i]);
  }

}
