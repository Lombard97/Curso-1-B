#include <stdio.h>
#include <stdlib.h>
#include "myLibrary.h"


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
return 0;
}

