#include "UTN_INPUT.h"
#include <stdio.h>

int pedirNum(char texto[],int min,int max)
{
    int legajo;
    printf(" ingrese %s",texto);
    scanf("%d",&legajo);
    while(legajo<min||legajo>max)
    {
        printf("Reingrese %s",texto);
        scanf("%d",&legajo);
    }
    return legajo;
}

float pedirFlotante(char texto[])
{
    float nota;
    printf("%s",texto);
    scanf("%f",&nota);
    return nota;
}
char pedirCaracter(char texto[])
{
    char genero;
    printf("%s",texto);
    fflush(stdin);
    scanf("%c",&genero);
    return genero;
}

    int validarEntero(int legajo ,char texto[],int min,int max)
    {
        int validado;

        while(pedirNum>min&&pedirNum<max)
        {
            printf("%s",texto);
        }

        return validado;



    }
