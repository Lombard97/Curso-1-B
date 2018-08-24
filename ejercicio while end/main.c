#include <stdio.h>
#include <stdlib.h>

int main()
{
    char decision;
    int numeros;
    int contadorn=0;
    int contadorp=0;
    int acumuladorn=0;
    int acumuladorp=0;
    int contador0=0;
    int pares=0;
    int impares=0;

    printf("ingrese s para comenzar a ingresar numeros\n");
    scanf("%c",&decision);

    do
    {
        printf("Ingrese los numeros deseados\n");
        scanf("%i",&numeros);

        if(numeros<0)
        {
            contadorn++;
            acumuladorn=acumuladorn+numeros;

        }
        else
        {
             contadorp++;
            acumuladorp=acumuladorp+numeros;

            if(numeros==0);
            {
                contador0++;
                pares++;
            }
        }
    if(numeros%2==0)
    {
        pares++;
    }
    else
    {
        impares++;
    }
    fflush(stdin);
    printf("\nSi desea continuar ingresando ingrese s\nsi desea mostrar los datos ingrese otro caracter\n");
    scanf("%c",&decision);

    }while(decision=='s');

    printf("\nSe ingreso %i numeros negativos\n la suma de los negativos es %i\n",contadorn,acumuladorn);
    printf("\nSe ingreso %i numeros positivos\n la suma de los positivos es %i\n",contadorp,acumuladorp);
    printf("\nLa cantidad de ceros ingresados es %i",contador0);
    printf("\nLa cantidad de pares ingresados es %i",pares);
    printf("\nLa cantidad de impares ingresados es %i",impares);

    return 0;
}
