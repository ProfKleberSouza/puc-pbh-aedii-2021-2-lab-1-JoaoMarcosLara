#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "functions.h"

void tabela_verdade_rec(char tabela[], int num, int pos){
  if(num == 0){
    tabela[pos] = '\0';
    printf("%s\n", tabela);
  }else{
      tabela[pos] = '0';
      tabela_verdade_rec(tabela, num-1, pos+1);
      tabela[pos] = '1';
      tabela_verdade_rec(tabela, num-1, pos+1);
  }
}
void tabela_verdade(int num){
  char tabela[1000];
  tabela_verdade_rec(tabela, num, 0);

}