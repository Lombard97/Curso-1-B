#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#include "Serie.h"
#define TAMSERIE 5
#define TAMUSUARIO 15

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    int opcion;

    do{
    printf("1- Mostrar listado de series\n2- Mostrar listado de Usuarios\n3- Mostrar listado de Usuarios y la serie que ve\n4- Mostrar la serie y los usuarios que la ven\n 5-Mostrar el usuario con TODAS las series que ve\n");
    scanf("%d",&opcion);

    switch(opcion)
        {
        case 1:
                system("cls");
                mostrarListaSeries(listaDeSeries,TAMSERIE);
                getch();
                system("cls");
                break;

        case 2:
                system("cls");
                mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
                getch();
                system("cls");
                break;

        case 3:
                system("cls");
                mostrarUsuarioYSerie(listaDeSeries,TAMSERIE, listaDeUsuarios,TAMUSUARIO);
                getch();
                system("cls");
                break;
        case 4:
                system("cls");
                mostrarSerieConUsuarios(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);
                getch();
                system("cls");
                break;
        case 5:
                system("cls");


                getch();
                system("cls");
                break;

        default:
            printf("Opcion incorrecta, reingrese");
            getch();
            system("cls");
        }


    }while(opcion!=9);
}
