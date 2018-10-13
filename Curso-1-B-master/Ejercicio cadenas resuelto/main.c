#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[50];
    char buffer[1000];
    int i;

    puts("Ingrese su nombre");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        puts("Reingrese nombre");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre,buffer);

    puts("Ingrese su apellido");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>19)
    {
        puts("Reingrese apellido");
        fflush(stdin);
        gets(buffer);
    }
     strcpy(apellido,buffer);

     strcpy(nombreCompleto,apellido);

     strcat(nombreCompleto, ", ");

     strcat(nombreCompleto,nombre);

     strlwr(nombreCompleto);

     nombreCompleto[0]=toupper(nombreCompleto[0]);

     //isspace Devuelve 8 si es space y 0 si no

     for(i=0;i<strlen(nombreCompleto);i++)
     {

         if(isspace(nombreCompleto[i]))
         {
             nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
         }
     }

     puts(nombreCompleto);

    return 0;
}
