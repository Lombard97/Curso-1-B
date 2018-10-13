#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 1


/*
a- cargar los datos de forma aleatoria
b- modificar: se ingresa el legago, lo busca y si lo encuentra modifica la nota 1
*/

/*informar
/hacer un menu con carga aleatoria de a uno
1- los alumnos con promedio 6 o mas
2- los alumnos con maximo promedio
3- indicar el sexo del alumno
4- calcular la alumna/s con mayo promedio
5- cantidad de alumnos desaprobados
6- cantidad de alumnos aprobados
7- porcentaje de alumnos aprobados y desaprobados
8- mostrar los alumnos que se llamen Juan
9- ordenar los datos alfabeticamente por nombre
10- ordenar por nombre y ante igualdad de nombre por promedio
11- mostrar los alumnos cuyo nombre comience con P
12- ordenar alumnos por sexo
13- Realizar un grafico que muestre alumnos entre 15-18, y de 19-25, 26 o mas
*/


float calcularPromedio(int,int,int);
void cargarAlumnos(char[][50],int[],int[],int[],float[],int);
void mostrarAlumnos(char[][50],int[],int[],int[],float[],int);
int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;


    cargarAlumnos(nombreCompleto,nota1,nota2,nota3,promedio,T);
        promedio[i] = calcularPromedio(nota1,nota2,nota3);
        mostrarAlumnos(nombreCompleto,nota1,nota2,nota3,promedio,T);
    return 0;
    }





float calcularPromedio(int nota1,int nota2,int nota3)
{
    float promedio;

    promedio=(nota1+nota2+nota3)/3;

    return promedio;
}

void cargarAlumnos(char nombreCompleto[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;

     for(i=0;i<T;i++)
    {
        printf("Ingrese su nombre completo ");
        fflush(stdin);
        gets(nombreCompleto[i]);
        printf("Ingrese la nota 1 ");
        scanf("%d",&nota1[i]);
        printf("Ingrese la nota 2 ");
        scanf("%d",&nota2[i]);
        printf("Ingrese la nota 3 ");
        scanf("%d",&nota3[i]);
    }

    return 0;
}
void mostrarAlumnos(char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;

    printf("%s %6s %6s %6s %6s\n","Nombre","Nota 1","Nota 2","Nota 3","Promedio");
     for(i=0;i<tam;i++)
     {
         printf("%2s %5d %5d %5d %.2f\n",nombre[i],nota1[i], nota2[i],nota3[i],promedio[i]);
     }


    return 0;
}

