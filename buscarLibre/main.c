#include <stdio.h>
#include <stdlib.h>
#define A 5

void inicilizarVector(int[],int,int);

int buscarLibre(int[],int,int);

int main()
{
    int array[A];
    int i;
    char seguir;
    int indice;


    inicilizarVector(array,A,-1);

    do
    {
        indice=buscarLibre(array,A,-1);


        if(indice!=-1)
        {
            printf("Ingrese un numero\n");
            scanf("%d",&array[indice]);
        }
        else
        {
            printf("No hay lugar");
            break;

        }

        printf("Desea continuar s/n\n");
        fflush(stdin);
        scanf("%c",&seguir);

    }while(seguir=='s');

    return 0;
}


void inicilizarVector(int vector[],int tam, int inic)
{
    int i;

    for(i=0;i<A;i++)
    {
       vector[i]=inic;
    }
}

int buscarLibre(int vector[],int tam,int valor)
{
    int indice = -1;
    int i;

    for(i=0;i<tam;i++)
        {
            if(vector[i]==valor)
            {
                indice=i;
                break;
            }
        }

    return indice;
}
