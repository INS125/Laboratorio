//calcular factorial
#include <stdio.h>
#include <stdlib.h>


int main() {
  //5
  //1*2*3*4*5
  //120
  int num;
  scanf("%d", &num);
  int res_fact = 1;
  for(int i = 1; i <= num; i++){
    res_fact = res_fact * i;
  }
  printf("%d\n", res_fact);
}

