#include <stdio.h>
#include <stdlib.h>

int main(){
  float num,prom,sum;
  int n;

  printf("Número maximo de inputs: \n");
  scanf("%d",&n);

  for(int i=1; i<=n ;++i){
    printf("Ingrese num %d: \n",i);
    scanf("%f",&num);

    if(num < 0.0){
      goto jump;
    } 
    sum=sum+num;
  }
  
  jump:
    prom=sum/(n);       
    printf("Promedio: %.2f \n",prom);
    return 0;
}