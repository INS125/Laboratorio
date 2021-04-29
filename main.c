#include <stdio.h>



int main(){
    int mi_arr [100000000];
    long mi_arreglo[] = {0,1,1,2,3,5,8,13};
    int i;
    int tamanio_arreglo = (sizeof(mi_arreglo) / sizeof(mi_arreglo[0]));

    printf("Tamaño total es %i \n", sizeof(mi_arreglo));
    printf("Tamaño de un elemento es %i \n", sizeof(mi_arreglo[0]));

    printf("Tamaño de un int es %i \n", sizeof(int));
    printf("Tamaño de un long es %i \n", sizeof(long));
    printf("Tamaño de un char es %i \n", sizeof(char));
    printf("Tamaño de un float es %i \n", sizeof(float));

    //static int mi_arr [100000000];

    for (i = 0; i < tamanio_arreglo; i++)
    {
        printf("mi_arreglo[%i] = %i \n", i, mi_arreglo[i]);
    
    }
    
    return 0;
}
