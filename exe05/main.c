#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
  char text[100];
  gets(text);
  inverter(text);
  return(0);
}