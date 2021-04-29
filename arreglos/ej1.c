#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main () {
    
  srand(time(NULL));
  int size = 3;
  printf("Ingrese el tamaño: ");
  scanf("%i", &size);
  
  //int matriz[size][size];
  int **matriz = (int **)malloc( size * sizeof(int *) );
  //4
  //[*p0] [*p1] [*p2] [*p3] 
  printf("La direccion de memoria de la matriz es: %i\n", matriz);//&matriz[0]
  for(int i = 0; i < size; i++){
    printf("La direccion de memoria del bloque %i es: %i\n",i, &matriz[i]);
    matriz[i] = (int *)malloc(size * sizeof(int));
  }
  
  int random_number = rand();
  
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      //Llenar la matriz
      printf("La direccion de memoria en %i, %i es: %i\n",i,j, &matriz[i][j]);
      matriz[i][j] = rand()%100;
    }
  }

  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      printf("%i\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;

}