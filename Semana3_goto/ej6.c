#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int factorial(int num){

  int res_factorial= 1;
  
  int i = 1;
  Repe:
  res_factorial = res_factorial * i;
  i++;
  if(i <= num){
    goto Repe;
  }else{
    goto Fin;
  }  

  Fin:
  printf("%d\n", res_factorial);
}

int main() {
  
  printf("Ingrese un numero: ");
  int num;  
  scanf("%d", &num);
  factorial(num);
}
