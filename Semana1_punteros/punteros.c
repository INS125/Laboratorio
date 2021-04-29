#include <stdio.h>

int main(){
    
  int var = 144;
  int *p_var = &var;
  
  printf("direccion memoria de var es: %p \n", &var);
  printf("el valor de var es %i \n",var);

  printf("el puntero apunta a: %p \n",p_var);

  printf("El valor donde apunta el puntero es %i  -> *p_var \n", *p_var);
  //printf("%p \n",(void *)p_var);
  printf("Donde esta en memoria el puntero %p --> &p_var\n",&p_var);

  var = 300;
  printf("var contiene el valor %i \n", *p_var);
}
