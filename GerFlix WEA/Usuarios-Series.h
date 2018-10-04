#include "Serie.h"
#include "Usuario.h"
typedef struct
{
    int idSerie;
    int idUsuario;
}eSerieUsuario;


void inicializarSerieYUsuario(eSerieUsuario[]);

void mostrarUsuarioConSuSerie(eSerie[], int,eUsuario[],int);

void mostrarSerieConUsuarios(eSerie[],int,eUsuario[],int);

void mostrarUsuarioYTodasLasSeries(eSerieUsuario,int);
