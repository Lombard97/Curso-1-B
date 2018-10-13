

typedef struct
{
    char patente[10];
    char marca[20];
    int estado;
    int idPropietario;

}eAutomoviles;


int initAutomoviles(eAutomoviles[],int);

void cargarAutomovil(eAutomoviles[],ePropietarios[],int,int);

int validarId(ePropietarios[],int,int);

int buscarLibreAuto(eAutomoviles[],int);
