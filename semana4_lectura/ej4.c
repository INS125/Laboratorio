#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp, *fp_salida; 
  //"archivo/entrada_dos.in"
  char nombre_archivo [100] = "archivos_entrada/entrada_4.in";
  fp = fopen( nombre_archivo, "r");

  char linea[5000];
  int sumas[10];
  int iter = 0;
  while ( fgets (linea, 1000, fp) != NULL ) { // Lee el archivo linea por linea
    linea[strcspn(linea, "\r\n")] = 0; // elimina el salto de linea de la palabra
    
    char delim[] = ";"; // define como delimitador el espacio para separar cada palabra
    char *palabra = strtok(linea, delim); // separa linea por delimitador (palabra por palabra) una vez
    while(palabra != NULL){   // recorre palabra a palabra
      /*
      En este punto, usted puede acceder a palabra
      */
      printf("'%s'\n", palabra); // ELIMINAR. Imprime la palabra. 
      sumas[iter] = sumas[iter] + atoi(palabra);
      
      palabra = strtok(NULL, delim); // vuelve a separar palabra a palabra. Si usted elimina esta linea el programa no se detiene
      printf("valor i %i \n", iter); // ELIMINAR. Imprime la palabra. 
      
    }
    iter++;
  }
  

  fp_salida = fopen( "archivos_salida/salida.txt", "w");
  for(int i = 0; i < 10 ; i++){
    //printf("%d ", sumas[i]);
    //fp_salida.write("%d\n", sumas[i]);
    fprintf(fp_salida,"%d \n", sumas[i]);
  }
  printf("\n");
  fclose(fp); // cierra el archivo de entrada 

  fclose(fp_salida); // cierra el archivo de salida 

  return 0;
}
