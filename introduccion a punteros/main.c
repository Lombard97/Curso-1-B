#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int entero;
    char caracter;
}eDato;

void cargar(int*,int);
void mostrar(int*,int);


int main()
{
    eDato miDato ={1,'B'};
    eDato* pDato = &miDato;

    printf("%d----%c\n",pDato->entero,pDato->caracter);

    //printf("%d----%c\n", (*(pDato+i)).entero,(*(pDato+i)).caracter);

    int i;
    for(i=0;i<1;i++)
    {

    printf("%d----%c\n", (pDato+i)->entero,(pDato+i)->caracter);

    }



   /* int array[5];

    cargar(array,5);

    mostrar(array,5);*/



    return 0;

}

void cargar(int* pArray,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("Ingrese un numero");
        fflush(stdin);
        scanf("%d",pArray+i);
    }
}

void mostrar(int* pArray,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d\n",*(pArray+i));

    }
}
