#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "automoviles.h"
#define ELEMENTS 10
#define LEN 5

int main()
{
    ePropietarios miPropietario[ELEMENTS];
    eAutomoviles miAutomovil[ELEMENTS];
    int retornoId, retornoInit, retornoInitAuto, opcion;
    retornoInit = initPropietario(miPropietario,LEN);
    retornoInitAuto = initAutomoviles(miAutomovil,LEN);
    hardcodePropietario(miPropietario,LEN);

    do
    {
        printf("\nINGRESE UNA OPCION: \n");
        printf("1-Alta\n2-Modificar\n3-Baja\n4-Informes\n5-Alta automoviles\n6-Baja automoviles\n7-Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            printf("Ingreso al sistema de altas\n");

            cargarPropietario(miPropietario,LEN);

            break;
        case 2:
            system("cls");

            modificarTarget(miPropietario,LEN);
            break;
        case 3:
            system("cls");
            borrarPropietario(miPropietario,LEN);

            break;
        case 4:
            system("cls");
            mostrarPropietarios(miPropietario,LEN);
            break;
        case 5:
            system("cls");

            cargarAutomovil(miAutomovil,miPropietario,LEN,LEN);
            break;
        case 6:
            system("cls");


            break;
        case 7:
            system("cls");


            break;

        }
    }
    while(opcion!=7);
}

