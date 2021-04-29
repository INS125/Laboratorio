//Eliminar las sentencias goto
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main() {
  srand(time(NULL));
  int rand_num = rand()%100;

  Numero:
  printf("Ingrese un numero: ");
  int num;  
  scanf("%i", &num);

  if(num == rand_num){
    goto Data;
  }
  else{
    if(num < rand_num){
      printf("Es mayor\n");      
    }
    if(num > rand_num){
      printf("Es menor\n");
    }
    goto Numero;
  }
  Data:
    printf("Fin\n");
  return 0;
}
