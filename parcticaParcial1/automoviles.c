#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"
#include "automoviles.h"
#include <time.h>

#define LIBRE 0
#define OCUPADO 1
#define ELIMINADO -1

int initAutomoviles(eAutomoviles listAuto[],int len)
{
    int i;
    int funcRetorno=-1;

    if(len>0)
    {
        for(i=0; i<len; i++)
        {
            listAuto[i].estado=LIBRE;
        }
        funcRetorno=0;
    }

    return funcRetorno;
}

static int ultimoId()
{
    static int id = 1000;
    id ++;
    return id;
}

void cargarAutomovil(eAutomoviles listAuto[],ePropietarios listProp[],int lenAuto,int lenprop)
{

    int i;
    int indice;
    int idAux;

    indice=buscarLibre(listAuto,lenAuto);

    if(indice!=-1)
    {
        listAuto[indice].idPropietario = ultimoId();
        printf("3");
        do
        {
            printf("Ingrese su id de propietario");
            fflush(stdin);
            scanf("%d",&idAux);
        } while (validarId(listProp,lenprop,idAux));

        listAuto[indice].idPropietario = idAux;

        printf("ingrese su patente");
        fflush(stdin);
        gets(listAuto[indice].patente);

        printf("ingrese marca del automovil");
        fflush(stdin);
        gets(listAuto[indice].marca);

         listAuto[indice].estado=OCUPADO;
    }

}

int validarId(ePropietarios listProp[],int len,int id)
{
    int i;
    int retorno=-1;
    for(i=0;i<len;i++)
    {
        if(listProp[i].idPropietario==id&&listProp[i].estado==OCUPADO)
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

int buscarLibreAuto(eAutomoviles listAuto[],int len)
{
    int i;
    int retorno=-1;

    if(listAuto!=NULL&&len>0)
    {
        for(i=0; i<len; i++)
        {
            if(listAuto[i].estado==LIBRE)
            {
                retorno=i;
            }
        }
    }
    return retorno;
}


