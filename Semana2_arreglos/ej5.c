#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void cambiar_valor(int *arr){
  *arr = 0;
  arr++;
  *arr = 50;
}

int main () {
    
  int num[3] = {10,20,30};
  printf("El valor de num es: %i\n", num[0]);

  cambiar_valor(&num);

  printf("El valor de num es: %i\n", num[0]);
  printf("El valor de num es: %i\n", num[1]);
  printf("El valor de num es: %i\n", num[2]);
  return 0;

}