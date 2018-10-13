#include <stdio.h>
#include <stdlib.h>

// hacer carga secuencial

int main()
{
    int miVector[5];
    int i;
    int j;
    int aux;
    for(i=0;i<5;i++)
    {
       for(j=i+1;j<5;j++)
       {
           if(miVector[i]>miVector[j])
           {
               aux = miVector[i];
               miVector[i]=miVector[j];
               miVector[j]=aux;
           }
       }
    }
    return 0;
}



