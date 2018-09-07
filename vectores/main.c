#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define T 5

int main()
{
    int miVector[T];
    int suma;
    int opcion;

    suma=sumarValores(miVector,T);
    inicializarVector(miVector,T);

    do
    {
        printf("1- cargar\n2- mostrar\n3- acumular\n4- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarVector(miVector,T);
            break;
        case 2:
            mostrarVector(miVector,T);
            break;
        case 3:
             suma=sumarValores(miVector,T);
             printf("La suma de los datos es %d\n",suma);
             break;
        case 4:
            opcion=4;

        }
    }while(opcion!=4);

    suma=sumarValores(miVector,T);

    printf("La suma es %d",suma);

    return 0;
}
