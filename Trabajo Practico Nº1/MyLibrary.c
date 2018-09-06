#include <stdio.h>
#include <stdlib.h>
#include "myLibrary.h"

float getFloat(char texto[])
{
    float operador;
    printf("%s",texto);
    scanf("%f",&operador);

    return operador;
}

char getChar()
{
    char opcion;
    printf("\nIngrese la opcion que desea realizar");
    fflush(stdin);
    scanf("%c",&opcion);
    while(opcion!='a'&&opcion!='b'&&opcion!='c'&&opcion!='d'&&opcion!='e')
    {
        printf("La opcion ingresada no esta disponible\nReingrese\n");
        fflush(stdin);
        scanf("%c",&opcion);
    }
    return opcion;
}

float sumar(float operador1,float operador2)
{
    float resultado;
    resultado=operador1+operador2;
    return resultado;
}

float restar(float operador1,float operador2)
{
    float resultado;
    resultado=operador1-operador2;
    return resultado;
}

float dividir(float operador1,float operador2)
{
    float resultado;
    while(operador2==0)
    {
        printf("El segundo operador es 0, no es posible dividir\nPrograma terminado.");
        break;

    }
    resultado=operador1/operador2;
    return resultado;

}

float multiplicar(float operador1,float operador2)
{
    float resultado;
    resultado=operador1*operador2;
    return resultado;
}
float calcularFactorial(float operador1)
{
     float factorial;

    if(operador1==0)
    {
        factorial=1;
    }
    else
    {
        factorial=operador1 * calcularFactorial(operador1-1);
    }


    return factorial;
}
