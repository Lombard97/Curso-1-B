#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"

#define LIBRE 0
#define OCUPADO 1
#define ELIMINADO -1


int buscarLibre(ePropietarios list[],int len)
{
    int i;
    int retorno=-1;

    if(list!=NULL&&len>0)
    {
        for(i=0; i<len; i++)
        {
            if(list[i].estado==LIBRE)
            {
                retorno=i;
            }
        }
    }
    return retorno;
}


int initPropietario(ePropietarios list[],int len)
{
    int i;
    int funcRetorno=-1;

    if(len>0)
    {
        for(i=0; i<len; i++)
        {
            list[i].estado=LIBRE;
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

void cargarPropietario(ePropietarios list[],int len)
{

    int i;
    int indice;

    indice=buscarLibre(list,len);

    if(indice!=-1)
    {
        list[indice].idPropietario = ultimoId();
        fflush(stdin);
        printf("Ingrese su nombre");
        gets(list[indice].nombre);
        fflush(stdin);
        printf("ingrese su apellido");
        gets(list[indice].apellido);
        fflush(stdin);
        printf("ingrese su direccion");
        gets(list[indice].direccion);
        fflush(stdin);
        printf("Ingrese su numero de tarjeta de credito");
        gets(list[indice].NumTarget);
        list[indice].estado=OCUPADO;
    }

}

void modificarTarget(ePropietarios list[], int len)
{
    int i;
    char nuevaTarget[30];
    int id;


    for(i=0; i<len; i++)
    {
        if(list[i].estado==OCUPADO)
        {

        printf("id: %d\n",list[i].idPropietario);
        }
    }

    if(len>0)
    {

        printf("Ingrese el id del propietario a modificar");
        fflush(stdin);
        scanf("%d",&id);


        for(i=0; i<len; i++)
        {
            if(id==list[i].idPropietario);
            {
                printf("Ingrese el nuevo numero de su targeta de credito\n");
                fflush(stdin);
                gets(nuevaTarget);
                strcpy(list[i].NumTarget,nuevaTarget);

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

    for(i=0; i<len; i++)
    {
        if(list[i].estado==OCUPADO)
        {

            printf("id: %d\n",list[i].idPropietario);
        }
    }

    printf("Ingrese el id que desea eliminar");
    scanf("%d",&id);

    for(i=0; i<len; i++)
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

    for(i=0; i<len; i++)
    {
        if(list[i].estado==OCUPADO)
        {
            printf("\nids:%d",list[i].idPropietario);
            printf("\nnombre:%s",list[i].nombre);
            printf("\napellido:%s",list[i].apellido);
            printf("\ndireccion:%s",list[i].direccion);
            printf("\nNumero de tarjeta de credito:%s",list[i].NumTarget);
        }

    }
}

void hardcodePropietario(ePropietarios list[],int len)
{
    int estadohard=1;
    char nombre[][20]= {"Juan","Maria","Pedro"};
    char apellido[][20]= {"Perez","Borges","Diosque"};
    char direccion[][30]= {"Cotagaita 2484","Arias 2245","Mendoza 3866"};
    char numeroT[][30]= {"1000000000","2000000000","3000000000"};

    int i;
    for(i=0; i<3; i++)
    {
        list[i].idPropietario = ultimoId();
        list[i].estado=estadohard;
        strcpy(list[i].nombre,nombre[i]);
        strcpy(list[i].apellido,apellido[i]);
        strcpy(list[i].direccion,direccion[i]);
        strcpy(list[i].NumTarget,numeroT[i]);
    }
}


