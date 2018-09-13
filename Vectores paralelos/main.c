#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[10];
    char cadena2 [50]="Hola a todos como estan";

    //copia dos cadenas con un limite definido de caracteres
    strncpy(cadena1,cadena2,9);

    puts(cadena1);

    return 0;
}
