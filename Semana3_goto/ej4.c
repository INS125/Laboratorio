//recorrer una arreglo
#include <stdio.h>
#include <stdlib.h>


int main() {
  int arr[] = {1,2,3,4,5,6};

  int i = 0;
  Jump:
  printf("%d\n", arr[i]);
  i++;
  if(i == 6){
    goto Fin;
  }
  goto Jump;

  Fin:

  return 0;
}

