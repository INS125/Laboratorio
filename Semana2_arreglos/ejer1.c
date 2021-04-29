
#include <stdio.h>

int main () {
    //int m[3][3];
    int tamano_fila = 3;
    int tamano_col = 3;
    int **m = (int **)malloc( tamano_fila * sizeof(int*));;
        
    int **m_2 = m;
    
    for(int i = 0; i < tamano_fila; i++){                
      *m_2 = (int *)malloc( tamano_col * sizeof(int));
      m_2++;
    }
   
    m_2 = m;
    
    
    for(int i = 0; i < tamano_fila; i++){
        int *row = *m_2;
    
        for(int j = 0; j < tamano_col; j++){
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
    for (int i=0; i<tamano_fila; i++) {  
      int *row = *m_2;    
      for (int j=0;j<tamano_col; j++) {  
          printf("%i ", m[i][j]);          
          //printf("%i ",*row);
          row++;
      } 
      m_2++;
      printf ("\n");
    }
    
    for (f=0;f< tamano_fila;f++) {
        sumafila=0;
        nfila=f+1;
        for (c=0;c< tamano_col;c++) {
            //hacer la suma
        }
        //guardar suma
    }
    
    printf ("\n-----------\n");
    printf ("La fila con suma mayor es: %i con resultado %i",nfila,mayorfila);
    
    return 0;


}