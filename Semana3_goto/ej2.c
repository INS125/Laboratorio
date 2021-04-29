#include <stdio.h>
#include <stdlib.h>

int main() {
  int edad = 0;

  Vote:
  
  printf("Entre su edad:\n");
  scanf("%d", &edad);
  if(edad < 1){
    goto Salida;
  }
  if(edad >= 18){
    printf("Usted puede votar\n");    
  }else{    
    printf("Usted no puede votar\n");    
  }
  goto Vote;
  
  Salida:

  return 0;
}