
#include "functions.h"

int MDC(int num1,int num2){
  if(num1 == num2){
    return num1;
    }
  else if(num1 > num2){
    MDC(num1-num2,num2);
  
  }else if(num1 < num2){
    MDC(num2,num1);
  }
}
