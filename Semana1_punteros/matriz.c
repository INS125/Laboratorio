#include <stdio.h>

int main(){
    
    int mi_arreglo[2][4] = {{0,1,1,2},{3,5,8,13}};

    int i,j;
    
    for (i = 0; i < 2; i++){
        for (j = 0; j < 4; j++){
            printf("arreglo en la posición[%i][%i]=%i \n",i,j,mi_arreglo[i][j]);
        }
    }
}