#include <stdio.h>
#include <stdlib.h>
#include "MisFunciones.h"

int main()
{
    int operador1;
    int operador2;

    operador1=pedirNumero("Ingrese el primer numero con el que desea operar\n");
    operador2=pedirNumero("Ingrese el segundo numero con el que desea operar");
    printf("El primer operador es %d\nEl segundo operador es %d",operador1,operador2);

    return 0;
}
