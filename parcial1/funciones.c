#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "string.h"
#include <ctype.h>

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
    char opcion='s';
    int i;
    int validaChar;
    int validaInt;
    fflush(stdin);

    printf("Desea ingresar un propietario? s/n\n");
    scanf("%c",&opcion);

    while(opcion=='s')
    {
        for(i=0;i<len;i++)
        {
            if(list[i].estado==LIBRE)
            {
                fflush(stdin);
                printf("Ingrese su nombre");
                gets(list[i].nombre);

            validaChar=validarString(list[i].nombre);

            while(validaChar==0)
            {
                fflush(stdin);
                printf("Rengrese su nombre");
                gets(list[i].nombre);

                validaChar=validarString(list[i].nombre);
            }


            fflush(stdin);
            printf("ingrese su apellido");
            gets(list[i].apellido);

            validaChar=validarString(list[i].apellido);

            while(validaChar==0)
            {
                fflush(stdin);
                printf("Rengrese su apellido");
                gets(list[i].apellido);

                validaChar=validarString(list[i].apellido);
            }

            fflush(stdin);
            printf("ingrese su direccion");
            gets(list[i].direccion);

            fflush(stdin);
            printf("Ingrese su numero de tarjeta");
            gets(list[i].NumTarget);

            validaInt=validarNum(list[i].NumTarget);

            while(validaInt==0)
            {
                fflush(stdin);
                printf("Rengrese su numero de tarjeta");
                gets(list[i].NumTarget);

                validaInt=validarNum(list[i].NumTarget);
            }

            list[i].estado=OCUPADO;

            fflush(stdin);
            printf("Desea continuar ingresando propietarios? s/n\n");
            scanf("%c",&opcion);

                if(opcion=='n')
                {
                    break;
                }
            }


        }


    }


}

void modificarTarget(ePropietarios list[], int len)
{
    int i;
    char nuevaTarget[30];
    int id;

    for(i=0;i<len;i++)
    {
        printf("id: %d\n",list[i].idPropietario);
    }

    if(len>0)
    {
        printf("Ingrese el id del propietario a modificar");
        fflush(stdin);

        scanf("%d",&id);


        for(i=0;i<len;i++)
        {
            if(id==list[i].idPropietario)
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
    printf("Propietarios\n");

    for(i=0;i<len;i++)
    {
        if(list[i].estado==OCUPADO)
        {

            printf("%d %s %s %s %s\n",list[i].idPropietario,list[i].nombre,list[i].apellido,list[i].direccion,list[i].NumTarget);

        }

    }
}

void hardcodePropietario(ePropietarios list[],int len)
{

    char nombre[][50]={"Alejandro","Alejandro","Maria"};
    char apellido[][50]={"Carac","Borges","Diosque"};
    char direccion[][50]={"Cotagaita 2484","Arias 2245","Mendoza 3866"};
    char numeroT[][50]={"1000000000","2000000000","3000000000"};

    int i;
    for(i=0;i<len;i++)
    {
        strcpy(list[i].nombre,nombre[i]);
        strcpy(list[i].apellido,apellido[i]);
        strcpy(list[i].direccion,direccion[i]);
        strcpy(list[i].NumTarget,numeroT[i]);
        list[i].estado=OCUPADO;
    }
}

int validarString(char list[])
{
    int i;
    int error=1;

    for(i=0;i<strlen(list);i++)
    {
        if(!(isalpha(list[i])))
        {
            printf("INCORRECTO: INGRESE SOLO LETRAS!\n");
            error=0;
            break;
        }
    }
    return error;
}

int validarNum(char list[])
{
    int i;
    int error=1;

    for(i=0;i<strlen(list);i++)
    {
        if(!(isdigit(list[i])))
        {
            printf("INCORRECTO: INGRESE SOLO NUMEROS!\n");

            error=0;
            break;
        }
    }
    return error;
}

int burbujeoMejoradoEPersonaXNombres(ePropietarios list[],int len,int ascend)
{
    int fError=-1,flagSwap,i,conAltas=0;
    ePropietarios auxEPropietario;

    if(len<1 || (ascend<0 || ascend>1))
    {
        return fError;
    }
    do
    {
        flagSwap=0;
        for(i=0;i<len-1;i++)//ver por que menos uno
        {
            if(list[i].estado==OCUPADO || list[i+1].estado==OCUPADO)
            {
                conAltas=1;
            }
            if((ascend==1 && strcmp(list[i].nombre,list[i+1].nombre)>0 && list[i].estado==OCUPADO) || (ascend==0 && strcmp(list[i].nombre,list[i+1].nombre)<0 && list[i].estado==OCUPADO))
            {
                auxEPropietario=list[i];
                list[i]=list[i+1];
                list[i+1]=auxEPropietario;

                flagSwap=1;
            }
            /*if((acend==1 && strcmp(list[i].nombre,list[i+1].nombre)=0)&& list[i].estado==OCUPADO)
            {
                auxIguales=list[i];

            }*/
        }
        if(conAltas=1)
        {
            fError=0;
        }
        else
        {
           fError=-1;
        }
    }while(flagSwap==1);

    return fError;
}


