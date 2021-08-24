#include <stdio.h>
#include "functions.h"

int main() {
 int num1;
 int num2;
 int mdc;
 scanf("%d",&num1);
 scanf("%d",&num2);
 mdc = MDC(num1,num2);
 printf("MDC = %d",mdc);
}