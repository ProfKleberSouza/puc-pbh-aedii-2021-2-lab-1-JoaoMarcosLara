#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
  char text[100];
  fgets(text,100,stdin);
  inverter(text);
  return(0);
}