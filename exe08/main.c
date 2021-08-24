#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {
int b;
int k = 15;
char palavra[k];
fflush(stdin);
printf("digite uma palavra: ");
scanf("%s", palavra);
fflush(stdin);
b = exercicio2(palavra);
if(b == 1){
  printf("%d , ou seja a palvrava e um palindromo",b);
  }
  else{
  printf("%d , ou seja a palvrava nao e um palindromo",b);
            }
}