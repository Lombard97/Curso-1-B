#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "automotores.h"
#include "funciones.h"

#define ALPHA_ROMEO 22
#define FERRARI 23
#define AUDI 24
#define OTRO 25
#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1



int initAutomotores(eAutomotores list[],int len)
{
    int i;
    int error=-1;
    if(list!= NULL || len<0)
    {
        for(i=0;i<len;i++)
        {
            list[i].estado=VACIO;
            error=0;
        }
    }
    return error;
}
int addAutomotores(eAutomotores list[],int len)
{
    int i,funcRetorno=-1;
    char opcion='s';
    int validacion;
    if(len>0)
    {
      while(opcion=='s')
      {
        for(i=0;i<len;i++)
        {
          if(list[i].estado==VACIO)
          {
             system("cls");
             printf("Ingrese id del propietario: \n");
             scanf("%s",&list[i].idPropietario);
             validacion=validarNum(list[i].idPropietario);
             while(validacion==0)
             {
               system("cls");
               printf("Ingrese Id del propietario: \n");
               scanf("%s",&list[i].idPropietario);
               validacion=validarNum(list[i].idPropietario);
             }
             printf("Ingrese Patente del propietario: \n");
             scanf("%s",&list[i].patente);
             strupr(list[i].patente);
             printf("Ingrese Marca del propietario: \n");
             scanf("%s",&list[i].marca);
             validacion=validarString(list[i].marca);
             strupr(list[i].patente);
             while(validacion==0)
             {
                system("cls");
                printf("Ingrese Marca del propietario: \n");
                scanf("%s",&list[i].marca);
                strupr(list[i].patente);
                validacion=validarString(list[i].marca);
             }
             list[i].estado=OCUPADO;
             fflush(stdin);
             printf("Desea ingresar un usuario? (s/n)");
             scanf("%s",&opcion);
             if(opcion=='n')
             {
                break;
             }
          }
        }
    funcRetorno=0;
    }
    return funcRetorno;
  }
}

void hardcodeAutomotores(eAutomotores list[])
{
    char id[][50]={"1000","1001","1002","1003"};
    char marca[][50]={"ALPHA_ROMEO","FERRARI","AUDI","OTROS"};
    char patente[][50]={"MTA087","BTA236","PPE876","AUD979"};

    int i;
    for(i=0;i<4;i++)
    {
        strcpy(list[i].idPropietario,id[i]);
        strcpy(list[i].patente, patente[i]);
        strcpy(list[i].marca, marca[i]);
        list[i].estado=OCUPADO;
    }
}
void mostrarAutomotores(eAutomotores list[] , int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(list[i].estado==OCUPADO)
        {
            printf("%s %s %s\n",list[i].idPropietario,list[i].marca,list[i].patente);
        }

    }

}

int validarNumAutos(char list[])
{
  int i;
  int error=1;
  for(i=0;i<strlen(list);i++)
  {
      if(!(isdigit(list[i])))
      {
          printf("INCORRECTO:INGRESE SOLO NUMEROS!\n");
          error=0;
          break;
      }
  }
  return error;
}
int validarStringAutos(char list[])
{
    int i;
    int error=1;
    for(i=0;i<strlen(list);i++)
    {
        if(!(isalpha(list[i])))
        {
            printf("INCORRECTO: INGRESE SOLO LETRAS!\n");
            getch();
            error=0;
            break;
        }
    }
    return error;
}
int generarHs()
{
    int horas;

    srand(time(NULL));

    horas = (rand()%24)+1;

    return horas ;

}
int calcularHs(eAutomotores list[],int len)
{
    int i;
    char opcion2;
    char opcion[50];
    int horas;
    int dinero;
    int error=-1;
    char aux[4][50];
    if(len>0||list!=NULL||buscarAutomotoresLibre(list,len)==-1)
    {
        mostrarAutomotores(list,len);
        printf("Ingrese la patente del auto que egresa:\n");
        scanf("%s",&opcion);
        strupr(opcion);
        for(i=0;i<len;i++)
        {
            if(strcmp(opcion,list[i].patente)==0)
            {
               printf("Esta seguro que el auto egresa?(s/n)\n");
               fflush(stdin);
               scanf("%s",&opcion2);
               switch(opcion2)
               {
               case 's':
                    if(strcmp(list[i].marca,"ALPHA_ROMEO")==0)
                    {
                        horas=generarHs();
                        dinero=150*horas;
                        printf("ID PROPIETARIO: ---- PATENTE: ---- MARCA: ---- VALOR DE LA ESTADIA:\n\n");
                        printf("%s ---- %s ---- %s ---- %d\n",list[i].idPropietario,list[i].patente,list[i].marca,dinero);

                    }
                    else if(strcmp(list[i].marca,"FERRARI")==0)
                    {
                        horas=generarHs();
                        dinero=horas*175;
                        printf("ID PROPIETARIO: ---- PATENTE: ---- MARCA: ---- VALOR DE LA ESTADIA:\n\n");
                        printf("%s ---- %s ---- %s ---- %d\n",list[i].idPropietario,list[i].patente,list[i].marca,dinero);
                    }
                    else if(strcmp(list[i].marca,"AUDI")==0)
                    {
                        horas=generarHs();
                        dinero=horas*200;
                        printf("ID PROPIETARIO: ---- PATENTE: ---- MARCA: ---- VALOR DE LA ESTADIA:\n\n");
                        printf("%s ---- %s ---- %s ---- %d\n",list[i].idPropietario,list[i].patente,list[i].marca,dinero);
                    }
                    else
                    {
                        horas=generarHs();
                        dinero=horas*250;
                        printf("ID PROPIETARIO: ---- PATENTE: ---- MARCA: ---- VALOR DE LA ESTADIA:\n\n");
                        printf("%s ---- %s ---- %s ---- %d\n",list[i].idPropietario,list[i].patente,list[i].marca,dinero);
                    }
                    break;
               case 'n':
                    break;
              default:
                    printf("Ingrese opcion correcta");
                    break;

                    }
                list[i].estado=ELIMINADO;
                error=0;
            }

        }
    }
    return error;
}

int buscarAutomotoresLibre(eAutomotores list[],int len)
{
    int i,funcRetorno=-1;
    if(len>0)
    {
        for(i=0;i<len;i++)
        {
            if(list[i].estado==VACIO)
            {
                return i;
                break;
            }
        }
    }
    return funcRetorno;
}

