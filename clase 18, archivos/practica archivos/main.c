#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE* pArchivo;


    pArchivo = fopen("texto.txt","w");
    fprintf(pArchivo,"hola\n");
    fprintf(pArchivo,"chau");
    fclose(pArchivo);*/

     char p1[20];
     char p2[20];

     FILE* pArchivo;

     pArchivo = fopen("texto.txt","r");

     fgets(p1,20,pArchivo);

     puts(p1);

     fgets(p2,20,pArchivo);

     puts(p2);

    return 0;
}
