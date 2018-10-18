#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "automotores.h"
#define ELEMENTS 20
#define LEN 5

int main()
{
    ePropietarios miPropietario[ELEMENTS];
    eAutomotores miAutomotor[ELEMENTS];
    int retornoId;
    int retornoInit;
    int opcion;
    int ordenamiento;
    int retornoInitAuto;
    int retornoHs;
    int retornoAdd;
    retornoInit = initPropietario(miPropietario,LEN);
    retornoInitAuto=initAutomotores(miAutomotor,LEN);

    mostrarPropietarios(miPropietario,LEN);

    retornoId = idGenerator(miPropietario,LEN);

    hardcodePropietario(miPropietario,3);
    hardcodeAutomotores(miAutomotor);




    do
    {
        printf("\nINGRESE UNA OPCION: \n");
        printf("1-Alta\n2-Modificar\n3-Baja\n4-Informes\n5-mostrar propietarios ordenados por nombre\n6-Ingreso de autos\n7-Egreso de autos\n8-Salir\n");
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
                ordenamiento = burbujeoMejoradoEPersonaXNombres(miPropietario,LEN,1);
                mostrarPropietarios(miPropietario,LEN);
                break;
            case 6:
                system("cls");
                   retornoAdd=addAutomotores(miAutomotor,LEN);
                   if(retornoAdd==-1)
                   {
                       printf("No hay mas espacio!");
                   }

                break;
            case 7:
                system("cls");
                 retornoHs=generarHs(miAutomotor,LEN);
                     if(retornoHs==-1)
                     {
                        printf("Ingreso una patente incorrecta.");
                     }

                break;
            case 8:
                system("cls");

                break;


        }
    }while(opcion!=8);


}

