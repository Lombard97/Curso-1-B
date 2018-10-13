#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[20];
    int i;

    printf("Ingrese su nombre\n");

    fgets(nombre,20,stdin);

    for(i=0;i<20;i++)
    {
        if(nombre[i]=='\n')
        {
            nombre[i]='\0';
        }
        if(nombre[i]==' ')
        {
            nombre[i]=',';
        }
    }


    printf("Ingrese su apellido\n");

    fgets(apellido,20,stdin);

    for(i=0;i<20;i++)
    {
        if(apellido[i]=='\n')
        {
            apellido[i]=' ';
        }
    }

    strcat(apellido,nombre);

    printf("%s",apellido);







}




