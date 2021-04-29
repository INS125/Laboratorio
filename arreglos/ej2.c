
#include <stdio.h>

int main () {
    //int m[3][3];
    int tamano = 3;
    int **m = (int **)malloc( tamano * sizeof(int*));;
    
    //int *row = &*m;
    int **m_2 = m;
    
    for(int i = 0; i < tamano; i++){
      int *row = &*m_2;
      printf("1- %i\n", row);
      row = (int *)malloc( tamano * sizeof(int));
      m_2+=tamano * sizeof(int);
    }
    
    int f,c, sumafila=0, nfila=0, mayorfila=0;
    
   
    m_2 = m;
    //m_2++;
    printf("1- %i\n", &*(m_2));
    for(int i = 0; i < tamano; i++){
        int *row = &*m_2;
        //printf("1- %i\n", row);
        for(int j = 0; j < tamano; j++){
          printf ("Introduce el valor de [%i][%i]",i,j);
          
          scanf ("%i", row);
          printf("%i \n", row);
          printf("%i \n", *row);
          row++;
        }
        printf ("\n## Fila [%i] completada\n",i+1);
        m_2+=tamano * sizeof(int);
    }

    m_2 = m;
    for (f=0;f<3;f++) {  
      int *row = &*m_2;    
      for (c=0;c<3;c++) {
          //printf ("Introduce el valor de [%i][%i]",f,c);
          //scanf ("%i",&m[f][c]);
          printf("%i ", **m);
          printf("%i ",*row);
          row++;
      } 
      m_2+=tamano * sizeof(int);
      printf ("\n");
    }
    
    for (f=0;f<3;f++) {
        sumafila=0;
        nfila=f+1;
        for (c=0;c<3;c++) {
            sumafila+=m[f][c];
            if (sumafila > mayorfila) {
                mayorfila=sumafila;
            }
        }
    }
    
    printf ("\n-----------\n");
    printf ("La fila con suma mayor es: %i con resultado %i",nfila,mayorfila);
    
    return 0;


}