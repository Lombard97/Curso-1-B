#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int entero;
    char caracter;

}eEstructura;

eEstructura* cargarValor();


int main()
{
    eEstructura* pAux;
    pAux = cargarValor();
    printf("%c---%d",pAux->caracter,pAux->entero);

}

eEstructura* cargarValor()
{

    eEstructura* puntero;
    eEstructura aux;
    puntero = &aux;

    printf("Ingrese un caracter");
    scanf("%c",aux.caracter);
    printf("Ingrese un numero");
    scanf("%d",aux.entero);
    return puntero;

}
