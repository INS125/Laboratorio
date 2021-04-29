//Eliminar las sentencias goto
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main() {
  srand(time(NULL));
  int rand_num = rand()%100;
  int num = -1;  
  while(num != rand_num){
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    
    if(num < rand_num){
      printf("Es mayor\n");      
    }
    if(num > rand_num){
      printf("Es menor\n");
    }
  }
  
  printf("Fin\n");
  
  return 0;
}
