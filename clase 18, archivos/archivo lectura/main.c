#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[20]="Hola, perrito";
    FILE* pArchivo;
    pArchivo = fopen(texto,"w");

    fprintf(pArchivo,texto);

    pArchivo = fopen(texto,"r");

    fgets(texto,20,pArchivo);

    fclose(pArchivo);

    puts(texto);

}
