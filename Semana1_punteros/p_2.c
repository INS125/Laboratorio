#include <stdio.h>



int main(){
    
  long arreglo[5] = {60,70,80,90,100};   // Declaración de arreglo

  printf("valor arreglo[0] %i \n", arreglo[0]);


  printf("posicion mem arreglo %i \n", arreglo); 
  
  printf("posicion mem arreglo[0] %i \n", &arreglo[0]); 
  printf("posicion mem arreglo[1] %i \n", &arreglo[1]); 
  printf("posicion mem arreglo[2] %i \n", &arreglo[2]); 
  printf("posicion mem arreglo[3] %i \n", &arreglo[3]); 
  printf("posicion mem arreglo[4] %i \n", &arreglo[4]); 

  int *puntero;    // Declaración de puntero
  puntero = arreglo;
  // Es equivalente a: 
  //puntero = &arreglo[0];
  printf("%i\n", *puntero); //arreglo[0]



  *puntero = *puntero + 5; // arreglo[0]++;
  //(*puntero)++;
  printf("%i\n", *puntero); //arreglo[0]
  
  printf("%i\n", arreglo[0]);
  printf("%i\n", arreglo[1]);

  
  puntero++;  // valor == &arreglo[1] // Incrementa puntero!
  printf("puntero en [1] %i\n", *puntero);
  puntero++;  // valor == &arreglo[2] // Incrementa puntero!
  printf("puntero en [2] %i\n", *puntero);
  puntero++;  // valor == &arreglo[3] // Incrementa puntero!
  printf("puntero en [3] %i\n", *puntero);


  puntero++;  // valor == &arreglo[4] // Incrementa puntero!
  printf("puntero en [4] %i\n", *puntero);

  puntero++;  // valor == &arreglo[#] // Incrementa puntero!
  printf("puntero en [#] %i\n", *puntero);
  puntero++;  // valor == &arreglo[#] // Incrementa puntero!
  printf("puntero en [#] %i\n", *puntero);
  //int **p_p_var;
}
