#include <stdio.h>
#include <stdlib.h>



int main()
{
    char texto[20]="Hola";

    FILE* pArchivo;

    pArchivo = fopen("texto.txt","w"); //recibe path y modo path: ruta al archivo, path: modo de escritura o lectura.

    fprintf(pArchivo,"%d como tas",9); //escribe en el archivo

   // fscanf(pArchivo);

    fclose(pArchivo);//permite que otra aplicacion use dicho archivo





    return 0;
}
