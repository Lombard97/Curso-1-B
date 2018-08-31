#include <stdio.h>
#include <stdlib.h>
// calcular factorial

int calcularFactorial(int);

int main()
{
        int numero;
        int factorial;
        int i;

        printf("Ingrese un numero");
        scanf("%d",&numero);

        factorial=calcularFactorial(numero);

        printf("El factorial de %d es %d",numero,factorial);
    return 0;
}
int calcularFactorial(int numero)
{
    int factorial;

    if(numero==0)
    {
        factorial=1;
    }
    else
    {
        factorial=numero * calcularFactorial(numero-1);
    }


    return factorial;
}
