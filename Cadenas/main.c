#include <stdio.h>
#include <stdlib.h>
#include <string.h>// agregar string.h para el manejo de cadenas
/*ejercicio: variables:nombre,apellido-> ingreso maximo de 20 caracter c/u
\ apellido y nombre -> concatena y el sig parametro "Gomez, Juan Luis"*/

//void pedirNombre(char[20]);

int main()
{
    char nombre[20];
    int cantidad;
    printf("Ingrese nombre: ");

    fgets(nombre,20,stdin);

    scanf("%[^\n]",nombre);
    //puts(nombre);

    nombre[strlen(nombre)-1]='\0';

    cantidad = strlen(nombre);

    printf("%d",cantidad);
}
    /*
    char otroNombre[20]="Anibal";
    int cantidad;
    int compara;
    int i;

    for(i=0;strlen(nombre);i++)
    {
        printf("%c\n",nombre[i]);
    }
    //strcpy(destino,origen): Recibe dos cadenas y pega la segunda en la primera

    //strcpy(nombre,otroNombre);

    /*printf("Ingrese su nombre");
    fflush(stdin);
    gets(nombre);*/

    //printf("%s\n",nombre);

    //stricmp ignora las mayusculas

    //strcmp(dos punteros a char, devuelve un entero): Compara dos cadenas de caracteres o dos literales, ordena alfabeticamente y devuelve 1 o 0
   //compara = strcmp(nombre,otroNombre);

   //printf("\n%d\n",compara);

   //cuenta los caracteres de la cadena
  /* cantidad = strlen(nombre);

    if(compara<0)
    {
         printf("%s esta antes que %s",nombre,otroNombre);
    }
    else
    {
        printf("%s esta despues que %s",otroNombre,nombre);
    }

    return 0;*/


    //strupr() pasa a mayusculas toda la cadena,no funciona con literales ej "nombre"

    /*strupr(nombre);
    printf("%s",nombre);*/

    //concatena dos cadenas,destino,origen
/*    strcat(otroNombre," ");
    strcat(otroNombre,nombre);

    printf("%s",otroNombre);
    //puts: muestra el vector
    puts(otroNombre);









}
/*void pedirNombre(char nombre[20])
{
    printf("Ingrese su nombre");
    fflush(stdin);
    gets(nombre);
    printf("%s",nombre);
}*/
