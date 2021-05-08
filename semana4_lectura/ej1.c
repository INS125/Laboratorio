#include <stdio.h>
#include <string.h>

int main(void) {
  
	char cadena[1000];

	strcpy(cadena, "probabilities smaller input components will result in larger output probabilitiesprobabilitiesprobabilitiesprobabilities probabilities probabilities") ;

	printf("el largo de cadena es %lu \n\n", strlen(cadena) );
	printf("%s \n", cadena);
	char *ptr;

	// en realidad, un arreglo es un puntero al primer elemento

	ptr = &cadena[10];
  
  printf("\n\n");

  char cad2[100];
	strncpy(cad2, ptr, 20);

	cad2[0] = 97;
	printf("Imprimir 20 primeros caracteres de la nueva cadena\n");
	printf("%s \n\n su largo es: %lu \n", cad2, strlen(cad2));
	
  printf("\n\n el ascii es %i", (int)'a' );

	int el_valor = (int)'a';
	printf("\n\n el valor int %i \n", el_valor );

  printf("\n\n Imprimir la letra %c \n\n", el_valor );

  printf("Contenido del puntero: \n");
  printf("%s \n", ptr);
  printf("%i \n", ptr);
  printf("%i \n", &cadena[10]);

  printf("\n\n Si movemos el puntero ptr++ \n\n");
  ptr++;
  printf("%s \n", ptr);
  printf("%i \n", ptr);
  printf("%c \n", *ptr);

  printf("\n\n Otra vez ptr++ \n\n");
  ptr++;
  printf("%s \n", ptr);
  printf("%i \n", ptr);
  printf("%c \n", *ptr);
}