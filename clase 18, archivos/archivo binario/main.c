#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    FILE* pArchivo;

    pArchivo=fopen("archivoBinario.dat","wb");//creo

    fwrite(&numero,sizeof(int),1,pArchivo);//utilizo

    fclose(pArchivo);//cierro

    pArchivo=fopen("archivoBinario.dat","rb");

    fread(&numero,sizeof(int),1,pArchivo);

    fclose(pArchivo);

    printf("El numero es: %d",numero);


}
