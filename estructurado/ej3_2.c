//calcular factorial

#include <stdio.h>
#include <stdlib.h>

int main() {

  int num;
  scanf("%d", &num);
  int res_fact = 1;

  int i = 1;
  Repe:
  
  res_fact = res_fact * i;
  i++;
  if(i > num){      
    goto Salida;
  }
  goto Repe;

  Salida:
  printf("%d\n", res_fact);
}

