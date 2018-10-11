#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"

#define LIBRE 0
#define OCUPADO 1
#define ELIMINADO -1


int initPropietario(ePropietarios list[],int len)
{
    int i;
    int funcRetorno=-1;

    if(len>0)
    {
        for(i=0;i<len;i++)
        {
            list[i].estado=LIBRE;
        }
        funcRetorno=0;
    }

    return funcRetorno;
}


int idGenerator(ePropietarios list[],int len)
{
    int id=1000;
    int i;
    int error=-1;
    for(i=0;i<len;i++)
    {
      if(list[i].estado==LIBRE)
      {
           list[i].idPropietario=id;
           id=id+1;
           error=0;
      }

    }
    return error;
}

void cargarPropietario(ePropietarios list[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        fflush(stdin);
        printf("Ingrese su nombre");
        gets(list[i].nombre);
        fflush(stdin);
        printf("ingrese su apellido");
        gets(list[i].apellido);
        fflush(stdin);
        printf("ingrese su direccion");
        gets(list[i].direccion);
        fflush(stdin);
        printf("Ingrese su numero de targeta de credito");
        scanf("%d",&list[i].NumTarget);
        list[i].estado=OCUPADO;
    }

}

void modificarTarget(ePropietarios list[], int len)
{
    int i;
    long int nuevaTarget;
    int id;

    for(i=0;i<len;i++)
    {
        printf("id: %d\n",list[i].idPropietario);
    }

    if(len>0)
    {
        printf("Ingrese el id del propietario a modificar");
        scanf("%d",&id);


        for(i=0;i<len;i++)
        {
            if(id==list[i].idPropietario);
            {
                printf("Ingrese el nuevo numero de su targeta de credito\n");
                scanf("%d",&nuevaTarget);
                list[i].idPropietario=id;
                printf("modificado con exito");
                break;
            }

        }
    }
}

void borrarPropietario(ePropietarios list[],int len)
{
    int i;
    int id;

    for(i=0;i<len;i++)
    {
        printf("id: %d\n",list[i].idPropietario);
    }

    printf("Ingrese el id que desea eliminar");
    scanf("%d",&id);

    for(i=0;i<len;i++)
    {
        if(id==list[i].idPropietario)
        {
            list[i].estado=ELIMINADO;
        }
    }
    printf("Eliminado con exito");
}

void mostrarPropietarios(ePropietarios list[],int len)
{
    int i;

    for(i=0;i<len;i++)
    {
        if(list[i].estado==OCUPADO)
        {
            printf("\nids:%d",list[i].idPropietario);
            printf("\nnombre:%s",list[i].nombre);
            printf("\napellido:%s",list[i].apellido);
            printf("\ndireccion:%s",list[i].direccion);
            printf("\nNumero de tarjeta de credito:%d",list[i].NumTarget);
        }

    }
}

void hardcodePropietario(ePropietarios list[],int len)
{
    int estadohard=1;
    char nombre[][20]={"Juan","Maria","Pedro"};
    char apellido[][20]={"Perez","Borges","Diosque"};
    char direccion[][30]={"Cotagaita 2484,Arias 2245,Mendoza 3866"};
    long int numeroT={1000000000,2000000000,3000000000};

    int i;
    for(i=0;i<len;i++)
    {
        list[i].estado=estadohard;
        strcpy(list[i].nombre,nombre[i]);
        strcpy(list[i].apellido,apellido[i]);
        strcpy(list[i].direccion,direccion[i]);
        list[i].NumTarget=numeroT;
    }
}


