#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"

/*float getFloat(char[]);
char getChar();
float sumar(float,float);
float restar(float,float);
float multiplicar(float,float);
float dividir(float,float);
float calcularFactorial(float);*/

int main()
{
    float operador1;
    float operador2;
    char opcion;
    float suma;
    float resta;
    float producto;
    float division;
    float factorial;
    operador1=getFloat("Ingrese el operador A\n");
    operador2=getFloat("Ingrese el operador B\n");

    system("cls");

    printf("Operador A=%.2f\nOperador B=%.2f\n",operador1,operador2);

    printf("a-Calcular la suma (A+B)\nb-Calcular la resta (A-B)\nc-Calcular la division (A/B)\nd-Calcular la multiplicacion (A*B)\ne-Calcular el factorial (A!)\n");

    opcion=getChar();

    switch(opcion)
        {
        case 'a':
            suma=sumar(operador1,operador2);
            printf("El resultado de la suma es:%.2f",suma);
            break;

        case 'b':
            resta=restar(operador1,operador2);
            printf("El resultado de la resta es:%.2f",resta);
            break;

        case 'c':
            division=dividir(operador1,operador2);
            printf("El resultado de la division es:%.2f",division);
            break;

        case 'd':
            producto=multiplicar(operador1,operador2);
            printf("El producto de los numeros es:%.2f",producto);
            break;
        case 'e':
            factorial=calcularFactorial(operador1);
            printf("El factorial de %.2f es:%.2f",operador1,factorial);
            break;
        }

}

/*float getFloat(char texto[])
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
}*/
