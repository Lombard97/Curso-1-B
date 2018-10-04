#include <stdio.h>
#include <stdlib.h>
#include "Usuarios-Series.h"



void inicializarSerieYUsuario(eSerieUsuario seriesUsuarios[])
{
    int cliente[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int serie[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};
    int i;

    for(i=0;i<20;i++)
    {
        seriesUsuarios[i].idSerie=cliente[i];
    }
}


void mostrarUsuarioYSerie(eSerie listaDeSeries[],int tamserie, eUsuario listaDeUsuarios[],int tamusuario)
{

    int i;
    int j;
    for(i=0;i<tamusuario;i++)
    {
        printf("%s ",listaDeUsuarios[i].nombre);

        for(j=0;j<tamserie;j++)
        {
            if(listaDeSeries[j].idSerie==listaDeUsuarios[i].idSerie)
            {
                printf("%s\n",listaDeSeries[j].nombre);
            }
        }
    }
}
void mostrarSerieConUsuarios(eSerie listaDeSeries[],int tamSerie,eUsuario ListaDeUsuarios[],int tamUsuario)
{
    int i;
    int j;
    for(i=0;i<tamSerie;i++)
    {
        printf("%s\n",listaDeSeries[i].nombre);

        for(j=0;j<tamUsuario;j++)
        {
             if(ListaDeUsuarios[j].idSerie == listaDeSeries[i].idSerie)
             {
                  printf("%s\n",ListaDeUsuarios[j].nombre);
             }
        }
    }

}

/*void mostrarUsuarioYSusSeries(eSerieUsuario[] usuarioSerie,int tamUsuarioSerie)
{

}*/

