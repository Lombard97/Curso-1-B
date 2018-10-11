#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define ELEMENTS 5

int main()
{
    ePropietarios miPropietario[ELEMENTS];

    int retornoId;
    int retornoInit;
    int opcion;
    retornoInit = initPropietario(miPropietario,2);


    retornoId = idGenerator(miPropietario,2);

    hardcodePropietario(miPropietario,3);




    do
    {
        printf("\nINGRESE UNA OPCION: \n");
        printf("1-Alta\n2-Modificar\n3-Baja\n4-Informes\n5-Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingreso al sistema de altas\n");

                cargarPropietario(miPropietario,3);

                break;
            case 2:
                system("cls");
                modificarTarget(miPropietario,3);
                break;
            case 3:
                system("cls");
                borrarPropietario(miPropietario,3);

                break;
            case 4:
                system("cls");
                mostrarPropietarios(miPropietario,3);
                break;
            case 5:
                system("cls");

                system("cls");

                break;
                default:
                printf("Ingreso una opcion no valida, reingrese");
                break;
        }
    }while(opcion!=5);
}

