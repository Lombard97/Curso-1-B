#include <stdio.h>
#include <stdlib.h>
#include "UTN_INPUT.h"

int pedirNum(char[],int,int);
float pedirFlotante(char[]);
char pedirCaracter(char[]);
int validarEntero(int,char[],int,int);


int main()
{
    int legajo;
    float nota;
    char genero;

    legajo=pedirNum(" edad\n",18,65);
    printf("la edad es %d\n",legajo);

    nota=pedirFlotante("ingrese la nota\n");
    printf("La nota ingresa es %.2f\n",nota);

    genero=pedirCaracter("ingrese su genero\n");
    printf("El genero ingresado es %c",genero);

}

