#include <stdio.h>
#include "functions.h"

int main()
{
int base;
int exp;
int resultado;
scanf("%d",&base);
scanf("%d",&exp);
resultado = potencia(base,exp);
printf("%d",resultado);

return 0;
}