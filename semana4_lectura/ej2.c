#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp; 
  //"archivos_entrada/entrada_2.in"
  char nombre_archivo [100] = "archivos_entrada/entrada_1.in";
  fp = fopen( nombre_archivo, "r");

  char linea[5000];

  while ( fgets (linea, 1000, fp) != NULL ) { // Lee el archivo linea por linea
    linea[strcspn(linea, "\r\n")] = 0; // elimina el salto de linea de la palabra
    printf("\n\nLee linea por linea\n\n");
    printf("%s", linea);
    char delim[] = " "; // define como delimitador el espacio para separar cada palabra
    char *palabra = strtok(linea, delim); // separa linea por delimitador (palabra por palabra) una vez
    while(palabra != NULL){
      printf("\n\n%s\n\n", palabra);
      palabra = strtok(NULL, delim); // vuelve a separar palabra a palabra. Si usted elimina esta linea el programa no se detiene
    }
    
  }
  
  fclose(fp); // cierra el archivo de entrada 

  return 0;
}
