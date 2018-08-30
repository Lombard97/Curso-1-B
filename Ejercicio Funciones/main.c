#include <stdio.h>
#include <stdlib.h>

int pedirNum();
float pedirFlotante();
char pedirCaracter();

int main()
{
    int legajo;
    float nota;
    char genero;

    legajo=pedirNum();
    printf("El numero de legajo es %d\n",legajo);

    nota=pedirFlotante();
    printf("La nota ingresa es %.2f\n",nota);

    genero=pedirCaracter();
    printf("El genero ingresado es %c",genero);

}

int pedirNum()
{
    int legajo;
    printf("Ingrese Legajo\n");
    scanf("%d",&legajo);
    return legajo;
}
float pedirFlotante()
{
    float nota;
    printf("Ingrese nota");
    scanf("%f",&nota);
    return nota;
}
char pedirCaracter()
{
    char genero;
    printf("Ingrese M/F segun su genero");
    fflush(stdin);
    scanf("%c",&genero);
    return genero;
}

