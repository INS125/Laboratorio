
#include <stdio.h>

void cambiar_valor(int **var){
  //printf("La direccion de memoria de var es: %i\n", var);
  //printf("El valor era %i\n", *var);
  **var = 10;
  //printf("El valor ahora es %i\n", *var);
}

int main () {
    
    //int **num = {{1,2},{3,4}};
    
    int tamano = 2;
    int **num = (int **)malloc( tamano * sizeof(int*));
        
    int **m_2 = num;
    
    for(int i = 0; i < tamano; i++){                
      *m_2 = (int *)malloc( tamano * sizeof(int));
      m_2++;
    }

    **num = 15;
    for (int f=0;f< 2;f++) {                
        for (int c=0;c< 2;c++) {
            printf("%i ", num[f][c]);
        }
        printf("\n");
    }

    
    cambiar_valor(num);
    

    //printf("El valor de num es %i\n", num);
    for (int f=0;f< 2;f++) {                
        for (int c=0;c< 2;c++) {
            printf("%i ", num[f][c]);
        }
        printf("\n");
    }
    return 0;

}