
#include <stdio.h>

int main () {
    //int m[3][3];
    int tamano = 3;
    int **m = (int **)malloc( tamano * sizeof(int*));
        
    int **m_2 = m;
    
    for(int i = 0; i < tamano; i++){                
      *m_2 = (int *)malloc( tamano * sizeof(int));
      m_2++;
    }
    
    int f,c, sumafila=0, nfila=0, mayorfila=0;
   
    m_2 = m;
    
    
    for(int i = 0; i < tamano; i++){
        int *row = *m_2;
    
        for(int j = 0; j < tamano; j++){
          printf ("Introduce el valor de [%i][%i]: ",i,j);          
          scanf ("%i", row);
          //printf("%i \n", row);
          //printf("%i \n", *row);
          row++;
        }
        printf ("\n## Fila [%i] completada\n",i+1);
        m_2++;
    }

    m_2 = m;
    for (int i=0; i< tamano ;i++) {  
      int *row = *m_2;    
      for (int j=0;j< tamano;j++) {                    
          //printf("%i ", m[i][j]);          
          printf("%i ",*row);
          row++;
      } 
      m_2++;
      printf ("\n");
    }
    
    for (f=0;f<tamano; f++) {
        sumafila=0;
        nfila=f+1;
        for (c=0;c<tamano; c++) {
            sumafila+= m[f][c];
            if (sumafila > mayorfila) {
                mayorfila=sumafila;
            }
        }
    }
    
    printf ("\n-----------\n");
    printf ("La fila con suma mayor es: %i con resultado %i",nfila,mayorfila);
    
    return 0;


}